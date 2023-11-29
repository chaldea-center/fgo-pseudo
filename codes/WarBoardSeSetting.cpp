void __fastcall WarBoardSeSetting___ctor(WarBoardSeSetting_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Int32_array **v16; // x1
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
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_40FBA7E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16546, method);
    sub_B16FFC(&StringLiteral_16544, v9);
    sub_B16FFC(&StringLiteral_16501, v10);
    sub_B16FFC(&StringLiteral_16545, v11);
    sub_B16FFC(&StringLiteral_16499, v12);
    sub_B16FFC(&StringLiteral_16507, v13);
    sub_B16FFC(&StringLiteral_16502, v14);
    sub_B16FFC(&StringLiteral_16498, v15);
    byte_40FBA7E = 1;
  }
  v16 = (System_Int32_array **)StringLiteral_16498;
  this->fields.SelectSe = (struct System_String_o *)StringLiteral_16498;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.SelectSe, v16, v2, v3, v4, v5, v6, v7);
  v17 = (System_Int32_array **)StringLiteral_16499;
  this->fields.DeselectSe = (struct System_String_o *)StringLiteral_16499;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.DeselectSe, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_16498;
  this->fields.OpenSimpleInfoSe = (struct System_String_o *)StringLiteral_16498;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.OpenSimpleInfoSe, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_16501;
  this->fields.OpenDetailInfoSe = (struct System_String_o *)StringLiteral_16501;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.OpenDetailInfoSe, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_16502;
  this->fields.CloseDetailInfoSe = (struct System_String_o *)StringLiteral_16502;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.CloseDetailInfoSe, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_16507;
  this->fields.HpGaugeAddSe = (struct System_String_o *)StringLiteral_16507;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.HpGaugeAddSe, v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Int32_array **)StringLiteral_16544;
  this->fields.OnBoardSkillNameInfoSe = (struct System_String_o *)StringLiteral_16544;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.OnBoardSkillNameInfoSe, v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Int32_array **)StringLiteral_16545;
  this->fields.OnBoardSkillBuffSe = (struct System_String_o *)StringLiteral_16545;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.OnBoardSkillBuffSe, v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Int32_array **)StringLiteral_16546;
  this->fields.OnBoardSkillDebuffSe = (struct System_String_o *)StringLiteral_16546;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.OnBoardSkillDebuffSe, v66, v67, v68, v69, v70, v71, v72);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}