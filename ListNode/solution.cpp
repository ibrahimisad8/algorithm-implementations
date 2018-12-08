struct SomeStruct
{
    int value;
    SomeStruct* next;
}

int solution(InList* L)
{
    int result = 0;
    while( L != 0 )
    {
        ++result;
        L = L->next;
    }
    return result;
}