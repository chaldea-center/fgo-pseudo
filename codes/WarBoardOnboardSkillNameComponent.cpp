void WarBoardOnboardSkillNameComponent___ctor(WarBoardOnboardSkillNameComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596E446 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_596E446 = 1;
  }
  v3 = System_Collections_Generic_List_string__TypeInfo;
  this->fields.skillNameDispAfterWait = 0.5;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.skillNames = (struct System_Collections_Generic_List_string__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillNames, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardOnboardSkillNameComponent__AddSkillName(
        WarBoardOnboardSkillNameComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  WarBoardOnboardSkillNameComponent_o *v9; // x20
  System_Collections_Generic_List_object__o *skillNames; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_596E445 & 1) == 0 )
  {
    this = (WarBoardOnboardSkillNameComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    byte_596E445 = 1;
  }
  skillNames = (System_Collections_Generic_List_object__o *)v9->fields.skillNames;
  if ( !skillNames
    || (items = skillNames->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++skillNames->fields._version,
        !items) )
  {
    sub_2213CDC(this, name);
  }
  size = skillNames->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillNames,
      (Il2CppObject *)name,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    skillNames->fields._size = size + 1;
    v14[4] = (Il2CppClass *)name;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)name,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void WarBoardOnboardSkillNameComponent__Clear(WarBoardOnboardSkillNameComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UILabel_o *skillName; // x0
  struct System_Collections_Generic_List_string__o *skillNames; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_596E443 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E443 = 1;
  }
  WarBoardOnboardSkillNameComponent__SetActive(this, 0, v2);
  skillName = this->fields.skillName;
  if ( !skillName
    || (UILabel__set_text(skillName, (System_String_o *)StringLiteral_1/*""*/, 0),
        skillNames = this->fields.skillNames,
        this->fields.skillDispIndex = 0,
        !skillNames) )
  {
    sub_2213CDC(skillName, v4);
  }
  size = skillNames->fields._size;
  v8 = skillNames->fields._version + 1;
  skillNames->fields._size = 0;
  skillNames->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)skillNames->fields._items, 0, size, 0);
}


float WarBoardOnboardSkillNameComponent__GetSkillNameDispAfterWait(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.skillNameDispAfterWait;
}


float WarBoardOnboardSkillNameComponent__GetSkillNameHideBeforeWait(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.skillNameHideBeforeWait;
}


void WarBoardOnboardSkillNameComponent__SetActive(
        WarBoardOnboardSkillNameComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0);
}


void WarBoardOnboardSkillNameComponent__SetSkillNameDisp(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *skillNames; // x0
  int32_t skillDispIndex; // w1
  Il2CppObject *Item; // x21
  bool IsNullOrEmpty; // w20
  const MethodInfo *v7; // x2

  if ( (byte_596E444 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E444 = 1;
  }
  skillNames = (System_Collections_Generic_List_object__o *)this->fields.skillNames;
  if ( !skillNames )
    goto LABEL_11;
  skillDispIndex = this->fields.skillDispIndex;
  if ( skillNames->fields._size <= skillDispIndex )
    return;
  Item = System_Collections_Generic_List_object___get_Item(
           skillNames,
           skillDispIndex,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)Item, 0);
  skillNames = (System_Collections_Generic_List_object__o *)this->fields.skillName;
  if ( !IsNullOrEmpty )
  {
    if ( skillNames )
      goto LABEL_9;
LABEL_11:
    sub_2213CDC(skillNames, method);
  }
  if ( !skillNames )
    goto LABEL_11;
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_9:
  UILabel__set_text((UILabel_o *)skillNames, (System_String_o *)Item, 0);
  WarBoardOnboardSkillNameComponent__SetActive(this, !IsNullOrEmpty, v7);
  ++this->fields.skillDispIndex;
}