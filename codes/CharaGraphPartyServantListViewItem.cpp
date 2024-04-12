void __fastcall CharaGraphPartyServantListViewItem___ctor(
        CharaGraphPartyServantListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v14; // q1
  int64_t v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]

  if ( (byte_42AFDDE & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_long___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AFDDE = 1;
  }
  CharaGraphServantListViewItem___ctor(
    (CharaGraphServantListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    (const MethodInfo *)partyUserServantList);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_B52A5C(v11, v12);
  v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v16, 0LL);
  this->fields._PartyIndex_k__BackingField = System_Array__IndexOf_long_(
                                               partyUserServantList,
                                               v15,
                                               (const MethodInfo_201BCA8 *)Method_System_Array_IndexOf_long___);
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