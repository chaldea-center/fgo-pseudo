void ItemNumDispControl___cctor(const MethodInfo *method)
{
  if ( (byte_4C31ED8 & 1) == 0 )
  {
    sub_1C32C20(&ItemNumDispControl_TypeInfo);
    byte_4C31ED8 = 1;
  }
  *ItemNumDispControl_TypeInfo->static_fields = (struct ItemNumDispControl_StaticFields)0x400000003F000000LL;
}


void ItemNumDispControl___ctor(ItemNumDispControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4C31ED7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C31ED7 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.SetAlphaDispInfoGroup = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C32BC4(&this->fields.SetAlphaDispInfoGroup, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemNumDispControl__InitEventAlphaAnim(
        ItemNumDispControl_o *this,
        System_Collections_Generic_List_GameObject__o *infoList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o **p_SetAlphaDispInfoGroup; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct UIWidget_o *alphaAnimRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C31ED3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4C31ED3 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  this->fields.SetAlphaDispInfoGroup = infoList;
  p_SetAlphaDispInfoGroup = &this->fields.SetAlphaDispInfoGroup;
  sub_1C32BC4(&this->fields.SetAlphaDispInfoGroup, infoList);
  if ( ItemNumDispControl__IsEventInfoGroups(this, v6) )
  {
    ItemNumDispControl__SetDispEventInfoGroup(this, 0, v7);
    alphaAnimRoot = this->fields.alphaAnimRoot;
    this->fields.alphaAnimTgt = 1.0;
    if ( alphaAnimRoot )
    {
      ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))alphaAnimRoot->klass->vtable._8_set_alpha.methodPtr)(
        alphaAnimRoot,
        alphaAnimRoot->klass->vtable._8_set_alpha.method,
        1.0);
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
      return;
    }
LABEL_17:
    sub_1C32E7C(alphaAnimRoot);
  }
  alphaAnimRoot = this->fields.alphaAnimRoot;
  if ( !alphaAnimRoot )
    goto LABEL_17;
  ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))alphaAnimRoot->klass->vtable._8_set_alpha.methodPtr)(
    alphaAnimRoot,
    alphaAnimRoot->klass->vtable._8_set_alpha.method,
    1.0);
  alphaAnimRoot = (struct UIWidget_o *)*p_SetAlphaDispInfoGroup;
  if ( !*p_SetAlphaDispInfoGroup )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)alphaAnimRoot,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_1C32E7C(0);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v10.fields._current, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool ItemNumDispControl__IsEventInfoGroups(ItemNumDispControl_o *this, const MethodInfo *method)
{
  ItemNumDispControl_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *SetAlphaDispInfoGroup; // x8

  v2 = this;
  if ( (byte_4C31ED4 & 1) == 0 )
  {
    this = (ItemNumDispControl_o *)sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C31ED4 = 1;
  }
  SetAlphaDispInfoGroup = v2->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup )
    sub_1C32E7C(this);
  return SetAlphaDispInfoGroup->fields._size > 1;
}


void ItemNumDispControl__NextDispEventInfoGroup(ItemNumDispControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemNumDispControl__SetDispEventInfoGroup(this, -1, v2);
}


void ItemNumDispControl__SetDispEventInfoGroup(ItemNumDispControl_o *this, int32_t group_id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SetAlphaDispInfoGroup; // x0
  int32_t v6; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C31ED5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4C31ED5 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( group_id < 0 )
  {
    SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
    v6 = this->fields.infoGroupIdx + 1;
    this->fields.infoGroupIdx = v6;
    if ( !SetAlphaDispInfoGroup )
      goto LABEL_20;
    if ( v6 >= SetAlphaDispInfoGroup->fields._size )
      this->fields.infoGroupIdx = 0;
  }
  else
  {
    SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
    this->fields.infoGroupIdx = group_id;
    if ( !SetAlphaDispInfoGroup )
      goto LABEL_20;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    SetAlphaDispInfoGroup,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C32E7C(0);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v9.fields._current, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SetAlphaDispInfoGroup,
                                                                               this->fields.infoGroupIdx,
                                                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__)) == 0
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_gameObject(
                                                                               (UnityEngine_GameObject_o *)SetAlphaDispInfoGroup,
                                                                               0)) == 0 )
  {
LABEL_20:
    sub_1C32E7C(SetAlphaDispInfoGroup);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SetAlphaDispInfoGroup, 1, 0);
}


