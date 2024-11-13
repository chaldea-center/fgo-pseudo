void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  void *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  void *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B1886A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B1886A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v23 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)v23, v24, v25, v26, v27, v28, v29);
}


void __fastcall BattleLogData___ctor_43547876(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B1886B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, intag, method);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B1886B = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       intag,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)intag, v24, v25, v26, v27, v28, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogData___ctor_43548088(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  void *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B1886C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, intag, *(_QWORD *)&inmax);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B1886C = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       intag,
                                                       *(_QWORD *)&inmax,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)intag, v25, v26, v27, v28, v29, v30);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *list; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int64_t v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4B1886D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, str, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAt__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v7, v8);
    byte_4B1886D = 1;
  }
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  v10 = (Il2CppObject *)System_String__Concat_62401220(this->fields.tag, str, 0LL);
  if ( !list )
    goto LABEL_12;
  items = list->fields._items;
  v19 = Method_System_Collections_Generic_List_string__Add__;
  ++list->fields._version;
  if ( !items )
    goto LABEL_12;
  size = list->fields._size;
  v21 = (int64_t)v10;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      v10,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v21;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 4), v21, v12, v13, v14, v15, v16, v17);
  }
  v10 = (Il2CppObject *)this->fields.list;
  if ( !v10 )
LABEL_12:
    sub_1BCAA3C(v10, v11);
  if ( this->fields.max < SLODWORD(v10[1].monitor) )
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)v10,
      0,
      (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_4B1886E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, method, v2);
    byte_4B1886E = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)list,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}