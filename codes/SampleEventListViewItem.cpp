void SampleEventListViewItem___ctor(SampleEventListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  int32_t v5; // w8
  Il2CppObject *v6; // x0
  struct System_String_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5935D9C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6439/*"Event Number {0}"*/);
    byte_5935D9C = 1;
  }
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  v5 = index & 1;
  if ( index < 0 )
    v5 = -v5;
  this->fields.eventType = v5;
  v14 = index + 1;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
  v7 = System_String__Format((System_String_o *)StringLiteral_6439/*"Event Number {0}"*/, v6, 0);
  this->fields.eventText = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventText, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


void SampleEventListViewItem__Finalize(SampleEventListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *SampleEventListViewItem__get_EventText(SampleEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.eventText;
}


int32_t SampleEventListViewItem__get_EventType(SampleEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.eventType;
}