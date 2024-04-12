void __fastcall WarBoardSeSetting___ctor(WarBoardSeSetting_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_42B21EC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16725/*"bas13"*/);
    sub_B52984(&StringLiteral_16723/*"bas1"*/);
    sub_B52984(&StringLiteral_16679/*"ba20"*/);
    sub_B52984(&StringLiteral_16724/*"bas10"*/);
    sub_B52984(&StringLiteral_16677/*"ba19"*/);
    sub_B52984(&StringLiteral_16685/*"ba30"*/);
    sub_B52984(&StringLiteral_16680/*"ba21"*/);
    sub_B52984(&StringLiteral_16676/*"ba18"*/);
    byte_42B21EC = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16676/*"ba18"*/;
  this->fields.SelectSe = (struct System_String_o *)StringLiteral_16676/*"ba18"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.SelectSe, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_16677/*"ba19"*/;
  this->fields.DeselectSe = (struct System_String_o *)StringLiteral_16677/*"ba19"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.DeselectSe, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_16676/*"ba18"*/;
  this->fields.OpenSimpleInfoSe = (struct System_String_o *)StringLiteral_16676/*"ba18"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.OpenSimpleInfoSe, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_16679/*"ba20"*/;
  this->fields.OpenDetailInfoSe = (struct System_String_o *)StringLiteral_16679/*"ba20"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.OpenDetailInfoSe, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_16680/*"ba21"*/;
  this->fields.CloseDetailInfoSe = (struct System_String_o *)StringLiteral_16680/*"ba21"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.CloseDetailInfoSe, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_16685/*"ba30"*/;
  this->fields.HpGaugeAddSe = (struct System_String_o *)StringLiteral_16685/*"ba30"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.HpGaugeAddSe, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_16723/*"bas1"*/;
  this->fields.OnBoardSkillNameInfoSe = (struct System_String_o *)StringLiteral_16723/*"bas1"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.OnBoardSkillNameInfoSe, v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Int32_array **)StringLiteral_16724/*"bas10"*/;
  this->fields.OnBoardSkillBuffSe = (struct System_String_o *)StringLiteral_16724/*"bas10"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.OnBoardSkillBuffSe, v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Int32_array **)StringLiteral_16725/*"bas13"*/;
  this->fields.OnBoardSkillDebuffSe = (struct System_String_o *)StringLiteral_16725/*"bas13"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.OnBoardSkillDebuffSe, v59, v60, v61, v62, v63, v64, v65);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}