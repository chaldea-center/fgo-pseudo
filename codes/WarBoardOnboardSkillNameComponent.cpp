void WarBoardOnboardSkillNameComponent___ctor(WarBoardOnboardSkillNameComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C54A7C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C54A7C = 1;
  }
  this->fields.skillNameDispAfterWait = 0.5;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.skillNames = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.skillNames, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardOnboardSkillNameComponent__AddSkillName(
        WarBoardOnboardSkillNameComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *skillNames; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C54A7B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    byte_4C54A7B = 1;
  }
  skillNames = (System_Collections_Generic_List_object__o *)this->fields.skillNames;
  if ( !skillNames
    || (items = skillNames->fields._items,
        v8 = Method_System_Collections_Generic_List_string__Add__,
        ++skillNames->fields._version,
        !items) )
  {
    sub_1C3E7C0(skillNames, name);
  }
  size = skillNames->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillNames,
      (Il2CppObject *)name,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    skillNames->fields._size = size + 1;
    v10[4] = (Il2CppClass *)name;
    sub_1C3E508((CGThumbnailListItem_o *)(v10 + 4), (int32_t)name, (int32_t)method, v3);
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

  if ( (byte_4C54A79 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54A79 = 1;
  }
  WarBoardOnboardSkillNameComponent__SetActive(this, 0, v2);
  skillName = this->fields.skillName;
  if ( !skillName
    || (UILabel__set_text(skillName, (System_String_o *)StringLiteral_1/*""*/, 0),
        skillNames = this->fields.skillNames,
        this->fields.skillDispIndex = 0,
        !skillNames) )
  {
    sub_1C3E7C0(skillName, v4);
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
    sub_1C3E7C0(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0);
}


void WarBoardOnboardSkillNameComponent__SetSkillNameDisp(
        WarBoardOnboardSkillNameComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *skillNames; // x0
  int32_t skillDispIndex; // w1
  Il2CppObject *Item; // x20
  System_String_o *v6; // x1
  char v7; // w20
  const MethodInfo *v8; // x2

  if ( (byte_4C54A7A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54A7A = 1;
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
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
  skillNames = (struct System_Collections_Generic_List_string__o *)System_String__IsNullOrEmpty(
                                                                     (System_String_o *)Item,
                                                                     0);
  if ( !this->fields.skillName )
LABEL_11:
    sub_1C3E7C0(skillNames, method);
  if ( ((unsigned __int8)skillNames & 1) != 0 )
    v6 = (System_String_o *)StringLiteral_1/*""*/;
  else
    v6 = (System_String_o *)Item;
  v7 = ~(_BYTE)skillNames;
  UILabel__set_text(this->fields.skillName, v6, 0);
  WarBoardOnboardSkillNameComponent__SetActive(this, v7 & 1, v8);
  ++this->fields.skillDispIndex;
}