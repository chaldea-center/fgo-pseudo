// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphPartyServantListViewItem___ctor(
        CharaGraphPartyServantListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v15; // q1
  int64_t v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]

  if ( (byte_49BA1D8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_IndexOf_long___, *(_QWORD *)&index);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_49BA1D8 = 1;
  }
  CharaGraphServantListViewItem___ctor(
    (CharaGraphServantListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    (const MethodInfo *)partyUserServantList);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1B4D1EC(v12, v13);
  v15 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v17, 0LL);
  this->fields._PartyIndex_k__BackingField = System_Array__IndexOf_long_(
                                               partyUserServantList,
                                               v16,
                                               (const MethodInfo_2FFB3C4 *)Method_System_Array_IndexOf_long___);
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