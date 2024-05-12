void __fastcall WarBoardOnboardSkillNameComponent___ctor(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438AEBF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    byte_438AEBF = 1;
  }
  this->fields.skillNameDispAfterWait = 0.5;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  this->fields.skillNames = (struct System_Collections_Generic_List_string__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillNames,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__AddSkillName(
        WarBoardOnboardSkillNameComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *skillNames; // x0

  if ( (byte_438AEBE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    byte_438AEBE = 1;
  }
  skillNames = this->fields.skillNames;
  if ( !skillNames )
    sub_B7769C(0LL, name);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillNames,
    (EventMissionProgressRequest_Argument_ProgressData_o *)name,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall WarBoardOnboardSkillNameComponent__Clear(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UILabel_o *skillName; // x0

  if ( (byte_438AEBC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438AEBC = 1;
  }
  WarBoardOnboardSkillNameComponent__SetActive(this, 0, v2);
  skillName = this->fields.skillName;
  if ( !skillName
    || (UILabel__set_text(skillName, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        skillName = (UILabel_o *)this->fields.skillNames,
        this->fields.skillDispIndex = 0,
        !skillName) )
  {
    sub_B7769C(skillName, v4);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)skillName,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__);
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
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__SetSkillNameDisp(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  WarBoardOnboardSkillNameComponent_o *v2; // x19
  struct System_Collections_Generic_List_string__o *skillNames; // x20
  int size; // w8
  __int64 skillDispIndex; // x21
  System_String_o *v6; // x20
  const MethodInfo *v7; // x2
  WarBoardOnboardSkillNameComponent_o *v8; // x0
  bool v9; // w1

  v2 = this;
  if ( (byte_438AEBD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (WarBoardOnboardSkillNameComponent_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438AEBD = 1;
  }
  skillNames = v2->fields.skillNames;
  if ( !skillNames )
    goto LABEL_13;
  size = skillNames->fields._size;
  skillDispIndex = v2->fields.skillDispIndex;
  if ( size <= (int)skillDispIndex )
    return;
  if ( size <= (unsigned int)skillDispIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = skillNames->fields._items->m_Items[skillDispIndex];
  this = (WarBoardOnboardSkillNameComponent_o *)System_String__IsNullOrEmpty(v6, 0LL);
  if ( !v2->fields.skillName )
LABEL_13:
    sub_B7769C(this, method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    UILabel__set_text(v2->fields.skillName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v8 = v2;
    v9 = 0;
  }
  else
  {
    UILabel__set_text(v2->fields.skillName, v6, 0LL);
    v9 = 1;
    v8 = v2;
  }
  WarBoardOnboardSkillNameComponent__SetActive(v8, v9, v7);
  ++v2->fields.skillDispIndex;
}