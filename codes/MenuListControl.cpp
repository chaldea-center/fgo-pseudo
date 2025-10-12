void MenuListControl___cctor(const MethodInfo *method)
{
  struct MenuListControl_StaticFields *static_fields; // x8

  if ( (byte_4C3B975 & 1) == 0 )
  {
    sub_1C32C20(&MenuListControl_TypeInfo);
    byte_4C3B975 = 1;
  }
  static_fields = MenuListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void MenuListControl___ctor(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppType *v6; // x20
  System_RuntimeTypeHandle_o v7; // x0
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  struct RestTimeNoticeControl_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3B974 & 1) == 0 )
  {
    sub_1C32C20(&MenuListControl_CombineKind_var);
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
    sub_1C32C20(&RestTimeNoticeControl___TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    byte_4C3B974 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setNoticeNumList, (int32_t)v3, v4, v5);
  v6 = MenuListControl_CombineKind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v7.fields.value = (intptr_t)v6;
  TypeFromHandle = System_Type__GetTypeFromHandle(v7, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0);
  if ( !Names )
    sub_1C32E7C(0);
  v10 = (struct RestTimeNoticeControl_array *)sub_1C32CC8(RestTimeNoticeControl___TypeInfo, LODWORD(Names->max_length));
  this->fields.restTimeNoticeList = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.restTimeNoticeList, (int32_t)v10, v11, v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


AlphaTransitionCalculator_o *MenuListControl__CreateAlphaCalculator(MenuListControl_o *this, const MethodInfo *method)
{
  MenuListControl_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_4C3B96F & 1) == 0 )
  {
    sub_1C32C20(&AlphaTransitionCalculator_TypeInfo);
    sub_1C32C20(&MenuListControl_TypeInfo);
    byte_4C3B96F = 1;
  }
  v2 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v2 = MenuListControl_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
         0);
  v5 = (AlphaTransitionCalculator_o *)sub_1C32E6C(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0);
  return v5;
}


void MenuListControl__InitMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t childCount; // w21
  System_Collections_Generic_List_object__o *v5; // x22
  struct System_Collections_Generic_List_EventNoticeControl__o **p_noticeList; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int v9; // w24
  int32_t v10; // w21
  int klass; // w8
  UnityEngine_GameObject_o *v12; // x22
  unsigned int v13; // w27
  int *v14; // x8
  EventNoticeControl_o *v15; // x23
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 klass_low; // x10
  intptr_t v22; // x8

  if ( (byte_4C3B968 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventNoticeControl__TypeInfo);
    byte_4C3B968 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject )
    goto LABEL_25;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventNoticeControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v5;
  p_noticeList = &this->fields.noticeList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.noticeList, (int32_t)v5, v7, v8);
  v9 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 v10,
                                                 0);
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 1,
                                                 (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_25;
      klass = (int)gameObject[1].klass;
      v12 = gameObject;
      if ( klass >= 1 )
        break;
LABEL_23:
      if ( ++v10 == v9 )
        return;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= klass )
        sub_1C32E84(gameObject);
      v14 = (int *)(&v12->klass + (int)v13);
      v15 = (EventNoticeControl_o *)*((_QWORD *)v14 + 4);
      if ( !v15 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v14 + 4), 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      EventNoticeControl__Initialize(v15, v16);
      gameObject = (UnityEngine_GameObject_o *)*p_noticeList;
      if ( !*p_noticeList )
        break;
      m_CachedPtr = gameObject->fields.m_CachedPtr;
      v20 = Method_System_Collections_Generic_List_EventNoticeControl__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v15,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = m_CachedPtr + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v22 + 32) = v15;
        sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v15, v17, v18);
      }
      klass = (int)v12[1].klass;
      if ( (int)++v13 >= klass )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C32E7C(gameObject);
  }
}


void MenuListControl__ResetAlphaAnimTime(MenuListControl_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0

  this->fields.alphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  this->fields.alphaAnimTimeOld = realtimeSinceStartup;
  if ( fadeUIAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0);
}


