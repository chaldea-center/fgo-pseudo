void __fastcall TerminalBoardOptionTextData___ctor(
        TerminalBoardOptionTextData_o *this,
        System_String_o *forwardText,
        System_String_o *behindTextFormat,
        int32_t itemImageId,
        bool isLeft,
        const MethodInfo *method)
{
  TerminalBoardOptionTextData_o *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._ForwardText_k__BackingField = forwardText;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v10->fields, (int64_t)forwardText, v11, v12, v13, v14, v15, v16);
  v10->fields._BehindTextFormat_k__BackingField = behindTextFormat;
  v10 = (TerminalBoardOptionTextData_o *)((char *)v10 + 32);
  sub_1C2E0D0((PartyOrganizationUtility_o *)v10, (int64_t)behindTextFormat, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = itemImageId;
  BYTE4(v10->monitor) = isLeft;
}


void __fastcall TerminalBoardOptionTextData__SetParamsToBehindText(
        TerminalBoardOptionTextData_o *this,
        System_Object_array *args,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x9
  struct System_String_o *BehindTextFormat_k__BackingField; // x1
  struct System_String_o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( !args )
    sub_1C2E388(this, 0LL);
  v10 = *(_QWORD *)&args->max_length;
  BehindTextFormat_k__BackingField = this->fields._BehindTextFormat_k__BackingField;
  if ( v10 )
  {
    v12 = System_String__Format_63250092(this->fields._BehindTextFormat_k__BackingField, args, 0LL);
    this->fields._BehindText_k__BackingField = v12;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields._BehindText_k__BackingField,
      (int64_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  else
  {
    this->fields._BehindText_k__BackingField = BehindTextFormat_k__BackingField;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields._BehindText_k__BackingField,
      (int64_t)BehindTextFormat_k__BackingField,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


System_String_o *__fastcall TerminalBoardOptionTextData__get_BehindText(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._BehindText_k__BackingField;
}


System_String_o *__fastcall TerminalBoardOptionTextData__get_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._BehindTextFormat_k__BackingField;
}


System_String_o *__fastcall TerminalBoardOptionTextData__get_ForwardText(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._ForwardText_k__BackingField;
}


bool __fastcall TerminalBoardOptionTextData__get_IsLeft(TerminalBoardOptionTextData_o *this, const MethodInfo *method)
{
  return this->fields._IsLeft_k__BackingField;
}


int32_t __fastcall TerminalBoardOptionTextData__get_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemImageId_k__BackingField;
}


void __fastcall TerminalBoardOptionTextData__set_BehindText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BehindText_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._BehindText_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalBoardOptionTextData__set_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BehindTextFormat_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._BehindTextFormat_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalBoardOptionTextData__set_ForwardText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ForwardText_k__BackingField = value;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall TerminalBoardOptionTextData__set_IsLeft(
        TerminalBoardOptionTextData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLeft_k__BackingField = value;
}


void __fastcall TerminalBoardOptionTextData__set_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = value;
}