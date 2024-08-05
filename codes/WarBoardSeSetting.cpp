void __fastcall WarBoardSeSetting___ctor(WarBoardSeSetting_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w1
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_49FC3D0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17004/*"bas13"*/, method);
    sub_1B64870(&StringLiteral_17002/*"bas1"*/, v5);
    sub_1B64870(&StringLiteral_16949/*"ba20"*/, v6);
    sub_1B64870(&StringLiteral_17003/*"bas10"*/, v7);
    sub_1B64870(&StringLiteral_16947/*"ba19"*/, v8);
    sub_1B64870(&StringLiteral_16955/*"ba30"*/, v9);
    sub_1B64870(&StringLiteral_16950/*"ba21"*/, v10);
    sub_1B64870(&StringLiteral_16946/*"ba18"*/, v11);
    byte_49FC3D0 = 1;
  }
  v12 = StringLiteral_16946/*"ba18"*/;
  this->fields.SelectSe = (struct System_String_o *)StringLiteral_16946/*"ba18"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SelectSe, v12, v2, v3);
  v13 = StringLiteral_16947/*"ba19"*/;
  this->fields.DeselectSe = (struct System_String_o *)StringLiteral_16947/*"ba19"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.DeselectSe, v13, v14, v15);
  v16 = StringLiteral_16946/*"ba18"*/;
  this->fields.OpenSimpleInfoSe = (struct System_String_o *)StringLiteral_16946/*"ba18"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.OpenSimpleInfoSe, v16, v17, v18);
  v19 = StringLiteral_16949/*"ba20"*/;
  this->fields.OpenDetailInfoSe = (struct System_String_o *)StringLiteral_16949/*"ba20"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.OpenDetailInfoSe, v19, v20, v21);
  v22 = StringLiteral_16950/*"ba21"*/;
  this->fields.CloseDetailInfoSe = (struct System_String_o *)StringLiteral_16950/*"ba21"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.CloseDetailInfoSe, v22, v23, v24);
  v25 = StringLiteral_16955/*"ba30"*/;
  this->fields.HpGaugeAddSe = (struct System_String_o *)StringLiteral_16955/*"ba30"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.HpGaugeAddSe, v25, v26, v27);
  v28 = StringLiteral_17002/*"bas1"*/;
  this->fields.OnBoardSkillNameInfoSe = (struct System_String_o *)StringLiteral_17002/*"bas1"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.OnBoardSkillNameInfoSe, v28, v29, v30);
  v31 = StringLiteral_17003/*"bas10"*/;
  this->fields.OnBoardSkillBuffSe = (struct System_String_o *)StringLiteral_17003/*"bas10"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.OnBoardSkillBuffSe, v31, v32, v33);
  v34 = StringLiteral_17004/*"bas13"*/;
  this->fields.OnBoardSkillDebuffSe = (struct System_String_o *)StringLiteral_17004/*"bas13"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.OnBoardSkillDebuffSe, v34, v35, v36);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}