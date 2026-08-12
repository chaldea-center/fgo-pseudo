void WarBoardSeSetting___ctor(WarBoardSeSetting_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7

  if ( (byte_596E34E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17760/*"bas13"*/);
    sub_2213A60(&StringLiteral_17758/*"bas1"*/);
    sub_2213A60(&StringLiteral_17704/*"ba20"*/);
    sub_2213A60(&StringLiteral_17759/*"bas10"*/);
    sub_2213A60(&StringLiteral_17702/*"ba19"*/);
    sub_2213A60(&StringLiteral_17710/*"ba30"*/);
    sub_2213A60(&StringLiteral_17705/*"ba21"*/);
    sub_2213A60(&StringLiteral_17701/*"ba18"*/);
    byte_596E34E = 1;
  }
  v9 = StringLiteral_17701/*"ba18"*/;
  this->fields.SelectSe = (struct System_String_o *)StringLiteral_17701/*"ba18"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.SelectSe, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17702/*"ba19"*/;
  this->fields.DeselectSe = (struct System_String_o *)StringLiteral_17702/*"ba19"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.DeselectSe, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_17701/*"ba18"*/;
  this->fields.OpenSimpleInfoSe = (struct System_String_o *)StringLiteral_17701/*"ba18"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.OpenSimpleInfoSe, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_17704/*"ba20"*/;
  this->fields.OpenDetailInfoSe = (struct System_String_o *)StringLiteral_17704/*"ba20"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.OpenDetailInfoSe, v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_17705/*"ba21"*/;
  this->fields.CloseDetailInfoSe = (struct System_String_o *)StringLiteral_17705/*"ba21"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.CloseDetailInfoSe, v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_17710/*"ba30"*/;
  this->fields.HpGaugeAddSe = (struct System_String_o *)StringLiteral_17710/*"ba30"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.HpGaugeAddSe, v38, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_17758/*"bas1"*/;
  this->fields.OnBoardSkillNameInfoSe = (struct System_String_o *)StringLiteral_17758/*"bas1"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.OnBoardSkillNameInfoSe,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = StringLiteral_17759/*"bas10"*/;
  this->fields.OnBoardSkillBuffSe = (struct System_String_o *)StringLiteral_17759/*"bas10"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.OnBoardSkillBuffSe, v52, v53, v54, v55, v56, v57, v58);
  v59 = StringLiteral_17760/*"bas13"*/;
  this->fields.OnBoardSkillDebuffSe = (struct System_String_o *)StringLiteral_17760/*"bas13"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.OnBoardSkillDebuffSe, v59, v60, v61, v62, v63, v64, v65);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}