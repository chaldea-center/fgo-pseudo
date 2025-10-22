void MenuListControl___cctor(const MethodInfo *method)
{
  struct MenuListControl_StaticFields *static_fields; // x8

  if ( (byte_4C5AD7F & 1) == 0 )
  {
    sub_1C3E564(&MenuListControl_TypeInfo);
    byte_4C5AD7F = 1;
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
  __int64 v10; // x1
  struct RestTimeNoticeControl_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C5AD7E & 1) == 0 )
  {
    sub_1C3E564(&MenuListControl_CombineKind_var);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
    sub_1C3E564(&RestTimeNoticeControl___TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    byte_4C5AD7E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.setNoticeNumList, (int32_t)v3, v4, v5);
  v6 = MenuListControl_CombineKind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v7.fields.value = (intptr_t)v6;
  TypeFromHandle = System_Type__GetTypeFromHandle(v7, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0);
  if ( !Names )
    sub_1C3E7C0(0, v10);
  v11 = (struct RestTimeNoticeControl_array *)sub_1C3E60C(RestTimeNoticeControl___TypeInfo, LODWORD(Names->max_length));
  this->fields.restTimeNoticeList = v11;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.restTimeNoticeList, (int32_t)v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


AlphaTransitionCalculator_o *MenuListControl__CreateAlphaCalculator(MenuListControl_o *this, const MethodInfo *method)
{
  MenuListControl_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_4C5AD79 & 1) == 0 )
  {
    sub_1C3E564(&AlphaTransitionCalculator_TypeInfo);
    sub_1C3E564(&MenuListControl_TypeInfo);
    byte_4C5AD79 = 1;
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
  v5 = (AlphaTransitionCalculator_o *)sub_1C3E7B0(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0);
  return v5;
}


void MenuListControl__InitMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t childCount; // w21
  System_Collections_Generic_List_object__o *v6; // x22
  struct System_Collections_Generic_List_EventNoticeControl__o **p_noticeList; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int v10; // w24
  int32_t v11; // w21
  int klass; // w8
  UnityEngine_GameObject_o *v13; // x22
  unsigned int v14; // w27
  int *v15; // x8
  EventNoticeControl_o *v16; // x23
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v21; // x9
  __int64 klass_low; // x10
  intptr_t v23; // x8

  if ( (byte_4C5AD72 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventNoticeControl__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventNoticeControl__TypeInfo);
    byte_4C5AD72 = 1;
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
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventNoticeControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v6;
  p_noticeList = &this->fields.noticeList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.noticeList, (int32_t)v6, v8, v9);
  v10 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v11 = 0;
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
                                                 v11,
                                                 0);
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 1,
                                                 (const MethodInfo_30F0F64 *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_25;
      klass = (int)gameObject[1].klass;
      v13 = gameObject;
      if ( klass >= 1 )
        break;
LABEL_23:
      if ( ++v11 == v10 )
        return;
    }
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= klass )
        sub_1C3E7C8(gameObject, v4);
      v15 = (int *)(&v13->klass + (int)v14);
      v16 = (EventNoticeControl_o *)*((_QWORD *)v15 + 4);
      if ( !v16 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v15 + 4), 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      EventNoticeControl__Initialize(v16, v17);
      gameObject = (UnityEngine_GameObject_o *)*p_noticeList;
      if ( !*p_noticeList )
        break;
      m_CachedPtr = gameObject->fields.m_CachedPtr;
      v21 = Method_System_Collections_Generic_List_EventNoticeControl__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v16,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = m_CachedPtr + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v23 + 32) = v16;
        sub_1C3E508((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v16, v18, v19);
      }
      klass = (int)v13[1].klass;
      if ( (int)++v14 >= klass )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C3E7C0(gameObject, v4);
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
  __int64 v4; // x1
  int v5; // w8
  unsigned __int64 v6; // x20
  __int64 v7; // x26
  __int64 i; // x27
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *setNoticeNumList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v15; // x1
  Il2CppClass **v16; // x0
  Il2CppObject *ComponentInChildren_object__51315876; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  unsigned int *restTimeNoticeList; // x28
  __int64 v21; // x0

  if ( (byte_4C5AD73 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
    sub_1C3E564(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5AD73 = 1;
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
  v5 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0) - 1;
  if ( v5 >= 1 )
  {
    v6 = 0;
    v7 = (unsigned int)v5;
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
                                                 v6,
                                                 0);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__51315876(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
      if ( !setNoticeNumList )
        break;
      items = setNoticeNumList->fields._items;
      v13 = Method_System_Collections_Generic_List_SetNoticeNumControl__Add__;
      ++setNoticeNumList->fields._version;
      if ( !items )
        break;
      size = setNoticeNumList->fields._size;
      v15 = gameObject;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          setNoticeNumList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        setNoticeNumList->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v15;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, v9, v10);
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
                                                 v6,
                                                 0);
      if ( !gameObject )
        break;
      ComponentInChildren_object__51315876 = UnityEngine_Component__GetComponentInChildren_object__51315876(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)ComponentInChildren_object__51315876,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        restTimeNoticeList = (unsigned int *)this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( ComponentInChildren_object__51315876 )
        {
          gameObject = (UnityEngine_GameObject_o *)sub_1C3E6A0(
                                                     ComponentInChildren_object__51315876,
                                                     *(_QWORD *)(*(_QWORD *)restTimeNoticeList + 64LL));
          if ( !gameObject )
          {
            v21 = sub_1C3E7E4(0);
            sub_1C3E68C(v21, 0);
          }
        }
        if ( v6 >= restTimeNoticeList[6] )
          sub_1C3E7C8(gameObject, v4);
        *(_QWORD *)&restTimeNoticeList[2 * v6 + 8] = ComponentInChildren_object__51315876;
        sub_1C3E508(
          (CGThumbnailListItem_o *)&restTimeNoticeList[i],
          (int32_t)ComponentInChildren_object__51315876,
          v18,
          v19);
      }
      if ( v7 == ++v6 )
        return;
    }
