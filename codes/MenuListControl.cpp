void MenuListControl___cctor(const MethodInfo *method)
{
  struct MenuListControl_StaticFields *static_fields; // x8

  if ( (byte_5974B70 & 1) == 0 )
  {
    sub_2213A60(&MenuListControl_TypeInfo);
    byte_5974B70 = 1;
  }
  static_fields = MenuListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void MenuListControl___ctor(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  Il2CppType *v11; // x20
  __int64 v12; // x1
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  __int64 v15; // x1
  struct RestTimeNoticeControl_array *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5974B6F & 1) == 0 )
  {
    sub_2213A60(&MenuListControl_CombineKind_var);
    sub_2213A60(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
    sub_2213A60(&RestTimeNoticeControl___TypeInfo);
    byte_5974B6F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.setNoticeNumList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v11 = MenuListControl_CombineKind_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v11, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v12);
  Names = System_Enum__GetNames(TypeFromHandle, 0);
  if ( !Names )
    sub_2213CDC(0, v15);
  v16 = (struct RestTimeNoticeControl_array *)sub_2213B20(RestTimeNoticeControl___TypeInfo, LODWORD(Names->max_length));
  this->fields.restTimeNoticeList = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.restTimeNoticeList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


AlphaTransitionCalculator_o *MenuListControl__CreateAlphaCalculator(MenuListControl_o *this, const MethodInfo *method)
{
  MenuListControl_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_5974B6A & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&MenuListControl_TypeInfo);
    byte_5974B6A = 1;
  }
  v2 = MenuListControl_TypeInfo;
  if ( !*(&MenuListControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo, method);
    v2 = MenuListControl_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
         0);
  v5 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int v14; // w24
  int32_t v15; // w21
  int klass; // w8
  UnityEngine_GameObject_o *v17; // x22
  unsigned int v18; // w27
  int *v19; // x8
  EventNoticeControl_o *v20; // x23
  const MethodInfo *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 klass_low; // x10
  intptr_t v31; // x8

  if ( (byte_5974B63 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventNoticeControl__TypeInfo);
    byte_5974B63 = 1;
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
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventNoticeControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v6;
  p_noticeList = &this->fields.noticeList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.noticeList, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  v14 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v15 = 0;
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
                                                 v15,
                                                 0);
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 1,
                                                 (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_25;
      klass = (int)gameObject[1].klass;
      v17 = gameObject;
      if ( klass >= 1 )
        break;
LABEL_23:
      if ( ++v15 == v14 )
        return;
    }
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= klass )
        sub_2213CE4(gameObject);
      v19 = (int *)(&v17->klass + (int)v18);
      v20 = (EventNoticeControl_o *)*((_QWORD *)v19 + 4);
      if ( !v20 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v19 + 4), 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      EventNoticeControl__Initialize(v20, v21);
      gameObject = (UnityEngine_GameObject_o *)*p_noticeList;
      if ( !*p_noticeList )
        break;
      m_CachedPtr = gameObject->fields.m_CachedPtr;
      v29 = Method_System_Collections_Generic_List_EventNoticeControl__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v20,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = m_CachedPtr + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v31 + 32) = v20;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)v20, v22, v23, v24, v25, v26, v27);
      }
      klass = (int)v17[1].klass;
      if ( (int)++v18 >= klass )
        goto LABEL_23;
    }
LABEL_25:
    sub_2213CDC(gameObject, v4);
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
  __int64 v5; // x22
  unsigned __int64 v6; // x20
  __int64 i; // x27
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *setNoticeNumList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v18; // x1
  Il2CppClass **v19; // x0
  __int64 v20; // x1
  Il2CppObject *ComponentInChildren_object__58855044; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  unsigned int *restTimeNoticeList; // x28
  __int64 v29; // x1
  __int64 v30; // x0

  if ( (byte_5974B64 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
    sub_2213A60(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B64 = 1;
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
  v5 = (unsigned int)(UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0) - 1);
  if ( (int)v5 >= 1 )
  {
    v6 = 0;
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
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
      if ( !setNoticeNumList )
        break;
      items = setNoticeNumList->fields._items;
      v16 = Method_System_Collections_Generic_List_SetNoticeNumControl__Add__;
      ++setNoticeNumList->fields._version;
      if ( !items )
        break;
      size = setNoticeNumList->fields._size;
      v18 = gameObject;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          setNoticeNumList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        setNoticeNumList->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v18, v8, v9, v10, v11, v12, v13);
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
      ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)ComponentInChildren_object__58855044,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        restTimeNoticeList = (unsigned int *)this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( ComponentInChildren_object__58855044 )
        {
          gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(
                                                     ComponentInChildren_object__58855044,
                                                     *(_QWORD *)(*(_QWORD *)restTimeNoticeList + 64LL));
          if ( !gameObject )
          {
            v30 = sub_2213D00(0, v29);
            sub_2213BA0(v30, 0);
          }
        }
        if ( v6 >= restTimeNoticeList[6] )
          sub_2213CE4(gameObject);
        *(_QWORD *)&restTimeNoticeList[2 * v6 + 8] = ComponentInChildren_object__58855044;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&restTimeNoticeList[i],
          (int32_t)ComponentInChildren_object__58855044,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_29:
    sub_2213CDC(gameObject, v4);
  }
}


void MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x8
  int size; // w21
  int32_t v5; // w20
  System_Collections_Generic_List_object__o *Item; // x0

  if ( (byte_5974B6B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    byte_5974B6B = 1;
  }
  noticeList = this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v5 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v5,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !Item )
          break;
        if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)Item, 0) )
        {
          Item = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !Item )
            break;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                v5,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !Item )
            break;
          EventNoticeControl__UpdateEventNotice((EventNoticeControl_o *)Item, method);
          Item = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !Item )
            break;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                v5,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !Item )
            break;
          EventNoticeControl__ChangeEventInfo((EventNoticeControl_o *)Item, method);
        }
        if ( size == ++v5 )
          return;
      }
      sub_2213CDC(Item, method);
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

  if ( (byte_5974B6E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B6E = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v8 = this->fields.menuListScrollView;
    if ( !v8 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v8->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
      sub_2213CDC(v6, v7);
    }
  }
}


void MenuListControl__Update(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  __int64 v5; // x1
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x21
  il2cpp_array_size_t max_length; // x8
  int64_t v8; // x19
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_5974B62 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B62 = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  Time = NetworkManager__getTime(0);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_17:
    sub_2213CDC(Time, v5);
  max_length = restTimeNoticeList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = Time;
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_2213CE4(Time);
      v10 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v9];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      Time = UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( (Time & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_17;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v10, v8, v11);
      }
      LODWORD(max_length) = restTimeNoticeList->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)max_length );
  }
}


void MenuListControl__UpdateAnim(MenuListControl_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  AlphaTransitionCalculator_o *AlphaCalculator; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  float realtimeSinceStartup; // s8
  float alphaAnimTimeOld; // s9
  MenuListControl_c *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_5974B69 & 1) == 0 )
  {
    sub_2213A60(&MenuListControl_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    sub_2213A60(&Method_TransitionCalculator_float__get_Current__);
    byte_5974B69 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = MenuListControl__CreateAlphaCalculator(0, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fadeUIAlphaCalculator,
      (int32_t)AlphaCalculator,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
    (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v15 = MenuListControl_TypeInfo;
    if ( !*(&MenuListControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo, v12);
      v15 = MenuListControl_TypeInfo;
    }
    if ( (float)(realtimeSinceStartup - alphaAnimTimeOld) >= v15->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    MenuListControl__SetEventNotice(this, v16);
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_19:
    sub_2213CDC(fadeUIAlphaCalculator, v12);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v12);
}


void MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5974B6D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
    byte_5974B6D = 1;
  }
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  memset(&v5, 0, sizeof(v5));
  if ( !noticeList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    noticeList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_2213CDC(0, v4);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x8
  int size; // w21
  int32_t i; // w20
  System_Collections_Generic_List_object__o *Item; // x0

  if ( (byte_5974B6C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    byte_5974B6C = 1;
  }
  noticeList = this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
        if ( !Item
          || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    Item,
                                                                    i,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__)) == 0 )
        {
          sub_2213CDC(Item, method);
        }
        EventNoticeControl__SetAlpha((EventNoticeControl_o *)Item, this->fields.alphaAnimNow, method);
      }
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_object__o *v13; // x22
  int max_length; // w8
  __int64 v15; // x23
  EventEntity_o *v16; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  MenuListControl_o *v26; // x1
  Il2CppClass **v27; // x0
  __int64 v28; // x24
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t current; // w1
  __int64 v38; // x0
  __int64 v39; // x1
  unsigned int v40; // w8
  int32_t v41; // w23
  System_Func_object__bool__o *v42; // x25
  Il2CppObject *v43; // x0
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  EventInfoData_o *v46; // x22
  System_Collections_Generic_List_object__o *noticeList; // x0
  Il2CppObject *Item; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  __int64 v51; // x1
  System_Collections_Generic_List_object__o *v52; // x0
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v56; // x1
  __int64 v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Collections_Generic_List_object__o *v64; // x0
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x8
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_5974B65 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&System_Func_EventEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__);
    this = (MenuListControl_o *)sub_2213A60(&MenuListControl___c__DisplayClass20_0_TypeInfo);
    byte_5974B65 = 1;
  }
  combineData = v2->fields.combineData;
  memset(&v70, 0, sizeof(v70));
  if ( !combineData )
    goto LABEL_36;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v2->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v5;
    p_combineEventList = (System_Collections_Generic_List_object__o **)&v2->fields.combineEventList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.combineEventList,
      (int32_t)v5,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_2213CE4(this);
        v16 = combineEventList->m_Items[v15];
        if ( !v16 )
          break;
        this = (MenuListControl_o *)v2->fields.combineData;
        if ( !this )
          break;
        this = (MenuListControl_o *)CombineInitData__getCombineEventData((CombineInitData_o *)this, v16->fields.id, 0);
        if ( this )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v24 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          v26 = this;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)this,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v26;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v26, v17, v18, v19, v20, v21, v22);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_17;
      }
