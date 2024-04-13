void __fastcall UserServantLeaderEntity___ctor(UserServantLeaderEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct EquipTargetInfo_o **p_equipTarget1; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EE65A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE65A = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  this->fields.userServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.servantLeaderInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.supportDeckId = 1;
  this->fields.equipTarget1 = 0LL;
  p_equipTarget1 = &this->fields.equipTarget1;
  *(struct EquipTargetInfo_o **)((char *)p_equipTarget1 + 28) = 0LL;
  *(struct EquipTargetInfo_o **)((char *)p_equipTarget1 + 20) = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)p_equipTarget1, 0LL, v18, v19, v20, v21, v22, v23);
}


void __fastcall UserServantLeaderEntity___ctor_35201652(
        UserServantLeaderEntity_o *this,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct EquipTargetInfo_o **p_equipTarget1; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42EE65B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, classPos, supportDeckId, method);
    byte_42EE65B = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  this->fields.userServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields.servantLeaderInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.supportDeckId = supportDeckId;
  this->fields.equipTarget1 = 0LL;
  p_equipTarget1 = &this->fields.equipTarget1;
  *((_DWORD *)p_equipTarget1 + 8) = 0;
  p_equipTarget1[3] = 0LL;
  *((_DWORD *)p_equipTarget1 + 5) = classPos;
  sub_B5D560((BattleServantConfConponent_o *)p_equipTarget1, 0LL, v20, v21, v22, v23, v24, v25);
}


void __fastcall UserServantLeaderEntity___ctor_35201816(
        UserServantLeaderEntity_o *this,
        UserServantLeaderEntity_o *src,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2

  if ( (byte_42EE65C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)src, (_DWORD)method, v3);
    byte_42EE65C = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !src )
    sub_B5D69C(v6, v7);
  userServantEntity = src->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)userServantEntity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  servantLeaderInfo = src->fields.servantLeaderInfo;
  this->fields.servantLeaderInfo = servantLeaderInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantLeaderInfo,
    (System_Int32_array **)servantLeaderInfo,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.supportDeckId = src->fields.supportDeckId;
  this->fields.svtId = src->fields.svtId;
  this->fields.userSvtId = src->fields.userSvtId;
  this->fields.classId = src->fields.classId;
  UserServantLeaderEntity__setEquipTargetInfo(this, src->fields.equipTarget1, v22);
}


System_String_o *__fastcall UserServantLeaderEntity__CreatePK(
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  if ( (byte_42EE659 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, classId, supportDeckId, method);
    byte_42EE659 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           classId,
           supportDeckId,
           (const MethodInfo_1AE36E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserServantLeaderEntity__CreatePrimaryKey(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserServantLeaderEntity__CreatePK(this->fields.userId, this->fields.classId, this->fields.supportDeckId, v2);
}


UserServantEntity_o *__fastcall UserServantLeaderEntity__GetUserServantEntity(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t __fastcall UserServantLeaderEntity__getEquipUserSvtId(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  if ( (byte_42EE65D & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE65D = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0LL;
  v6 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL);
}


ServantLeaderInfo_o *__fastcall UserServantLeaderEntity__getServantLeaderInfo(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.servantLeaderInfo;
}


void __fastcall UserServantLeaderEntity__setEquipTargetInfo(
        UserServantLeaderEntity_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EquipTargetInfo_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42EE65E & 1) == 0 )
  {
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, (_DWORD)equipTargetInfo, (_DWORD)method, v3);
    byte_42EE65E = 1;
  }
  v6 = (EquipTargetInfo_o *)sub_B5D694(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_30730116(v6, equipTargetInfo, 0LL);
  this->fields.equipTarget1 = v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipTarget1,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantLeaderEntity__setUserServantEntity(
        UserServantLeaderEntity_o *this,
        UserServantEntity_o *entity,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  __int128 v23; // q1
  __int128 v24; // q0
  __int64 v25; // x20
  __int64 v26; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42EE65F & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)entity,
      classPos,
      *(_QWORD *)&supportDeckId);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    byte_42EE65F = 1;
  }
  this->fields.userServantEntity = entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)entity,
    *(System_String_array ***)&classPos,
    *(System_String_array ***)&supportDeckId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.servantLeaderInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v15, v16, v17, v18, v19, v20);
  if ( !entity )
    sub_B5D69C(v21, v22);
  v23 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v28 = v29;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v28, 0LL);
  this->fields.supportDeckId = supportDeckId;
  this->fields.classId = classPos;
  v24 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v24;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v27, 0LL);
  v26 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v26;
  *(_QWORD *)&v30.fields.fakeValue = v25;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
}


void __fastcall UserServantLeaderEntity__setUserServantEntity_35202556(
        UserServantLeaderEntity_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x22
  struct EquipTargetInfo_o *equipTarget1; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42EE660 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)info, (_DWORD)method, v3);
    byte_42EE660 = 1;
  }
  this->fields.userServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  this->fields.servantLeaderInfo = info;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantLeaderInfo,
    (System_Int32_array **)info,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !info )
    sub_B5D69C(v16, v17);
  this->fields.userId = info->fields.userId;
  this->fields.supportDeckId = info->fields.supportDeckId;
  this->fields.classId = info->fields.classId;
  this->fields.userSvtId = info->fields.userSvtId;
  v19 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  equipTarget1 = info->fields.equipTarget1;
  this->fields.equipTarget1 = equipTarget1;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipTarget1,
    (System_Int32_array **)equipTarget1,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}