void MenuListControl__SetBudgeNumNotice(MenuListControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int v4; // w8
  unsigned __int64 v5; // x20
  __int64 v6; // x26
  __int64 i; // x27
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *setNoticeNumList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v14; // x1
  Il2CppClass **v15; // x0
  Il2CppObject *ComponentInChildren_object__51199524; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  unsigned int *restTimeNoticeList; // x28
  __int64 v20; // x0

  if ( (byte_4C3B969 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
    sub_1C32C20(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B969 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject )
    goto LABEL_29;
  v4 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0) - 1;
  if ( v4 >= 1 )
  {
    v5 = 0;
    v6 = (unsigned int)v4;
    for ( i = 8; ; i += 2 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 v5,
                                                 0);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__51199524(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
      if ( !setNoticeNumList )
        break;
      items = setNoticeNumList->fields._items;
      v12 = Method_System_Collections_Generic_List_SetNoticeNumControl__Add__;
      ++setNoticeNumList->fields._version;
      if ( !items )
        break;
      size = setNoticeNumList->fields._size;
      v14 = gameObject;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          setNoticeNumList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        setNoticeNumList->fields._size = size + 1;
        v15[4] = (Il2CppClass *)v14;
        sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v8, v9);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 v5,
                                                 0);
      if ( !gameObject )
        break;
      ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)ComponentInChildren_object__51199524,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        restTimeNoticeList = (unsigned int *)this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( ComponentInChildren_object__51199524 )
        {
          gameObject = (UnityEngine_GameObject_o *)sub_1C32D5C(
                                                     ComponentInChildren_object__51199524,
                                                     *(_QWORD *)(*(_QWORD *)restTimeNoticeList + 64LL));
          if ( !gameObject )
          {
            v20 = sub_1C32EA0(0);
            sub_1C32D48(v20, 0);
          }
        }
        if ( v5 >= restTimeNoticeList[6] )
          sub_1C32E84(gameObject);
        *(_QWORD *)&restTimeNoticeList[2 * v5 + 8] = ComponentInChildren_object__51199524;
        sub_1C32BC4(
          (CGThumbnailListItem_o *)&restTimeNoticeList[i],
          (int32_t)ComponentInChildren_object__51199524,
          v17,
          v18);
      }
      if ( v6 == ++v5 )
        return;
    }
LABEL_29:
    sub_1C32E7C(gameObject);
  }
}


void MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w8
  int v5; // w21
  int32_t v6; // w20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4C3B970 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    byte_4C3B970 = 1;
  }
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    v5 = size - 1;
    if ( size >= 1 )
    {
      v6 = 0;
      do
      {
        noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    noticeList,
                                                                    v6,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)noticeList, 0) )
        {
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v6,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__UpdateEventNotice((EventNoticeControl_o *)noticeList, v7);
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v6,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__ChangeEventInfo((EventNoticeControl_o *)noticeList, v8);
        }
        if ( v5 == v6 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
        ++v6;
      }
      while ( noticeList );
      sub_1C32E7C(noticeList);
    }
  }
}


void MenuListControl__SetMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MenuListControl__checkEventNotice(this, method);
  MenuListControl__SetEventNotice(this, v3);
}


void MenuListControl__SetScrollBarValue(MenuListControl_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v6; // x0
  struct UIScrollView_o *v7; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v9; // x8

  if ( (byte_4C3B973 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B973 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v7 = this->fields.menuListScrollView;
    if ( !v7 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v7->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v9 = this->fields.menuListScrollView;
      if ( v9 )
      {
        v6 = v9->fields.verticalScrollBar;
        if ( v6 )
        {
          UIProgressBar__set_value(v6, value, 0);
          return;
        }
      }
LABEL_14:
      sub_1C32E7C(v6);
    }
  }
}


void MenuListControl__Update(MenuListControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x21
  il2cpp_array_size_t max_length; // x8
  int64_t v6; // x19
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x20

  if ( (byte_4C3B967 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B967 = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_17:
    sub_1C32E7C(Time);
  max_length = restTimeNoticeList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = Time;
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C32E84(Time);
      v8 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Time = UnityEngine_Object__op_Equality(v8, 0, 0);
      if ( (Time & 1) == 0 )
      {
        if ( !v8 )
          goto LABEL_17;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v8, v6, 0);
      }
      LODWORD(max_length) = restTimeNoticeList->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
  }
}


void MenuListControl__UpdateAnim(MenuListControl_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  AlphaTransitionCalculator_o *AlphaCalculator; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v10; // s8
  MenuListControl_c *v11; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4C3B96E & 1) == 0 )
  {
    sub_1C32C20(&MenuListControl_TypeInfo);
    sub_1C32C20(&Method_TransitionCalculator_float__Update__);
    sub_1C32C20(&Method_TransitionCalculator_float__get_Current__);
    byte_4C3B96E = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = MenuListControl__CreateAlphaCalculator(0, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fadeUIAlphaCalculator, (int32_t)AlphaCalculator, v6, v7);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_19;
  }
  TransitionCalculator_float___Update(
    (TransitionCalculator_float__o *)fadeUIAlphaCalculator,
    (const MethodInfo_3A5B92C *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v10 = realtimeSinceStartup;
    v11 = MenuListControl_TypeInfo;
    if ( !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
      v11 = MenuListControl_TypeInfo;
    }
    if ( (float)(v10 - alphaAnimTimeOld) >= v11->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
      if ( !*p_fadeUIAlphaCalculator )
        goto LABEL_19;
      AlphaTransitionCalculator__StartFadeOut(fadeUIAlphaCalculator, 0);
    }
  }
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(
                                                           fadeUIAlphaCalculator,
                                                           0);
  if ( ((unsigned __int8)fadeUIAlphaCalculator & 1) != 0 )
  {
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__StartFadeIn(fadeUIAlphaCalculator, 0);
    this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
    MenuListControl__SetEventNotice(this, v13);
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_19:
    sub_1C32E7C(fadeUIAlphaCalculator);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v12);
}


void MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3B972 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
    byte_4C3B972 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( !noticeList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    noticeList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C32E7C(0);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w21
  int32_t v5; // w20
  const MethodInfo *v6; // x1

  if ( (byte_4C3B971 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    byte_4C3B971 = 1;
  }
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v5 = 0;
      do
      {
        noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    noticeList,
                                                                    v5,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        EventNoticeControl__SetAlpha((EventNoticeControl_o *)noticeList, this->fields.alphaAnimNow, v6);
        if ( size == ++v5 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
      }
      while ( noticeList );
      sub_1C32E7C(noticeList);
    }
  }
  else
  {
    MenuListControl__InitMenuEventNotice(this, method);
  }
}


void MenuListControl__checkEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  MenuListControl_o *v2; // x19
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x20
  System_Collections_Generic_List_object__o *v5; // x22
  System_Collections_Generic_List_object__o **p_combineEventList; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x22
  int max_length; // w8
  __int64 v11; // x23
  EventEntity_o *v12; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  MenuListControl_o *v18; // x1
  Il2CppClass **v19; // x0
  __int64 v20; // x23
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t current; // w1
  __int64 v25; // x0
  int v26; // w29
  System_Func_object__bool__o *v27; // x24
  Il2CppObject *v28; // x0
  const MethodInfo *v29; // x3
  EventInfoData_o *v30; // x22
  System_Collections_Generic_List_object__o *noticeList; // x0
  int32_t v32; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v34; // x2
  System_Collections_Generic_List_object__o *v35; // x0
  Il2CppObject *v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_4C3B96A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C32C20(&System_Func_EventEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_EventInfoData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__);
    this = (MenuListControl_o *)sub_1C32C20(&MenuListControl___c__DisplayClass20_0_TypeInfo);
    byte_4C3B96A = 1;
  }
  memset(&v46, 0, sizeof(v46));
  combineData = v2->fields.combineData;
  if ( !combineData )
    goto LABEL_36;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventInfoData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v2->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v5;
    p_combineEventList = (System_Collections_Generic_List_object__o **)&v2->fields.combineEventList;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.combineEventList, (int32_t)v5, v7, v8);
    v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1C32E84(this);
        v12 = combineEventList->m_Items[v11];
        if ( !v12 )
          break;
        this = (MenuListControl_o *)v2->fields.combineData;
        if ( !this )
          break;
        this = (MenuListControl_o *)CombineInitData__getCombineEventData((CombineInitData_o *)this, v12->fields.id, 0);
        if ( this )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v16 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          v18 = this;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)this,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v18;
            sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_17;
      }
LABEL_36:
      sub_1C32E7C(this);
    }
