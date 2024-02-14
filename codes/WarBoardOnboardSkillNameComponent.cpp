void __fastcall WarBoardOnboardSkillNameComponent___ctor(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4213300 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v4);
    byte_4213300 = 1;
  }
  this->fields.skillNameDispAfterWait = 0.5;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.skillNames = (struct System_Collections_Generic_List_string__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillNames,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__AddSkillName(
        WarBoardOnboardSkillNameComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *skillNames; // x0

  if ( (byte_42132FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, name);
    byte_42132FF = 1;
  }
  skillNames = this->fields.skillNames;
  if ( !skillNames )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillNames,
    (EventMissionProgressRequest_Argument_ProgressData_o *)name,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall WarBoardOnboardSkillNameComponent__Clear(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UILabel_o *skillName; // x0

  if ( (byte_42132FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_42132FD = 1;
  }
  WarBoardOnboardSkillNameComponent__SetActive(this, 0, v2);
  skillName = this->fields.skillName;
  if ( !skillName
    || (UILabel__set_text(skillName, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        skillName = (UILabel_o *)this->fields.skillNames,
        this->fields.skillDispIndex = 0,
        !skillName) )
  {
    sub_B0D97C(skillName);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)skillName,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__SetSkillNameDisp(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  WarBoardOnboardSkillNameComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_string__o *skillNames; // x20
  int size; // w8
  __int64 skillDispIndex; // x21
  System_String_o *v8; // x20
  const MethodInfo *v9; // x2
  WarBoardOnboardSkillNameComponent_o *v10; // x0
  bool v11; // w1

  v2 = this;
  if ( (byte_42132FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    this = (WarBoardOnboardSkillNameComponent_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_42132FE = 1;
  }
  skillNames = v2->fields.skillNames;
  if ( !skillNames )
    goto LABEL_13;
  size = skillNames->fields._size;
  skillDispIndex = v2->fields.skillDispIndex;
  if ( size <= (int)skillDispIndex )
    return;
  if ( size <= (unsigned int)skillDispIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v8 = skillNames->fields._items->m_Items[skillDispIndex];
  this = (WarBoardOnboardSkillNameComponent_o *)System_String__IsNullOrEmpty(v8, 0LL);
  if ( !v2->fields.skillName )
LABEL_13:
    sub_B0D97C(this);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    UILabel__set_text(v2->fields.skillName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v10 = v2;
    v11 = 0;
  }
  else
  {
    UILabel__set_text(v2->fields.skillName, v8, 0LL);
    v11 = 1;
    v10 = v2;
  }
  WarBoardOnboardSkillNameComponent__SetActive(v10, v11, v9);
  ++v2->fields.skillDispIndex;
}