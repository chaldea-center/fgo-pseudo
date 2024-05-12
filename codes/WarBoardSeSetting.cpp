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
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1

  if ( (byte_438D22D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16936/*"bas13"*/);
    sub_B775C4(&StringLiteral_16934/*"bas1"*/);
    sub_B775C4(&StringLiteral_16891/*"ba20"*/);
    sub_B775C4(&StringLiteral_16935/*"bas10"*/);
    sub_B775C4(&StringLiteral_16889/*"ba19"*/);
    sub_B775C4(&StringLiteral_16897/*"ba30"*/);
    sub_B775C4(&StringLiteral_16892/*"ba21"*/);
    sub_B775C4(&StringLiteral_16888/*"ba18"*/);
    byte_438D22D = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16888/*"ba18"*/;
  this->fields.SelectSe = (struct System_String_o *)StringLiteral_16888/*"ba18"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.SelectSe, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_16889/*"ba19"*/;
  this->fields.DeselectSe = (struct System_String_o *)StringLiteral_16889/*"ba19"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.DeselectSe, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_16888/*"ba18"*/;
  this->fields.OpenSimpleInfoSe = (struct System_String_o *)StringLiteral_16888/*"ba18"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.OpenSimpleInfoSe, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_16891/*"ba20"*/;
  this->fields.OpenDetailInfoSe = (struct System_String_o *)StringLiteral_16891/*"ba20"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.OpenDetailInfoSe, v24, v25, v26, v27, v28, v29, v30);
  v65 = (System_Int32_array **)StringLiteral_16892/*"ba21"*/;
  this->fields.CloseDetailInfoSe = (struct System_String_o *)StringLiteral_16892/*"ba21"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.CloseDetailInfoSe, v65, v31, v32, v33, v34, v35, v36);
  v37 = (System_Int32_array **)StringLiteral_16897/*"ba30"*/;
  this->fields.HpGaugeAddSe = (struct System_String_o *)StringLiteral_16897/*"ba30"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.HpGaugeAddSe, v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Int32_array **)StringLiteral_16934/*"bas1"*/;
  this->fields.OnBoardSkillNameInfoSe = (struct System_String_o *)StringLiteral_16934/*"bas1"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.OnBoardSkillNameInfoSe, v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Int32_array **)StringLiteral_16935/*"bas10"*/;
  this->fields.OnBoardSkillBuffSe = (struct System_String_o *)StringLiteral_16935/*"bas10"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.OnBoardSkillBuffSe, v51, v52, v53, v54, v55, v56, v57);
  v58 = (System_Int32_array **)StringLiteral_16936/*"bas13"*/;
  this->fields.OnBoardSkillDebuffSe = (struct System_String_o *)StringLiteral_16936/*"bas13"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.OnBoardSkillDebuffSe, v58, v59, v60, v61, v62, v63, v64);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}