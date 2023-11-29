void __fastcall WarBoardOnboardSkillNameComponent___ctor(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8597 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v6);
    byte_40F8597 = 1;
  }
  this->fields.skillNameDispAfterWait = 0.5;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.skillNames = (struct System_Collections_Generic_List_string__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillNames,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__AddSkillName(
        WarBoardOnboardSkillNameComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *skillNames; // x0

  if ( (byte_40F8596 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, name);
    byte_40F8596 = 1;
  }
  skillNames = this->fields.skillNames;
  if ( !skillNames )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillNames,
    (EventMissionProgressRequest_Argument_ProgressData_o *)name,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall WarBoardOnboardSkillNameComponent__Clear(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UILabel_o *skillName; // x0
  struct System_Collections_Generic_List_string__o *skillNames; // x0

  if ( (byte_40F8594 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F8594 = 1;
  }
  WarBoardOnboardSkillNameComponent__SetActive(this, 0, v2);
  skillName = this->fields.skillName;
  if ( !skillName
    || (UILabel__set_text(skillName, (System_String_o *)StringLiteral_1, 0LL),
        skillNames = this->fields.skillNames,
        this->fields.skillDispIndex = 0,
        !skillNames) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)skillNames,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
}


float __fastcall WarBoardOnboardSkillNameComponent__GetSkillNameDispAfterWait(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.skillNameDispAfterWait;
}


float __fastcall WarBoardOnboardSkillNameComponent__GetSkillNameHideBeforeWait(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.skillNameHideBeforeWait;
}


void __fastcall WarBoardOnboardSkillNameComponent__SetActive(
        WarBoardOnboardSkillNameComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__SetSkillNameDisp(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_string__o *skillNames; // x20
  int size; // w8
  __int64 skillDispIndex; // x21
  System_String_o *v8; // x20
  bool IsNullOrEmpty; // w0
  const MethodInfo *v10; // x2
  WarBoardOnboardSkillNameComponent_o *v11; // x0
  bool v12; // w1

  if ( (byte_40F8595 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F8595 = 1;
  }
  skillNames = this->fields.skillNames;
  if ( !skillNames )
    goto LABEL_13;
  size = skillNames->fields._size;
  skillDispIndex = this->fields.skillDispIndex;
  if ( size <= (int)skillDispIndex )
    return;
  if ( size <= (unsigned int)skillDispIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v8 = skillNames->fields._items->m_Items[skillDispIndex];
  IsNullOrEmpty = System_String__IsNullOrEmpty(v8, 0LL);
  if ( !this->fields.skillName )
LABEL_13:
    sub_B170D4();
  if ( IsNullOrEmpty )
  {
    UILabel__set_text(this->fields.skillName, (System_String_o *)StringLiteral_1, 0LL);
    v11 = this;
    v12 = 0;
  }
  else
  {
    UILabel__set_text(this->fields.skillName, v8, 0LL);
    v12 = 1;
    v11 = this;
  }
  WarBoardOnboardSkillNameComponent__SetActive(v11, v12, v10);
  ++this->fields.skillDispIndex;
}