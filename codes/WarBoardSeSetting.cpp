void __fastcall WarBoardSeSetting___ctor(WarBoardSeSetting_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x1
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7

  if ( (byte_4BC5887 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17342/*"bas13"*/, method);
    sub_1C1ABD4(&StringLiteral_17340/*"bas1"*/, v9);
    sub_1C1ABD4(&StringLiteral_17288/*"ba20"*/, v10);
    sub_1C1ABD4(&StringLiteral_17341/*"bas10"*/, v11);
    sub_1C1ABD4(&StringLiteral_17286/*"ba19"*/, v12);
    sub_1C1ABD4(&StringLiteral_17294/*"ba30"*/, v13);
    sub_1C1ABD4(&StringLiteral_17289/*"ba21"*/, v14);
    sub_1C1ABD4(&StringLiteral_17285/*"ba18"*/, v15);
    byte_4BC5887 = 1;
  }
  v16 = StringLiteral_17285/*"ba18"*/;
  this->fields.SelectSe = (struct System_String_o *)StringLiteral_17285/*"ba18"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.SelectSe, v16, v2, v3, v4, v5, v6, v7);
  v17 = StringLiteral_17286/*"ba19"*/;
  this->fields.DeselectSe = (struct System_String_o *)StringLiteral_17286/*"ba19"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.DeselectSe, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_17285/*"ba18"*/;
  this->fields.OpenSimpleInfoSe = (struct System_String_o *)StringLiteral_17285/*"ba18"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.OpenSimpleInfoSe, v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_17288/*"ba20"*/;
  this->fields.OpenDetailInfoSe = (struct System_String_o *)StringLiteral_17288/*"ba20"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.OpenDetailInfoSe, v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_17289/*"ba21"*/;
  this->fields.CloseDetailInfoSe = (struct System_String_o *)StringLiteral_17289/*"ba21"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.CloseDetailInfoSe, v38, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_17294/*"ba30"*/;
  this->fields.HpGaugeAddSe = (struct System_String_o *)StringLiteral_17294/*"ba30"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.HpGaugeAddSe, v45, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_17340/*"bas1"*/;
  this->fields.OnBoardSkillNameInfoSe = (struct System_String_o *)StringLiteral_17340/*"bas1"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.OnBoardSkillNameInfoSe, v52, v53, v54, v55, v56, v57, v58);
  v59 = StringLiteral_17341/*"bas10"*/;
  this->fields.OnBoardSkillBuffSe = (struct System_String_o *)StringLiteral_17341/*"bas10"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.OnBoardSkillBuffSe, v59, v60, v61, v62, v63, v64, v65);
  v66 = StringLiteral_17342/*"bas13"*/;
  this->fields.OnBoardSkillDebuffSe = (struct System_String_o *)StringLiteral_17342/*"bas13"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.OnBoardSkillDebuffSe, v66, v67, v68, v69, v70, v71, v72);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}