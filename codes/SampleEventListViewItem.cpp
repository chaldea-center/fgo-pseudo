void SampleEventListViewItem___ctor(SampleEventListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  int32_t v5; // w8
  Il2CppObject *v6; // x0
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D29F3D & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_6197/*"Event Number {0}"*/);
    byte_4D29F3D = 1;
  }
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  if ( index >= 0 )
    v5 = index;
  else
    v5 = index + 1;
  this->fields.eventType = index - (v5 & 0xFFFFFFFE);
  v14 = index + 1;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v7 = System_String__Format((System_String_o *)StringLiteral_6197/*"Event Number {0}"*/, v6, 0);
  this->fields.eventText = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.eventText, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


void SampleEventListViewItem__Finalize(SampleEventListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *SampleEventListViewItem__ToString(SampleEventListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_4D29F3E & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_19303/*"eventType "*/);
    byte_4D29F3E = 1;
  }
  v3 = System_Int32__ToString((int)this + 120, 0);
  return System_String__Concat_64458012(
           (System_String_o *)StringLiteral_19303/*"eventType "*/,
           v3,
           (System_String_o *)StringLiteral_113/*" "*/,
           this->fields.eventText,
           0);
}


System_String_o *SampleEventListViewItem__get_EventText(SampleEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.eventText;
}


int32_t SampleEventListViewItem__get_EventType(SampleEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.eventType;
}