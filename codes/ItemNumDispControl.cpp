void ItemNumDispControl___cctor(const MethodInfo *method)
{
  if ( (byte_4D2AD15 & 1) == 0 )
  {
    sub_1C93AD4(&ItemNumDispControl_TypeInfo);
    byte_4D2AD15 = 1;
  }
  *ItemNumDispControl_TypeInfo->static_fields = (struct ItemNumDispControl_StaticFields)0x400000003F000000LL;
}


void ItemNumDispControl___ctor(ItemNumDispControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4D2AD14 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D2AD14 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.SetAlphaDispInfoGroup = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C93A78(&this->fields.SetAlphaDispInfoGroup, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemNumDispControl__InitEventAlphaAnim(
        ItemNumDispControl_o *this,
        System_Collections_Generic_List_GameObject__o *infoList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o **p_SetAlphaDispInfoGroup; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct UIWidget_o *alphaAnimRoot; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2AD10 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4D2AD10 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  this->fields.SetAlphaDispInfoGroup = infoList;
  p_SetAlphaDispInfoGroup = &this->fields.SetAlphaDispInfoGroup;
  sub_1C93A78(&this->fields.SetAlphaDispInfoGroup, infoList);
  if ( ItemNumDispControl__IsEventInfoGroups(this, v6) )
  {
    ItemNumDispControl__SetDispEventInfoGroup(this, 0, v8);
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
    sub_1C93D2C(alphaAnimRoot, v7);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)alphaAnimRoot,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1C93D2C(0, v10);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v13.fields._current, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v12);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool ItemNumDispControl__IsEventInfoGroups(ItemNumDispControl_o *this, const MethodInfo *method)
{
  ItemNumDispControl_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *SetAlphaDispInfoGroup; // x8

  v2 = this;
  if ( (byte_4D2AD11 & 1) == 0 )
  {
    this = (ItemNumDispControl_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4D2AD11 = 1;
  }
  SetAlphaDispInfoGroup = v2->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup )
    sub_1C93D2C(this, method);
  return SetAlphaDispInfoGroup->fields._size > 1;
}


void ItemNumDispControl__NextDispEventInfoGroup(ItemNumDispControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemNumDispControl__SetDispEventInfoGroup(this, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
void ItemNumDispControl__SetDispEventInfoGroup(ItemNumDispControl_o *this, int32_t group_id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SetAlphaDispInfoGroup; // x0
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D2AD12 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4D2AD12 = 1;
  }
  memset(&v11, 0, sizeof(v11));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    SetAlphaDispInfoGroup,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1C93D2C(0, v7);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v11.fields._current, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v9);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SetAlphaDispInfoGroup,
                                                                               this->fields.infoGroupIdx,
                                                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__)) == 0
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_gameObject(
                                                                               (UnityEngine_GameObject_o *)SetAlphaDispInfoGroup,
                                                                               0)) == 0 )
  {
LABEL_20:
    sub_1C93D2C(SetAlphaDispInfoGroup, *(_QWORD *)&group_id);
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
  __int64 v4; // x1
  struct UIWidget_o *alphaAnimRoot; // x8
  UIWidget_c *klass; // x9
  long double inited; // q0
  float alphaAnimTgt; // s10
  float v9; // s8
  ItemNumDispControl_c *v10; // x0
  float EVENT_ALPHA_ANIM_SPD_RATE; // s11
  ItemNumDispControl_c *v12; // x0
  float alphaAnimTimeOld; // s12
  float v14; // s9
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2AD13 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&ItemNumDispControl_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2AD13 = 1;
  }
  memset(&v19, 0, sizeof(v19));
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
    v9 = *(float *)&inited;
    v10 = ItemNumDispControl_TypeInfo;
    if ( !ItemNumDispControl_TypeInfo->_2.cctor_finished )
    {
      inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
      v10 = ItemNumDispControl_TypeInfo;
    }
    EVENT_ALPHA_ANIM_SPD_RATE = v10->static_fields->EVENT_ALPHA_ANIM_SPD_RATE;
    if ( !this->fields.isPauseEventAlphaAnim )
    {
      IsEventInfoGroups = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !IsEventInfoGroups )
        goto LABEL_28;
      if ( !CommonUI__IsActive_UserPresentBoxWindow(IsEventInfoGroups, 0) )
      {
        *(float *)&inited = UnityEngine_Time__get_realtimeSinceStartup(0);
        v12 = ItemNumDispControl_TypeInfo;
        alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
        v14 = *(float *)&inited;
        if ( !ItemNumDispControl_TypeInfo->_2.cctor_finished )
        {
          inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
          v12 = ItemNumDispControl_TypeInfo;
        }
        if ( (float)(v14 - alphaAnimTimeOld) >= v12->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
        {
          this->fields.alphaAnimTgt = 0.0;
          this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
        }
      }
    }
    *(float *)&inited = v9 + (float)((float)(alphaAnimTgt - v9) * EVENT_ALPHA_ANIM_SPD_RATE);
    if ( *(float *)&inited <= 0.01 && this->fields.alphaAnimTgt <= 0.0 )
    {
      this->fields.alphaAnimTgt = 1.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
      ItemNumDispControl__SetDispEventInfoGroup(this, -1, v15);
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
    sub_1C93D2C(IsEventInfoGroups, v4);
  }
  ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))klass->vtable._8_set_alpha.methodPtr)(
    this->fields.alphaAnimRoot,
    klass->vtable._8_set_alpha.method,
    1.0);
  IsEventInfoGroups = (CommonUI_o *)this->fields.SetAlphaDispInfoGroup;
  if ( !IsEventInfoGroups )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)IsEventInfoGroups,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v19.fields._current )
      sub_1C93D2C(0, v16);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v19.fields._current, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v18);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}