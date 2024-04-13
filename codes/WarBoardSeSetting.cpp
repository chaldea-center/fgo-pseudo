void __fastcall WarBoardSeSetting___ctor(WarBoardSeSetting_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Int32_array **v30; // x1
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
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7

  if ( (byte_42EAB4B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16810/*"bas13"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16808/*"bas1"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16765/*"ba20"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16809/*"bas10"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16763/*"ba19"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_16771/*"ba30"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16766/*"ba21"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_16762/*"ba18"*/, v27, v28, v29);
    byte_42EAB4B = 1;
  }
  v30 = (System_Int32_array **)StringLiteral_16762/*"ba18"*/;
  this->fields.SelectSe = (struct System_String_o *)StringLiteral_16762/*"ba18"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.SelectSe, v30, v2, v3, v4, v5, v6, v7);
  v31 = (System_Int32_array **)StringLiteral_16763/*"ba19"*/;
  this->fields.DeselectSe = (struct System_String_o *)StringLiteral_16763/*"ba19"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.DeselectSe, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_16762/*"ba18"*/;
  this->fields.OpenSimpleInfoSe = (struct System_String_o *)StringLiteral_16762/*"ba18"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.OpenSimpleInfoSe, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_16765/*"ba20"*/;
  this->fields.OpenDetailInfoSe = (struct System_String_o *)StringLiteral_16765/*"ba20"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.OpenDetailInfoSe, v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Int32_array **)StringLiteral_16766/*"ba21"*/;
  this->fields.CloseDetailInfoSe = (struct System_String_o *)StringLiteral_16766/*"ba21"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.CloseDetailInfoSe, v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Int32_array **)StringLiteral_16771/*"ba30"*/;
  this->fields.HpGaugeAddSe = (struct System_String_o *)StringLiteral_16771/*"ba30"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.HpGaugeAddSe, v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Int32_array **)StringLiteral_16808/*"bas1"*/;
  this->fields.OnBoardSkillNameInfoSe = (struct System_String_o *)StringLiteral_16808/*"bas1"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.OnBoardSkillNameInfoSe, v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Int32_array **)StringLiteral_16809/*"bas10"*/;
  this->fields.OnBoardSkillBuffSe = (struct System_String_o *)StringLiteral_16809/*"bas10"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.OnBoardSkillBuffSe, v73, v74, v75, v76, v77, v78, v79);
  v80 = (System_Int32_array **)StringLiteral_16810/*"bas13"*/;
  this->fields.OnBoardSkillDebuffSe = (struct System_String_o *)StringLiteral_16810/*"bas13"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.OnBoardSkillDebuffSe, v80, v81, v82, v83, v84, v85, v86);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}