void __fastcall CharaGraphPartyServantListViewItem___ctor(
        CharaGraphPartyServantListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v17; // q1
  int64_t v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]

  if ( (byte_42E96EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_long___, index, (_DWORD)listViewPattern, userSvtEntity);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12, v13);
    byte_42E96EB = 1;
  }
  CharaGraphServantListViewItem___ctor(
    (CharaGraphServantListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    (const MethodInfo *)partyUserServantList);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_B5D69C(v14, v15);
  v17 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v19, 0LL);
  this->fields._PartyIndex_k__BackingField = System_Array__IndexOf_long_(
                                               partyUserServantList,
                                               v18,
                                               (const MethodInfo_1FC184C *)Method_System_Array_IndexOf_long___);
}


bool __fastcall CharaGraphPartyServantListViewItem__get_IsParty(
        CharaGraphPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyIndex_k__BackingField >= 0;
}


int32_t __fastcall CharaGraphPartyServantListViewItem__get_PartyIndex(
        CharaGraphPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyIndex_k__BackingField;
}