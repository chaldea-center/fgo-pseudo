void __fastcall WarBoardOnboardSkillNameComponent___ctor(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BC597D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_4BC597D = 1;
  }
  this->fields.skillNameDispAfterWait = 0.5;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.skillNames = (struct System_Collections_Generic_List_string__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.skillNames, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__AddSkillName(
        WarBoardOnboardSkillNameComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *skillNames; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4BC597C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, name);
    byte_4BC597C = 1;
  }
  skillNames = (System_Collections_Generic_List_object__o *)this->fields.skillNames;
  if ( !skillNames
    || (items = skillNames->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++skillNames->fields._version,
        !items) )
  {
    sub_1C1AE30(skillNames, name);
  }
  size = skillNames->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillNames,
      (Il2CppObject *)name,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    skillNames->fields._size = size + 1;
    v14[4] = (Il2CppClass *)name;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


void __fastcall WarBoardOnboardSkillNameComponent__Clear(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *skillName; // x0
  struct System_Collections_Generic_List_string__o *skillNames; // x8
  int32_t size; // w2
  int v9; // w9

  if ( (byte_4BC597A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Clear__, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC597A = 1;
  }
  WarBoardOnboardSkillNameComponent__SetActive(this, 0, v2);
  skillName = this->fields.skillName;
  if ( !skillName
    || (UILabel__set_text(skillName, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        skillNames = this->fields.skillNames,
        this->fields.skillDispIndex = 0,
        !skillNames) )
  {
    sub_1C1AE30(skillName, v5);
  }
  size = skillNames->fields._size;
  v9 = skillNames->fields._version + 1;
  skillNames->fields._size = 0;
  skillNames->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)skillNames->fields._items, 0, size, 0LL);
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
    sub_1C1AE30(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__SetSkillNameDisp(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_string__o *skillNames; // x0
  int32_t skillDispIndex; // w1
  Il2CppObject *Item; // x20
  System_String_o *v8; // x1
  char v9; // w20
  const MethodInfo *v10; // x2

  if ( (byte_4BC597B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC597B = 1;
  }
  skillNames = this->fields.skillNames;
  if ( !skillNames )
    goto LABEL_11;
  skillDispIndex = this->fields.skillDispIndex;
  if ( skillNames->fields._size <= skillDispIndex )
    return;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)skillNames,
           skillDispIndex,
           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
  skillNames = (struct System_Collections_Generic_List_string__o *)System_String__IsNullOrEmpty(
                                                                     (System_String_o *)Item,
                                                                     0LL);
  if ( !this->fields.skillName )
LABEL_11:
    sub_1C1AE30(skillNames, method);
  if ( ((unsigned __int8)skillNames & 1) != 0 )
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  else
    v8 = (System_String_o *)Item;
  v9 = ~(_BYTE)skillNames;
  UILabel__set_text(this->fields.skillName, v8, 0LL);
  WarBoardOnboardSkillNameComponent__SetActive(this, v9 & 1, v10);
  ++this->fields.skillDispIndex;
}