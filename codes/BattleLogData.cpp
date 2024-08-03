void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FE9DB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FE9DB = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tag, v9, v10, v11);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tag, v12, v13, v14);
}


void __fastcall BattleLogData___ctor_42434844(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FE9DC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FE9DC = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      intag,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tag, v10, v11, v12);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tag, (int32_t)intag, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogData___ctor_42435056(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FE9DD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FE9DD = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      intag,
                                                      *(_QWORD *)&inmax);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tag, v12, v13, v14);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tag, (int32_t)intag, v15, v16);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *list; // x20
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppObject *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_49FE9DE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    byte_49FE9DE = 1;
  }
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  v8 = (Il2CppObject *)System_String__Concat_61375396(this->fields.tag, str, 0LL);
  if ( !list )
    goto LABEL_12;
  items = list->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++list->fields._version;
  if ( !items )
    goto LABEL_12;
  size = list->fields._size;
  v14 = v8;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      v8,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
  }
  v8 = (Il2CppObject *)this->fields.list;
  if ( !v8 )
LABEL_12:
    sub_1B64324(v8);
  if ( this->fields.max < SLODWORD(v8[1].monitor) )
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)v8,
      0,
      (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_49FE9DF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_49FE9DF = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)list,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}