LABEL_36:
      sub_2213CDC(this, method);
    }
LABEL_17:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v13,
                                  0);
    if ( !this )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v69,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v70 = v69;
    v69.fields._list = 0;
    *(_QWORD *)&v69.fields._index = &v70;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v70,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v28 = sub_2213CCC(MenuListControl___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0);
      if ( !v28 )
        sub_2213CDC(v29, v30);
      current = (int32_t)v70.fields._current;
      *(_QWORD *)(v28 + 16) = v70.fields._current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 16), current, v31, v32, v33, v34, v35, v36);
      if ( !*(_QWORD *)(v28 + 16) )
        sub_2213CDC(v38, v39);
      v40 = *(_DWORD *)(*(_QWORD *)(v28 + 16) + 20LL) - 1;
      if ( v40 < 0x21 && ((0x1840782BBuLL >> v40) & 1) != 0 )
      {
        v41 = dword_EDA8A4[v40];
        v42 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v42,
          (Il2CppObject *)v28,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          0);
        v43 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                (System_Func_TSource__bool__o *)v42,
                (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v46 = MenuListControl__setEventInfo(
                (MenuListControl_o *)v43,
                *(EventCampaignEntity_o **)(v28 + 16),
                (EventEntity_o *)v43,
                v44);
        noticeList = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !noticeList )
          sub_2213CDC(0, v45);
        Item = System_Collections_Generic_List_object___get_Item(
                 noticeList,
                 v41,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !Item )
          sub_2213CDC(0, v49);
        EventNoticeControl__SetCombineEventData((EventNoticeControl_o *)Item, v46, v50);
        v52 = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !v52 )
          sub_2213CDC(0, v51);
        v53 = System_Collections_Generic_List_object___get_Item(
                v52,
                v41,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !v53 )
          sub_2213CDC(0, v54);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53, 0);
        if ( !gameObject )
          sub_2213CDC(0, v56);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        v64 = *p_combineEventList;
        if ( !*p_combineEventList
          || (v65 = v64->fields._items,
              v66 = Method_System_Collections_Generic_List_EventInfoData__Add__,
              ++v64->fields._version,
              !v65) )
        {
          sub_2213CDC(v64, v57);
        }
        v67 = v64->fields._size;
        if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v64,
            (Il2CppObject *)v46,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &v65->obj.klass + v67;
          v64->fields._size = v67 + 1;
          v68[4] = (Il2CppClass *)v46;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 4), (int32_t)v46, v58, v59, v60, v61, v62, v63);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v70,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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

  if ( (byte_5974B61 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B61 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.menuListScrollView;
    if ( !v6 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v6->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
      sub_2213CDC(v4, v5);
    }
  }
  return 0.0;
}


void MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, const MethodInfo *, double, double))menuListScrollView->klass->vtable._9_SetDragAmount.methodPtr)(
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

  if ( (byte_5974B67 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_5974B67 = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, targetSprite);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0)) == 0 )
  {
    sub_2213CDC(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *setNoticeNumList; // x0

  if ( (byte_5974B68 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
    byte_5974B68 = 1;
  }
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    1,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.limitUpEnableNum, 0);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    5,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.npUpEnableNum,
          0),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          11,
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.lvExceedEnableNum,
          0),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          12,
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0 )
  {
LABEL_17:
    sub_2213CDC(setNoticeNumList, enableData);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Int32_array *targetIds; // x1
  System_String_o *EventName; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_String_o *detail; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  float value; // s0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_5974B66 & 1) == 0 )
  {
    sub_2213A60(&EventInfoData_TypeInfo);
    byte_5974B66 = 1;
  }
  v6 = sub_2213CCC(EventInfoData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_2213CDC(v7, v8);
  targetIds = combineEventEnt->fields.targetIds;
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)targetIds, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = EventEntity__getEventName(eventEnt, 0);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)EventName, v17, v18, v19, v20, v21, v22);
  detail = eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 48), (int32_t)detail, v24, v25, v26, v27, v28, v29);
  value = (float)combineEventEnt->fields.value;
  *(_QWORD *)(v6 + 80) = eventEnt;
  *(_OWORD *)(v6 + 64) = *(_OWORD *)&eventEnt->fields.startedAt;
  *(float *)(v6 + 56) = value / 1000.0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 80), (int32_t)eventEnt, v31, v32, v33, v34, v35, v36);
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
    sub_2213CDC(this, entity);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}