LABEL_17:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v9,
                                  0);
    if ( !this )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v46 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v20 = sub_1C32E6C(MenuListControl___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v20, 0);
      if ( !v20 )
        sub_1C32E7C(v21);
      current = (int32_t)v46.fields._current;
      *(_QWORD *)(v20 + 16) = v46.fields._current;
      sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 16), current, v22, v23);
      if ( !*(_QWORD *)(v20 + 16) )
        sub_1C32E7C(v25);
      v26 = *(_DWORD *)(*(_QWORD *)(v20 + 16) + 20LL) - 1;
      if ( (unsigned int)v26 < 0x21 && ((0x1840782BBuLL >> v26) & 1) != 0 )
      {
        v27 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v20,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          0);
        v28 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
                (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                (System_Func_TSource__bool__o *)v27,
                (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v30 = MenuListControl__setEventInfo(
                (MenuListControl_o *)v28,
                *(EventCampaignEntity_o **)(v20 + 16),
                (EventEntity_o *)v28,
                v29);
        noticeList = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !noticeList )
          sub_1C32E7C(0);
        v32 = dword_C47604[v26];
        Item = System_Collections_Generic_List_object___get_Item(
                 noticeList,
                 v32,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !Item )
          sub_1C32E7C(0);
        EventNoticeControl__SetCombineEventData((EventNoticeControl_o *)Item, v30, v34);
        v35 = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !v35 )
          sub_1C32E7C(0);
        v36 = System_Collections_Generic_List_object___get_Item(
                v35,
                v32,
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !v36 )
          sub_1C32E7C(0);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v36, 0);
        if ( !gameObject )
          sub_1C32E7C(0);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        v40 = *p_combineEventList;
        if ( !*p_combineEventList )
          sub_1C32E7C(0);
        v41 = v40->fields._items;
        v42 = Method_System_Collections_Generic_List_EventInfoData__Add__;
        ++v40->fields._version;
        if ( !v41 )
          sub_1C32E7C(v40);
        v43 = v40->fields._size;
        if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            (Il2CppObject *)v30,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &v41->obj.klass + v43;
          v40->fields._size = v43 + 1;
          v44[4] = (Il2CppClass *)v30;
          sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v30, v38, v39);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
}


System_Collections_Generic_List_EventInfoData__o *MenuListControl__getCombineEventList(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEventList;
}


float MenuListControl__get_AlphaAnimNow(MenuListControl_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


float MenuListControl__get_ScrollBarValue(MenuListControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v4; // x0
  struct UIScrollView_o *v5; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v7; // x8

  if ( (byte_4C3B966 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B966 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v5 = this->fields.menuListScrollView;
    if ( !v5 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v5->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v7 = this->fields.menuListScrollView;
      if ( v7 )
      {
        v4 = v7->fields.verticalScrollBar;
        if ( v4 )
          return UIProgressBar__get_value(v4, 0);
      }
LABEL_14:
      sub_1C32E7C(v4);
    }
  }
  return 0.0;
}


void MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, const MethodInfo *, float, float))menuListScrollView->klass->vtable._9_SetDragAmount.methodPtr)(
    menuListScrollView,
    0,
    menuListScrollView->klass->vtable._9_SetDragAmount.method,
    0.0,
    0.0);
}


void MenuListControl__setBannerIcon(
        MenuListControl_o *this,
        UISprite_o *targetSprite,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C3B96C & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C3B96C = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0)) == 0 )
  {
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *setNoticeNumList; // x0

  if ( (byte_4C3B96D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
    byte_4C3B96D = 1;
  }
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    1,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !enableData )
    goto LABEL_17;
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.skillUpEnableNum, 0);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    3,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.limitUpEnableNum, 0);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    5,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum(
    (SetNoticeNumControl_o *)setNoticeNumList,
    enableData->fields.friendshipExceedEnableNum,
    0);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          10,
                                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.npUpEnableNum,
          0),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          11,
                                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.lvExceedEnableNum,
          0),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          12,
                                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0 )
  {
LABEL_17:
    sub_1C32E7C(setNoticeNumList);
  }
  SetNoticeNumControl__setNoticeNum(
    (SetNoticeNumControl_o *)setNoticeNumList,
    enableData->fields.costumeCombineEnableNum,
    0);
}


EventInfoData_o *MenuListControl__setEventInfo(
        MenuListControl_o *this,
        EventCampaignEntity_o *combineEventEnt,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int32_array *targetIds; // x1
  System_String_o *EventName; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_o *detail; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C3B96B & 1) == 0 )
  {
    sub_1C32C20(&EventInfoData_TypeInfo);
    byte_4C3B96B = 1;
  }
  v6 = sub_1C32E6C(EventInfoData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_1C32E7C(v7);
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  targetIds = combineEventEnt->fields.targetIds;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)targetIds, v8, v9);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = EventEntity__getEventName(eventEnt, 0);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 40), (int32_t)EventName, v12, v13);
  detail = eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 48), (int32_t)detail, v15, v16);
  *(float *)(v6 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_OWORD *)(v6 + 64) = *(_OWORD *)&eventEnt->fields.startedAt;
  *(_QWORD *)(v6 + 80) = eventEnt;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 80), (int32_t)eventEnt, v17, v18);
  return (EventInfoData_o *)v6;
}


void MenuListControl___c__DisplayClass20_0___ctor(
        MenuListControl___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MenuListControl___c__DisplayClass20_0___checkEventNotice_b__0(
        MenuListControl___c__DisplayClass20_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEntity; // x8

  if ( !entity || (eventCampaignEntity = this->fields.eventCampaignEntity) == 0 )
    sub_1C32E7C(this);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}