void ItemNumDispControl___cctor(const MethodInfo *method)
{
  if ( (byte_59327A2 & 1) == 0 )
  {
    sub_21FFC50(&ItemNumDispControl_TypeInfo);
    byte_59327A2 = 1;
  }
  *ItemNumDispControl_TypeInfo->static_fields = (struct ItemNumDispControl_StaticFields)0x400000003F000000LL;
}


void ItemNumDispControl___ctor(ItemNumDispControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59327A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_59327A1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.SetAlphaDispInfoGroup = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SetAlphaDispInfoGroup,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemNumDispControl__InitEventAlphaAnim(
        ItemNumDispControl_o *this,
        System_Collections_Generic_List_GameObject__o *infoList,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_GameObject__o **p_SetAlphaDispInfoGroup; // x21
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct UIWidget_o *alphaAnimRoot; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_593279D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_593279D = 1;
  }
  v18.fields._list = 0;
  *(_QWORD *)&v18.fields._index = 0;
  this->fields.SetAlphaDispInfoGroup = infoList;
  p_SetAlphaDispInfoGroup = &this->fields.SetAlphaDispInfoGroup;
  v18.fields._current = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SetAlphaDispInfoGroup,
    (int32_t)infoList,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ItemNumDispControl__IsEventInfoGroups(this, v11) )
  {
    ItemNumDispControl__SetDispEventInfoGroup(this, 0, v13);
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
    sub_21FFECC(alphaAnimRoot, v12);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)alphaAnimRoot,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v18.fields._current )
      sub_21FFECC(0, v15);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v18.fields._current, 0);
    if ( !gameObject )
      sub_21FFECC(0, v17);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool ItemNumDispControl__IsEventInfoGroups(ItemNumDispControl_o *this, const MethodInfo *method)
{
  ItemNumDispControl_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *SetAlphaDispInfoGroup; // x8

  v2 = this;
  if ( (byte_593279E & 1) == 0 )
  {
    this = (ItemNumDispControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_593279E = 1;
  }
  SetAlphaDispInfoGroup = v2->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup )
    sub_21FFECC(this, method);
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593279F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_593279F = 1;
  }
  memset(&v10, 0, sizeof(v10));
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
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_21FFECC(0, v7);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v10.fields._current, 0);
    if ( !gameObject )
      sub_21FFECC(0, v9);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SetAlphaDispInfoGroup,
                                                                               this->fields.infoGroupIdx,
                                                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__)) == 0
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_gameObject(
                                                                               (UnityEngine_GameObject_o *)SetAlphaDispInfoGroup,
                                                                               0)) == 0 )
  {
LABEL_20:
    sub_21FFECC(SetAlphaDispInfoGroup, *(_QWORD *)&group_id);
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
  __int64 v3; // x1
  bool IsEventInfoGroups; // w8
  CommonUI_o *alphaAnimRoot; // x0
  __int64 v6; // x2
  __n128 inited; // q0
  float v8; // s8
  float alphaAnimTgt; // s10
  ItemNumDispControl_c *v10; // x0
  float EVENT_ALPHA_ANIM_SPD_RATE; // s11
  __int64 v12; // x2
  ItemNumDispControl_c *v13; // x0
  float v14; // s9
  float alphaAnimTimeOld; // s12
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59327A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&ItemNumDispControl_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59327A0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  IsEventInfoGroups = ItemNumDispControl__IsEventInfoGroups(this, method);
  alphaAnimRoot = (CommonUI_o *)this->fields.alphaAnimRoot;
  if ( IsEventInfoGroups )
  {
    if ( !alphaAnimRoot )
      goto LABEL_29;
    v8 = ((float (__fastcall *)(CommonUI_o *, _QWORD))alphaAnimRoot->klass[1]._1.this_arg.data)(
           alphaAnimRoot,
           *(_QWORD *)&alphaAnimRoot->klass[1]._1.this_arg.bits);
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v10 = ItemNumDispControl_TypeInfo;
    if ( !*(&ItemNumDispControl_TypeInfo->_2.cctor_finished + 1) )
    {
      inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo, v3, v6);
      v10 = ItemNumDispControl_TypeInfo;
    }
    EVENT_ALPHA_ANIM_SPD_RATE = v10->static_fields->EVENT_ALPHA_ANIM_SPD_RATE;
    if ( !this->fields.isPauseEventAlphaAnim )
    {
      alphaAnimRoot = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !alphaAnimRoot )
        goto LABEL_29;
      if ( !CommonUI__IsActive_UserPresentBoxWindow(alphaAnimRoot, 0) )
      {
        inited.n128_f32[0] = UnityEngine_Time__get_realtimeSinceStartup(0);
        v13 = ItemNumDispControl_TypeInfo;
        v14 = inited.n128_f32[0];
        alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
        if ( !*(&ItemNumDispControl_TypeInfo->_2.cctor_finished + 1) )
        {
          inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo, v3, v12);
          v13 = ItemNumDispControl_TypeInfo;
        }
        if ( (float)(v14 - alphaAnimTimeOld) >= v13->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
        {
          this->fields.alphaAnimTgt = 0.0;
          this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
        }
      }
    }
    inited.n128_f32[0] = v8 + (float)((float)(alphaAnimTgt - v8) * EVENT_ALPHA_ANIM_SPD_RATE);
    if ( inited.n128_f32[0] <= 0.01 && this->fields.alphaAnimTgt <= 0.0 )
    {
      this->fields.alphaAnimTgt = 1.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
      ItemNumDispControl__SetDispEventInfoGroup(this, -1, v16);
      inited.n128_u64[0] = 0;
    }
    alphaAnimRoot = (CommonUI_o *)this->fields.alphaAnimRoot;
    if ( alphaAnimRoot )
    {
      ((void (__fastcall *)(CommonUI_o *, Il2CppClass *, long double))alphaAnimRoot->klass[1]._1.element_class)(
        alphaAnimRoot,
        alphaAnimRoot->klass[1]._1.castClass,
        *(long double *)&inited);
      return;
    }
LABEL_29:
    sub_21FFECC(alphaAnimRoot, v3);
  }
  if ( !alphaAnimRoot )
    goto LABEL_29;
  ((void (__fastcall *)(CommonUI_o *, Il2CppClass *, float))alphaAnimRoot->klass[1]._1.element_class)(
    alphaAnimRoot,
    alphaAnimRoot->klass[1]._1.castClass,
    1.0);
  alphaAnimRoot = (CommonUI_o *)this->fields.SetAlphaDispInfoGroup;
  if ( !alphaAnimRoot )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)alphaAnimRoot,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v20.fields._current )
      sub_21FFECC(0, v17);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v20.fields._current, 0);
    if ( !gameObject )
      sub_21FFECC(0, v19);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}