void __fastcall TransformServantInfo___ctor(TransformServantInfo_o *this, const MethodInfo *method)
{
  void *v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BC8D75 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC8D75 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.svtId = 0LL;
  v3 = StringLiteral_1/*""*/;
  this->fields.titleText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.titleText, (int64_t)v3, v4, v5, v6, v7, v8, v9);
}


void __fastcall TransformServantInfo___ctor_41764164(
        TransformServantInfo_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        System_String_o *titleText,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v8; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v8 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields._normalFollowerInfo = (struct FollowerInfo_o *)titleText;
  v8 = (PartyOrganizationUtility_o *)((char *)v8 + 24);
  *(_DWORD *)&v8[-1].fields._IsQuestStartMenuMode_k__BackingField = svtId;
  *(_DWORD *)(&v8[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = dispLimitCount;
  sub_1C1AB78(v8, (int64_t)titleText, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TransformServantInfo__GetDispLimitCount(
        TransformServantInfo_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t result; // w0
  bool v6; // vf
  int32_t svtId; // w20

  if ( (byte_4BC8D76 & 1) == 0 )
  {
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    byte_4BC8D76 = 1;
  }
  result = this->fields.dispLimitCount;
  if ( result <= 10 )
  {
    v6 = __OFSUB__(result--, 1);
    if ( result < 0 != v6 )
    {
      svtId = this->fields.svtId;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      return ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
    }
  }
  return result;
}