void WarBoardSeSetting___ctor(WarBoardSeSetting_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  int32_t v59; // w1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7

  if ( (byte_4D2A3A1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17114/*"bas13"*/);
    sub_1C94098(&StringLiteral_17112/*"bas1"*/);
    sub_1C94098(&StringLiteral_17066/*"ba20"*/);
    sub_1C94098(&StringLiteral_17113/*"bas10"*/);
    sub_1C94098(&StringLiteral_17064/*"ba19"*/);
    sub_1C94098(&StringLiteral_17072/*"ba30"*/);
    sub_1C94098(&StringLiteral_17067/*"ba21"*/);
    sub_1C94098(&StringLiteral_17063/*"ba18"*/);
    byte_4D2A3A1 = 1;
  }
  v9 = StringLiteral_17063/*"ba18"*/;
  this->fields.SelectSe = (struct System_String_o *)StringLiteral_17063/*"ba18"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.SelectSe, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17064/*"ba19"*/;
  this->fields.DeselectSe = (struct System_String_o *)StringLiteral_17064/*"ba19"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.DeselectSe, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_17063/*"ba18"*/;
  this->fields.OpenSimpleInfoSe = (struct System_String_o *)StringLiteral_17063/*"ba18"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.OpenSimpleInfoSe, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_17066/*"ba20"*/;
  this->fields.OpenDetailInfoSe = (struct System_String_o *)StringLiteral_17066/*"ba20"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.OpenDetailInfoSe, v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_17067/*"ba21"*/;
  this->fields.CloseDetailInfoSe = (struct System_String_o *)StringLiteral_17067/*"ba21"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.CloseDetailInfoSe, v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_17072/*"ba30"*/;
  this->fields.HpGaugeAddSe = (struct System_String_o *)StringLiteral_17072/*"ba30"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.HpGaugeAddSe, v38, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_17112/*"bas1"*/;
  this->fields.OnBoardSkillNameInfoSe = (struct System_String_o *)StringLiteral_17112/*"bas1"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.OnBoardSkillNameInfoSe, v45, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_17113/*"bas10"*/;
  this->fields.OnBoardSkillBuffSe = (struct System_String_o *)StringLiteral_17113/*"bas10"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.OnBoardSkillBuffSe, v52, v53, v54, v55, v56, v57, v58);
  v59 = StringLiteral_17114/*"bas13"*/;
  this->fields.OnBoardSkillDebuffSe = (struct System_String_o *)StringLiteral_17114/*"bas13"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.OnBoardSkillDebuffSe, v59, v60, v61, v62, v63, v64, v65);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}