LABEL_29:
    sub_1C3E7C0(gameObject, v4);
  }
}


void MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w8
  int v5; // w21
  int32_t v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4C5AD7A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    byte_4C5AD7A = 1;
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
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
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
                                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__UpdateEventNotice((EventNoticeControl_o *)noticeList, v7);
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v6,
                                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__ChangeEventInfo((EventNoticeControl_o *)noticeList, v7);
        }
        if ( v5 == v6 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
        ++v6;
      }
      while ( noticeList );
      sub_1C3E7C0(noticeList, v7);
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
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v10; // x8

  if ( (byte_4C5AD7D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5AD7D = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v8 = this->fields.menuListScrollView;
    if ( !v8 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v8->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v10 = this->fields.menuListScrollView;
      if ( v10 )
      {
        v6 = v10->fields.verticalScrollBar;
        if ( v6 )
        {
          UIProgressBar__set_value(v6, value, 0);
          return;
        }
      }
LABEL_14:
      sub_1C3E7C0(v6, v7);
    }
  }
}


void MenuListControl__Update(MenuListControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x21
  il2cpp_array_size_t max_length; // x8
  int64_t v7; // x19
  unsigned __int64 v8; // x22
  UnityEngine_Object_o *v9; // x20

  if ( (byte_4C5AD71 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5AD71 = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_17:
    sub_1C3E7C0(Time, v4);
  max_length = restTimeNoticeList->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = Time;
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C3E7C8(Time, v4);
      v9 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Time = UnityEngine_Object__op_Equality(v9, 0, 0);
      if ( (Time & 1) == 0 )
      {
        if ( !v9 )
          goto LABEL_17;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v9, v7, 0);
      }
      LODWORD(max_length) = restTimeNoticeList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
  }
}


