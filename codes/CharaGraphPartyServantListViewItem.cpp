void CharaGraphPartyServantListViewItem___ctor(
        CharaGraphPartyServantListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v15; // q0
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]

  if ( (byte_5937932 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_long___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5937932 = 1;
  }
  CharaGraphServantListViewItem___ctor(
    (CharaGraphServantListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    (const MethodInfo *)partyUserServantList);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_21FFECC(v11, v12);
  v15 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v16 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v20.fields.currentCryptoKey = v15;
  *(_OWORD *)&v20.fields.fakeValue = v16;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
  v19 = v20;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v19, 0);
  this->fields._PartyIndex_k__BackingField = System_Array__IndexOf_long_(
                                               partyUserServantList,
                                               v18,
                                               (const MethodInfo_39FB0D4 *)Method_System_Array_IndexOf_long___);
}


bool CharaGraphPartyServantListViewItem__get_IsParty(
        CharaGraphPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyIndex_k__BackingField >= 0;
}


int32_t CharaGraphPartyServantListViewItem__get_PartyIndex(
        CharaGraphPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyIndex_k__BackingField;
}