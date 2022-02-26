    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if(a[i] != i+1){
            for (int j = i+1; j < n; ++j)
            {
                if(a[j] == i+1){
                    reverse(a.begin()+i,a.begin()+j+1);
                    break;
                }
                else{
                    continue;
                }
            }
        }
        else{
            continue;
        }
 
        break;
    }
    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout << endl;
