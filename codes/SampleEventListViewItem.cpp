void SampleEventListViewItem___ctor(SampleEventListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  int32_t v11; // w8
  Il2CppObject *v12; // x0
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C40788 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_6192/*"Event Number {0}"*/);
    byte_4C40788 = 1;
  }
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  if ( index >= 0 )
    v11 = index;
  else
    v11 = index + 1;
  this->fields.eventType = index - (v11 & 0xFFFFFFFE);
  v16 = index + 1;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v5, v6, v7, v8, v9, v10);
  v13 = System_String__Format((System_String_o *)StringLiteral_6192/*"Event Number {0}"*/, v12, 0);
  this->fields.eventText = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventText, (int32_t)v13, v14, v15);
}


void SampleEventListViewItem__Finalize(SampleEventListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *SampleEventListViewItem__ToString(SampleEventListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_4C40789 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_19158/*"eventType "*/);
    byte_4C40789 = 1;
  }
  v3 = System_Int32__ToString((int)this + 120, 0);
  return System_String__Concat_63601908(
           (System_String_o *)StringLiteral_19158/*"eventType "*/,
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