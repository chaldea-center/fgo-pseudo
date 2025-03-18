// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_String_o *Name; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C21B43 & 1) == 0 )
  {
    sub_1C3B764(&DataNameKind_TypeInfo, *(_QWORD *)&kind);
    byte_4C21B43 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, 0LL);
  this->fields._MasterName_k__BackingField = Name;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._MasterName_k__BackingField,
    (int64_t)Name,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_2FF0400 *method)
{
  long double v1; // q0
  const MethodInfo_2FF0400_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C8D69C();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C8D640(v1);
  return **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184);
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_2FF0438 *method)
{
  long double v1; // q0
  const MethodInfo_2FF0438_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C8D69C();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C8D640(v1);
  return *(System_String_o **)(*(_QWORD *)(_1_DataMasterBase_Registration_TMaster + 184) + 8LL);
}


bool __fastcall DataMasterBase__Modified(DataMasterBase_o *this, int32_t revision, const MethodInfo *method)
{
  return this->fields.revision != revision;
}


void __fastcall DataMasterBase__RegisterKindAndName_object_(
        int32_t kind,
        System_String_o *name,
        const MethodInfo_2FF0470 *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double v8; // q0
  const MethodInfo_2FF0470_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0
  Il2CppClass *v14; // x0
  Il2CppClass *v15; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C8D69C();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C8D640(v8);
  **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184) = kind;
  v14 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1C8D640(v8);
  *((_QWORD *)v14->static_fields + 1) = name;
  v15 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
    v15 = (Il2CppClass *)sub_1C8D640(v8);
  sub_1C3B708(
    (PartyOrganizationUtility_o *)((char *)v15->static_fields + 8),
    (int64_t)name,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t __fastcall DataMasterBase__Revision(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields.revision;
}


int32_t __fastcall DataMasterBase__get_MasterKind(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields._MasterKind_k__BackingField;
}


System_String_o *__fastcall DataMasterBase__get_MasterName(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields._MasterName_k__BackingField;
}


bool __fastcall DataMasterBase__preProcess(DataMasterBase_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall DataMasterBase__set_MasterKind(DataMasterBase_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MasterKind_k__BackingField = value;
}


void __fastcall DataMasterBase__set_MasterName(
        DataMasterBase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MasterName_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._MasterName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DataMasterBase___c__DisplayClass23_0_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B8098 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataMasterBase___c__DisplayClass23_0_object__object____Il2CppFullySharedGenericType____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_31B80A0 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1C3B9C0(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo_31B80A0 *))item->klass->vtable[4].method)(
                            item,
                            item->klass->vtable[5].methodPtr,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}


void __fastcall DataMasterBase___c__DisplayClass23_0_object__object__int____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B7FE4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataMasterBase___c__DisplayClass23_0_object__object__int____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_31B7FEC *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1C3B9C0(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo_31B7FEC *))item->klass->vtable[4].method)(
                            item,
                            item->klass->vtable[5].methodPtr,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}


void __fastcall DataMasterBase___c__DisplayClass23_0_object__object__long____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B8020 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataMasterBase___c__DisplayClass23_0_object__object__long____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_31B8028 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1C3B9C0(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo_31B8028 *))item->klass->vtable[4].method)(
                            item,
                            item->klass->vtable[5].methodPtr,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}


void __fastcall DataMasterBase___c__DisplayClass23_0_object__object__object____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B805C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataMasterBase___c__DisplayClass23_0_object__object__object____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_31B8064 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1C3B9C0(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo_31B8064 *))item->klass->vtable[4].method)(
                            item,
                            item->klass->vtable[5].methodPtr,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}


void __fastcall DataMasterBase___c_object__object____Il2CppFullySharedGenericType____cctor(
        const MethodInfo_31B39B4 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  int64_t v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(int64_t, _QWORD); // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8D640();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8D640();
  v4 = sub_1C3B9B0(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_1C8D640();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(int64_t, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_1C8D640();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C8D640();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8D640();
  **(_QWORD **)(v17 + 184) = v6;
  v18 = (__int64)method->klass;
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8D640();
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C8D640();
  sub_1C3B708(*(PartyOrganizationUtility_o **)(v19 + 184), v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall DataMasterBase___c_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B3AA8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataMasterBase___c_object__object____Il2CppFullySharedGenericType____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31B3AB0 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object____Il2CppFullySharedGenericType____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31B3AB4 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__int____cctor(const MethodInfo_31B3750 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8D640();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8D640();
  v4 = (Il2CppObject *)sub_1C3B9B0(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C8D640();
  System_Object___ctor(v4, 0LL);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8D640();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C8D640();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8D640();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C8D640();
  sub_1C3B708(*(PartyOrganizationUtility_o **)(v14 + 184), (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall DataMasterBase___c_object__object__int____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B380C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataMasterBase___c_object__object__int____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31B3814 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__int____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31B3818 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__long____cctor(const MethodInfo_31B381C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8D640();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8D640();
  v4 = (Il2CppObject *)sub_1C3B9B0(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C8D640();
  System_Object___ctor(v4, 0LL);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8D640();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C8D640();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8D640();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C8D640();
  sub_1C3B708(*(PartyOrganizationUtility_o **)(v14 + 184), (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall DataMasterBase___c_object__object__long____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B38D8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataMasterBase___c_object__object__long____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31B38E0 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__long____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31B38E4 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__object____cctor(const MethodInfo_31B38E8 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8D640();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8D640();
  v4 = (Il2CppObject *)sub_1C3B9B0(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C8D640();
  System_Object___ctor(v4, 0LL);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8D640();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C8D640();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8D640();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C8D640();
  sub_1C3B708(*(PartyOrganizationUtility_o **)(v14 + 184), (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall DataMasterBase___c_object__object__object____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B39A4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataMasterBase___c_object__object__object____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31B39AC *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__object____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31B39B0 *method)
{
  ;
}