void ItemNumDispControl__Update(ItemNumDispControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( ItemNumDispControl__IsEventInfoGroups(this, method) )
    ItemNumDispControl__UpdateEventAlphaAnim(this, v3);
}


void ItemNumDispControl__UpdateEventAlphaAnim(ItemNumDispControl_o *this, const MethodInfo *method)
{
  CommonUI_o *IsEventInfoGroups; // x0
  struct UIWidget_o *alphaAnimRoot; // x8
  UIWidget_c *klass; // x9
  long double inited; // q0
  float alphaAnimTgt; // s10
  float v8; // s8
  ItemNumDispControl_c *v9; // x0
  float EVENT_ALPHA_ANIM_SPD_RATE; // s11
  ItemNumDispControl_c *v11; // x0
  float alphaAnimTimeOld; // s12
  float v13; // s9
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C31ED6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&ItemNumDispControl_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31ED6 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsEventInfoGroups = (CommonUI_o *)ItemNumDispControl__IsEventInfoGroups(this, method);
  alphaAnimRoot = this->fields.alphaAnimRoot;
  if ( !alphaAnimRoot )
    goto LABEL_28;
  klass = alphaAnimRoot->klass;
  if ( ((unsigned __int8)IsEventInfoGroups & 1) != 0 )
  {
    inited = ((long double (__fastcall *)(struct UIWidget_o *, const MethodInfo *))klass->vtable._7_get_alpha.methodPtr)(
               this->fields.alphaAnimRoot,
               klass->vtable._7_get_alpha.method);
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v8 = *(float *)&inited;
    v9 = ItemNumDispControl_TypeInfo;
    if ( !ItemNumDispControl_TypeInfo->_2.cctor_finished )
    {
      inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
      v9 = ItemNumDispControl_TypeInfo;
    }
    EVENT_ALPHA_ANIM_SPD_RATE = v9->static_fields->EVENT_ALPHA_ANIM_SPD_RATE;
    if ( !this->fields.isPauseEventAlphaAnim )
    {
      IsEventInfoGroups = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !IsEventInfoGroups )
        goto LABEL_28;
      if ( !CommonUI__IsActive_UserPresentBoxWindow(IsEventInfoGroups, 0) )
      {
        *(float *)&inited = UnityEngine_Time__get_realtimeSinceStartup(0);
        v11 = ItemNumDispControl_TypeInfo;
        alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
        v13 = *(float *)&inited;
        if ( !ItemNumDispControl_TypeInfo->_2.cctor_finished )
        {
          inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
          v11 = ItemNumDispControl_TypeInfo;
        }
        if ( (float)(v13 - alphaAnimTimeOld) >= v11->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
        {
          this->fields.alphaAnimTgt = 0.0;
          this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
        }
      }
    }
    *(float *)&inited = v8 + (float)((float)(alphaAnimTgt - v8) * EVENT_ALPHA_ANIM_SPD_RATE);
    if ( *(float *)&inited <= 0.01 && this->fields.alphaAnimTgt <= 0.0 )
    {
      this->fields.alphaAnimTgt = 1.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
      ItemNumDispControl__SetDispEventInfoGroup(this, -1, v14);
      LODWORD(inited) = 0;
    }
    IsEventInfoGroups = (CommonUI_o *)this->fields.alphaAnimRoot;
    if ( IsEventInfoGroups )
    {
      ((void (__fastcall *)(CommonUI_o *, Il2CppClass *, long double))IsEventInfoGroups->klass[1]._1.element_class)(
        IsEventInfoGroups,
        IsEventInfoGroups->klass[1]._1.castClass,
        inited);
      return;
    }
LABEL_28:
    sub_1C32E7C(IsEventInfoGroups);
  }
  ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))klass->vtable._8_set_alpha.methodPtr)(
    this->fields.alphaAnimRoot,
    klass->vtable._8_set_alpha.method,
    1.0);
  IsEventInfoGroups = (CommonUI_o *)this->fields.SetAlphaDispInfoGroup;
  if ( !IsEventInfoGroups )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)IsEventInfoGroups,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1C32E7C(0);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v16.fields._current, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}