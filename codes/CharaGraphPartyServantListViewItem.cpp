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
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v16; // q1
  int64_t v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h]

  if ( (byte_4B15577 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_long___, *(_QWORD *)&index, listViewPattern);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    byte_4B15577 = 1;
  }
  CharaGraphServantListViewItem___ctor(
    (CharaGraphServantListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    (const MethodInfo *)partyUserServantList);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1BCAA3C(v13, v14);
  v16 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
  v18 = v19;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v18, 0LL);
  this->fields._PartyIndex_k__BackingField = System_Array__IndexOf_long_(
                                               partyUserServantList,
                                               v17,
                                               (const MethodInfo_300EAB0 *)Method_System_Array_IndexOf_long___);
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