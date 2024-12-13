void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  void *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  void *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B39844 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1BD3458(&System_Collections_Generic_List_string__TypeInfo, v3);
    sub_1BD3458(&StringLiteral_1/*""*/, v4);
    byte_4B39844 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v19 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall BattleLogData___ctor_43657480(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  void *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B39845 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_1BD3458(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BD3458(&StringLiteral_1/*""*/, v6);
    byte_4B39845 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)intag, v21, v22, v23, v24, v25, v26);
}


void __fastcall BattleLogData___ctor_43657692(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x22
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B39846 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_1BD3458(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1BD3458(&StringLiteral_1/*""*/, v8);
    byte_4B39846 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.tag, (int64_t)intag, v23, v24, v25, v26, v27, v28);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *list; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  int64_t v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4B39847 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    byte_4B39847 = 1;
  }
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  v8 = (Il2CppObject *)System_String__Concat_62525248(this->fields.tag, str, 0LL);
  if ( !list )
    goto LABEL_12;
  items = list->fields._items;
  v17 = Method_System_Collections_Generic_List_string__Add__;
  ++list->fields._version;
  if ( !items )
    goto LABEL_12;
  size = list->fields._size;
  v19 = (int64_t)v8;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      v8,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v20 + 4), v19, v10, v11, v12, v13, v14, v15);
  }
  v8 = (Il2CppObject *)this->fields.list;
  if ( !v8 )
LABEL_12:
    sub_1BD36B4(v8, v9);
  if ( this->fields.max < SLODWORD(v8[1].monitor) )
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)v8,
      0,
      (const MethodInfo_35C2564 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_4B39848 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_4B39848 = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_1BD36B4(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)list,
                                  (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_string__ToArray__);
}