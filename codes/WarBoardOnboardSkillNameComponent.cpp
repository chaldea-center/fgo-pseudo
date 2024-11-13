void __fastcall WarBoardOnboardSkillNameComponent___ctor(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1411A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v5, v6);
    byte_4B1411A = 1;
  }
  this->fields.skillNameDispAfterWait = 0.5;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.skillNames = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillNames, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4B14119 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, name, method);
    byte_4B14119 = 1;
  }
  skillNames = (System_Collections_Generic_List_object__o *)this->fields.skillNames;
  if ( !skillNames
    || (items = skillNames->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++skillNames->fields._version,
        !items) )
  {
    sub_1BCAA3C(skillNames, name);
  }
  size = skillNames->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillNames,
      (Il2CppObject *)name,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    skillNames->fields._size = size + 1;
    v14[4] = (Il2CppClass *)name;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


void __fastcall WarBoardOnboardSkillNameComponent__Clear(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UILabel_o *skillName; // x0
  struct System_Collections_Generic_List_string__o *skillNames; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B14117 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B14117 = 1;
  }
  WarBoardOnboardSkillNameComponent__SetActive(this, 0, v2);
  skillName = this->fields.skillName;
  if ( !skillName
    || (UILabel__set_text(skillName, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        skillNames = this->fields.skillNames,
        this->fields.skillDispIndex = 0,
        !skillNames) )
  {
    sub_1BCAA3C(skillName, v6);
  }
  size = skillNames->fields._size;
  v10 = skillNames->fields._version + 1;
  skillNames->fields._size = 0;
  skillNames->fields._version = v10;
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
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


void __fastcall WarBoardOnboardSkillNameComponent__SetSkillNameDisp(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_List_string__o *skillNames; // x0
  int32_t skillDispIndex; // w1
  Il2CppObject *Item; // x20
  System_String_o *v11; // x1
  char v12; // w20
  const MethodInfo *v13; // x2

  if ( (byte_4B14118 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B14118 = 1;
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
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  skillNames = (struct System_Collections_Generic_List_string__o *)System_String__IsNullOrEmpty(
                                                                     (System_String_o *)Item,
                                                                     0LL);
  if ( !this->fields.skillName )
LABEL_11:
    sub_1BCAA3C(skillNames, method);
  if ( ((unsigned __int8)skillNames & 1) != 0 )
    v11 = (System_String_o *)StringLiteral_1/*""*/;
  else
    v11 = (System_String_o *)Item;
  v12 = ~(_BYTE)skillNames;
  UILabel__set_text(this->fields.skillName, v11, 0LL);
  WarBoardOnboardSkillNameComponent__SetActive(this, v12 & 1, v13);
  ++this->fields.skillDispIndex;
}