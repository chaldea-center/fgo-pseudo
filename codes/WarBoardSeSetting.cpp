void WarBoardSeSetting___ctor(WarBoardSeSetting_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4C355FF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17032/*"bas13"*/);
    sub_1C32C20(&StringLiteral_17030/*"bas1"*/);
    sub_1C32C20(&StringLiteral_16985/*"ba20"*/);
    sub_1C32C20(&StringLiteral_17031/*"bas10"*/);
    sub_1C32C20(&StringLiteral_16983/*"ba19"*/);
    sub_1C32C20(&StringLiteral_16991/*"ba30"*/);
    sub_1C32C20(&StringLiteral_16986/*"ba21"*/);
    sub_1C32C20(&StringLiteral_16982/*"ba18"*/);
    byte_4C355FF = 1;
  }
  v5 = StringLiteral_16982/*"ba18"*/;
  this->fields.SelectSe = (struct System_String_o *)StringLiteral_16982/*"ba18"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.SelectSe, v5, v2, v3);
  v6 = StringLiteral_16983/*"ba19"*/;
  this->fields.DeselectSe = (struct System_String_o *)StringLiteral_16983/*"ba19"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.DeselectSe, v6, v7, v8);
  v9 = StringLiteral_16982/*"ba18"*/;
  this->fields.OpenSimpleInfoSe = (struct System_String_o *)StringLiteral_16982/*"ba18"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.OpenSimpleInfoSe, v9, v10, v11);
  v12 = StringLiteral_16985/*"ba20"*/;
  this->fields.OpenDetailInfoSe = (struct System_String_o *)StringLiteral_16985/*"ba20"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.OpenDetailInfoSe, v12, v13, v14);
  v15 = StringLiteral_16986/*"ba21"*/;
  this->fields.CloseDetailInfoSe = (struct System_String_o *)StringLiteral_16986/*"ba21"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.CloseDetailInfoSe, v15, v16, v17);
  v18 = StringLiteral_16991/*"ba30"*/;
  this->fields.HpGaugeAddSe = (struct System_String_o *)StringLiteral_16991/*"ba30"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.HpGaugeAddSe, v18, v19, v20);
  v21 = StringLiteral_17030/*"bas1"*/;
  this->fields.OnBoardSkillNameInfoSe = (struct System_String_o *)StringLiteral_17030/*"bas1"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.OnBoardSkillNameInfoSe, v21, v22, v23);
  v24 = StringLiteral_17031/*"bas10"*/;
  this->fields.OnBoardSkillBuffSe = (struct System_String_o *)StringLiteral_17031/*"bas10"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.OnBoardSkillBuffSe, v24, v25, v26);
  v27 = StringLiteral_17032/*"bas13"*/;
  this->fields.OnBoardSkillDebuffSe = (struct System_String_o *)StringLiteral_17032/*"bas13"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.OnBoardSkillDebuffSe, v27, v28, v29);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}