void __fastcall WarBoardOnboardSkillNameComponent___ctor(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E75D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v5, v6, v7);
    byte_42E75D4 = 1;
  }
  this->fields.skillNameDispAfterWait = 0.5;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.skillNames = (struct System_Collections_Generic_List_string__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillNames,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__AddSkillName(
        WarBoardOnboardSkillNameComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_string__o *skillNames; // x0

  if ( (byte_42E75D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)name, (_DWORD)method, v3);
    byte_42E75D3 = 1;
  }
  skillNames = this->fields.skillNames;
  if ( !skillNames )
    sub_B5D69C(0LL, name);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillNames,
    (EventMissionProgressRequest_Argument_ProgressData_o *)name,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall WarBoardOnboardSkillNameComponent__Clear(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UILabel_o *skillName; // x0

  if ( (byte_42E75D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E75D1 = 1;
  }
  WarBoardOnboardSkillNameComponent__SetActive(this, 0, v2);
  skillName = this->fields.skillName;
  if ( !skillName
    || (UILabel__set_text(skillName, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        skillName = (UILabel_o *)this->fields.skillNames,
        this->fields.skillDispIndex = 0,
        !skillName) )
  {
    sub_B5D69C(skillName, v8);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)skillName,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
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
    sub_B5D69C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__SetSkillNameDisp(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardOnboardSkillNameComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_string__o *skillNames; // x20
  int size; // w8
  __int64 skillDispIndex; // x21
  System_String_o *v14; // x20
  const MethodInfo *v15; // x2
  WarBoardOnboardSkillNameComponent_o *v16; // x0
  bool v17; // w1

  v4 = this;
  if ( (byte_42E75D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v5, v6, v7);
    this = (WarBoardOnboardSkillNameComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E75D2 = 1;
  }
  skillNames = v4->fields.skillNames;
  if ( !skillNames )
    goto LABEL_13;
  size = skillNames->fields._size;
  skillDispIndex = v4->fields.skillDispIndex;
  if ( size <= (int)skillDispIndex )
    return;
  if ( size <= (unsigned int)skillDispIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v14 = skillNames->fields._items->m_Items[skillDispIndex];
  this = (WarBoardOnboardSkillNameComponent_o *)System_String__IsNullOrEmpty(v14, 0LL);
  if ( !v4->fields.skillName )
LABEL_13:
    sub_B5D69C(this, method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    UILabel__set_text(v4->fields.skillName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v16 = v4;
    v17 = 0;
  }
  else
  {
    UILabel__set_text(v4->fields.skillName, v14, 0LL);
    v17 = 1;
    v16 = v4;
  }
  WarBoardOnboardSkillNameComponent__SetActive(v16, v17, v15);
  ++v4->fields.skillDispIndex;
}