void MenuListControl__UpdateAnim(MenuListControl_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  AlphaTransitionCalculator_o *AlphaCalculator; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v11; // s8
  MenuListControl_c *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4C5AD78 & 1) == 0 )
  {
    sub_1C3E564(&MenuListControl_TypeInfo);
    sub_1C3E564(&Method_TransitionCalculator_float__Update__);
    sub_1C3E564(&Method_TransitionCalculator_float__get_Current__);
    byte_4C5AD78 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = MenuListControl__CreateAlphaCalculator(0, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fadeUIAlphaCalculator, (int32_t)AlphaCalculator, v6, v7);
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
    (const MethodInfo_3A785D0 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v11 = realtimeSinceStartup;
    v12 = MenuListControl_TypeInfo;
    if ( !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
      v12 = MenuListControl_TypeInfo;
    }
    if ( (float)(v11 - alphaAnimTimeOld) >= v12->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    sub_1C3E7C0(fadeUIAlphaCalculator, v8);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v8);
}


void MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C5AD7C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
    byte_4C5AD7C = 1;
  }
  memset(&v5, 0, sizeof(v5));
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( !noticeList )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    noticeList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C3E7C0(0, v4);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w21
  int32_t v5; // w20
  const MethodInfo *v6; // x1

  if ( (byte_4C5AD7B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    byte_4C5AD7B = 1;
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
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        EventNoticeControl__SetAlpha((EventNoticeControl_o *)noticeList, this->fields.alphaAnimNow, v6);
        if ( size == ++v5 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
      }
      while ( noticeList );
      sub_1C3E7C0(noticeList, v6);
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
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t current; // w1
  __int64 v26; // x0
  __int64 v27; // x1
  int v28; // w29
  System_Func_object__bool__o *v29; // x24
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  EventInfoData_o *v33; // x22
  System_Collections_Generic_List_object__o *noticeList; // x0
  int32_t v35; // w23
  Il2CppObject *Item; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  __int64 v39; // x1
  System_Collections_Generic_List_object__o *v40; // x0
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_List_object__o *v48; // x0
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x8
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_4C5AD74 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C3E564(&System_Func_EventEntity__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventInfoData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventInfoData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_EventInfoData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C3E564(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__);
    this = (MenuListControl_o *)sub_1C3E564(&MenuListControl___c__DisplayClass20_0_TypeInfo);
    byte_4C5AD74 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  combineData = v2->fields.combineData;
  if ( !combineData )
    goto LABEL_36;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventInfoData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v2->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v5;
    p_combineEventList = (System_Collections_Generic_List_object__o **)&v2->fields.combineEventList;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.combineEventList, (int32_t)v5, v7, v8);
    v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1C3E7C8(this, method);
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
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v18;
            sub_1C3E508((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_17;
      }
LABEL_36:
      sub_1C3E7C0(this, method);
    }
LABEL_17:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v9,
                                  0);
    if ( !this )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v54 = v53;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v20 = sub_1C3E7B0(MenuListControl___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v20, 0);
      if ( !v20 )
        sub_1C3E7C0(v21, v22);
      current = (int32_t)v54.fields._current;
      *(_QWORD *)(v20 + 16) = v54.fields._current;
      sub_1C3E508((CGThumbnailListItem_o *)(v20 + 16), current, v23, v24);
      if ( !*(_QWORD *)(v20 + 16) )
        sub_1C3E7C0(v26, v27);
      v28 = *(_DWORD *)(*(_QWORD *)(v20 + 16) + 20LL) - 1;
      if ( (unsigned int)v28 < 0x21 && ((0x1840782BBuLL >> v28) & 1) != 0 )
      {
        v29 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v29,
          (Il2CppObject *)v20,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          0);
        v30 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
                (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                (System_Func_TSource__bool__o *)v29,
                (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v33 = MenuListControl__setEventInfo(
                (MenuListControl_o *)v30,
                *(EventCampaignEntity_o **)(v20 + 16),
                (EventEntity_o *)v30,
                v31);
        noticeList = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !noticeList )
          sub_1C3E7C0(0, v32);
        v35 = dword_C4CC48[v28];
        Item = System_Collections_Generic_List_object___get_Item(
                 noticeList,
                 v35,
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !Item )
          sub_1C3E7C0(0, v37);
        EventNoticeControl__SetCombineEventData((EventNoticeControl_o *)Item, v33, v38);
        v40 = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !v40 )
          sub_1C3E7C0(0, v39);
        v41 = System_Collections_Generic_List_object___get_Item(
                v40,
                v35,
                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !v41 )
          sub_1C3E7C0(0, v42);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41, 0);
        if ( !gameObject )
          sub_1C3E7C0(0, v44);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        v48 = *p_combineEventList;
        if ( !*p_combineEventList )
          sub_1C3E7C0(0, v45);
        v49 = v48->fields._items;
        v50 = Method_System_Collections_Generic_List_EventInfoData__Add__;
        ++v48->fields._version;
        if ( !v49 )
          sub_1C3E7C0(v48, v45);
        v51 = v48->fields._size;
        if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v48,
            (Il2CppObject *)v33,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &v49->obj.klass + v51;
          v48->fields._size = v51 + 1;
          v52[4] = (Il2CppClass *)v33;
          sub_1C3E508((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v33, v46, v47);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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
  __int64 v5; // x1
  struct UIScrollView_o *v6; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v8; // x8

  if ( (byte_4C5AD70 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5AD70 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.menuListScrollView;
    if ( !v6 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v6->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v8 = this->fields.menuListScrollView;
      if ( v8 )
      {
        v4 = v8->fields.verticalScrollBar;
        if ( v4 )
          return UIProgressBar__get_value(v4, 0);
      }
LABEL_14:
      sub_1C3E7C0(v4, v5);
    }
  }
  return 0.0;
}


void MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_1C3E7C0(0, method);
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
  __int64 v7; // x1

  if ( (byte_4C5AD76 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    byte_4C5AD76 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0)) == 0 )
  {
    sub_1C3E7C0(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *setNoticeNumList; // x0

  if ( (byte_4C5AD77 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
    byte_4C5AD77 = 1;
  }
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    1,
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.limitUpEnableNum, 0);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    5,
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.npUpEnableNum,
          0),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          11,
                                                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.lvExceedEnableNum,
          0),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          12,
                                                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0 )
  {
LABEL_17:
    sub_1C3E7C0(setNoticeNumList, enableData);
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
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Int32_array *targetIds; // x1
  System_String_o *EventName; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_String_o *detail; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C5AD75 & 1) == 0 )
  {
    sub_1C3E564(&EventInfoData_TypeInfo);
    byte_4C5AD75 = 1;
  }
  v6 = sub_1C3E7B0(EventInfoData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_1C3E7C0(v7, v8);
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  targetIds = combineEventEnt->fields.targetIds;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)targetIds, v9, v10);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = EventEntity__getEventName(eventEnt, 0);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), (int32_t)EventName, v13, v14);
  detail = eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 48), (int32_t)detail, v16, v17);
  *(float *)(v6 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_OWORD *)(v6 + 64) = *(_OWORD *)&eventEnt->fields.startedAt;
  *(_QWORD *)(v6 + 80) = eventEnt;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 80), (int32_t)eventEnt, v18, v19);
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
    sub_1C3E7C0(this, entity);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}