void __fastcall MenuListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F7B9D & 1) == 0 )
  {
    sub_B16FFC(&MenuListControl_TypeInfo, v1);
    byte_40F7B9D = 1;
  }
  MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM = 7;
  MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MenuListControl___ctor(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  intptr_t v18; // w20
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  __int64 v21; // x2
  struct RestTimeNoticeControl_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_RuntimeTypeHandle_o v29; // 0:w0.4

  if ( (byte_40F7B9C & 1) == 0 )
  {
    sub_B16FFC(&MenuListControl_CombineKind_var, method);
    sub_B16FFC(&System_Enum_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo, v8);
    sub_B16FFC(&RestTimeNoticeControl___TypeInfo, v9);
    sub_B16FFC(&System_Type_TypeInfo, v10);
    byte_40F7B9C = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SetNoticeNumControl__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setNoticeNumList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (int)MenuListControl_CombineKind_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v29.fields.value = v18;
  TypeFromHandle = System_Type__GetTypeFromHandle(v29, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0LL);
  if ( !Names )
    sub_B170D4();
  v22 = (struct RestTimeNoticeControl_array *)sub_B17014(RestTimeNoticeControl___TypeInfo, Names->max_length, v21);
  this->fields.restTimeNoticeList = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.restTimeNoticeList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MenuListControl__CreateAlphaCalculator(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  MenuListControl_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  AlphaTransitionCalculator_o *v10; // x20

  if ( (byte_40F7B97 & 1) == 0 )
  {
    sub_B16FFC(&AlphaTransitionCalculator_TypeInfo, method);
    sub_B16FFC(&MenuListControl_TypeInfo, v2);
    byte_40F7B97 = 1;
  }
  v3 = MenuListControl_TypeInfo;
  if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v3 = MenuListControl_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
         0LL);
  v10 = (AlphaTransitionCalculator_o *)sub_B170CC(AlphaTransitionCalculator_TypeInfo, v6, v7, v8, v9);
  AlphaTransitionCalculator___ctor(v10, v4, v5, 0LL);
  return v10;
}


void __fastcall MenuListControl__InitMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *menuListGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_noticeList; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int v22; // w24
  int32_t v23; // w21
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Component_o *Child; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v31; // x22
  unsigned int v32; // w27
  Il2CppClass **v33; // x8
  EventNoticeControl_o *v34; // x23
  UnityEngine_GameObject_o *v35; // x0

  if ( (byte_40F7B90 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_EventNoticeControl__TypeInfo, v5);
    byte_40F7B90 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  menuListGrid = (UnityEngine_Component_o *)this->fields.menuListGrid;
  if ( !menuListGrid )
    goto LABEL_21;
  transform = UnityEngine_Component__get_transform(menuListGrid, 0LL);
  if ( !transform )
    goto LABEL_21;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventNoticeControl__TypeInfo,
                                                                                                  v10,
                                                                                                  v11,
                                                                                                  v12,
                                                                                                  v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v14;
  p_noticeList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.noticeList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.noticeList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = (UnityEngine_Component_o *)this->fields.menuListGrid;
      if ( !v24 )
        goto LABEL_21;
      v25 = UnityEngine_Component__get_transform(v24, 0LL);
      if ( !v25 )
        goto LABEL_21;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v25, v23, 0LL);
      if ( !Child )
        goto LABEL_21;
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                  Child,
                                                                  1,
                                                                  (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        goto LABEL_21;
      max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
      v31 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      if ( max_length >= 1 )
        break;
LABEL_19:
      if ( ++v23 >= v22 )
        return;
    }
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
      {
        sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v28, v29);
        sub_B170A0();
      }
      v33 = &v31->obj.klass + (int)v32;
      v34 = (EventNoticeControl_o *)v33[4];
      if ( !v34 )
        break;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33[4], 0LL);
      if ( !v35 )
        break;
      UnityEngine_GameObject__SetActive(v35, 0, 0LL);
      EventNoticeControl__Initialize(v34, 0LL);
      if ( !*p_noticeList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_noticeList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventNoticeControl__Add__);
      max_length = v31->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_B170D4();
  }
}


void __fastcall MenuListControl__ResetAlphaAnimTime(MenuListControl_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0

  this->fields.alphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  this->fields.alphaAnimTimeOld = realtimeSinceStartup;
  if ( fadeUIAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0LL);
}


void __fastcall MenuListControl__SetBudgeNumNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *menuListGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int v9; // w8
  unsigned __int64 v10; // x20
  signed __int64 v11; // x22
  __int64 i; // x23
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Component_o *Child; // x0
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Object_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x28

  if ( (byte_40F7B91 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7B91 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  menuListGrid = (UnityEngine_Component_o *)this->fields.menuListGrid;
  if ( !menuListGrid )
    goto LABEL_26;
  transform = UnityEngine_Component__get_transform(menuListGrid, 0LL);
  if ( !transform )
    goto LABEL_26;
  v9 = UnityEngine_Transform__get_childCount(transform, 0LL) - 1;
  if ( v9 >= 1 )
  {
    v10 = 0LL;
    v11 = v9;
    for ( i = 32LL; ; i += 8LL )
    {
      v13 = (UnityEngine_Component_o *)this->fields.menuListGrid;
      if ( !v13 )
        break;
      v14 = UnityEngine_Component__get_transform(v13, 0LL);
      if ( !v14 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v14, v10, 0LL);
      if ( !Child )
        break;
      ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                       Child,
                                       (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      if ( !this->fields.setNoticeNumList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.setNoticeNumList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)ComponentInChildren_UIWidget,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SetNoticeNumControl__Add__);
      v17 = (UnityEngine_Component_o *)this->fields.menuListGrid;
      if ( !v17 )
        break;
      v18 = UnityEngine_Component__get_transform(v17, 0LL);
      if ( !v18 )
        break;
      v19 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v18, v10, 0LL);
      if ( !v19 )
        break;
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      v19,
                                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v21 = UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
      if ( (v21 & 1) != 0 )
      {
        restTimeNoticeList = this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( v20 )
        {
          v21 = sub_B170BC(v20, restTimeNoticeList->obj.klass->_1.element_class);
          if ( !v21 )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( v10 >= restTimeNoticeList->max_length )
        {
          sub_B17100(v21, v22, v23);
          sub_B170A0();
        }
        restTimeNoticeList->m_Items[v10] = (RestTimeNoticeControl_o *)v20;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)restTimeNoticeList + i),
          (System_Int32_array **)v20,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      if ( (__int64)++v10 >= v11 )
        return;
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x23
  int size; // w20
  int v6; // w21
  unsigned int v7; // w22
  UnityEngine_Behaviour_o *v8; // x0
  struct System_Collections_Generic_List_EventNoticeControl__o *v9; // x24
  EventNoticeControl_o *v10; // x0
  struct System_Collections_Generic_List_EventNoticeControl__o *v11; // x24
  EventNoticeControl_o *v12; // x0

  if ( (byte_40F7B98 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_40F7B98 = 1;
  }
  noticeList = this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v6 = 1;
      do
      {
        v7 = v6 - 1;
        if ( noticeList->fields._size <= (unsigned int)(v6 - 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v8 = (UnityEngine_Behaviour_o *)noticeList->fields._items->m_Items[v7];
        if ( !v8 )
          break;
        if ( UnityEngine_Behaviour__get_isActiveAndEnabled(v8, 0LL) )
        {
          v9 = this->fields.noticeList;
          if ( !v9 )
            break;
          if ( v9->fields._size <= v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v10 = v9->fields._items->m_Items[v7];
          if ( !v10 )
            break;
          EventNoticeControl__UpdateEventNotice(v10, 0LL);
          v11 = this->fields.noticeList;
          if ( !v11 )
            break;
          if ( v11->fields._size <= v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v12 = v11->fields._items->m_Items[v7];
          if ( !v12 )
            break;
          EventNoticeControl__ChangeEventInfo(v12, 0LL);
        }
        if ( v6 >= size )
          return;
        noticeList = this->fields.noticeList;
        ++v6;
      }
      while ( noticeList );
      sub_B170D4();
    }
  }
}


void __fastcall MenuListControl__SetMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MenuListControl__checkEventNotice(this, method);
  MenuListControl__SetEventNotice(this, v3);
}


void __fastcall MenuListControl__SetScrollBarValue(MenuListControl_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *menuListScrollView; // x20
  struct UIScrollView_o *v6; // x8
  UnityEngine_Object_o *v7; // x20
  struct UIScrollView_o *v8; // x8
  UIProgressBar_o *v9; // x0

  if ( (byte_40F7B9B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7B9B = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL) )
  {
    v6 = this->fields.menuListScrollView;
    if ( !v6 )
      goto LABEL_16;
    v7 = *(UnityEngine_Object_o **)&v6->fields.showScrollBars;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    {
      v8 = this->fields.menuListScrollView;
      if ( v8 )
      {
        v9 = *(UIProgressBar_o **)&v8->fields.showScrollBars;
        if ( v9 )
        {
          UIProgressBar__set_value(v9, value, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B170D4();
    }
  }
}


void __fastcall MenuListControl__Update(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x21
  __int64 v8; // x8
  int64_t v9; // x19
  unsigned __int64 v10; // x22
  UnityEngine_Object_o *v11; // x20

  if ( (byte_40F7B8F & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7B8F = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_19:
    sub_B170D4();
  v8 = *(_QWORD *)&restTimeNoticeList->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = Time;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v8 )
      {
        sub_B17100(Time, v5, v6);
        sub_B170A0();
      }
      v11 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v10];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Time = UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
      if ( (Time & 1) == 0 )
      {
        if ( !v11 )
          goto LABEL_19;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v11, v9, 0LL);
      }
      LODWORD(v8) = restTimeNoticeList->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
  }
}


void __fastcall MenuListControl__UpdateAnim(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  System_Int32_array **AlphaCalculator; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v16; // s8
  MenuListControl_c *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_40F7B96 & 1) == 0 )
  {
    sub_B16FFC(&MenuListControl_TypeInfo, method);
    sub_B16FFC(&Method_TransitionCalculator_float__Update__, v3);
    sub_B16FFC(&Method_TransitionCalculator_float__get_Current__, v4);
    byte_40F7B96 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = (System_Int32_array **)MenuListControl__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)AlphaCalculator;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fadeUIAlphaCalculator,
      AlphaCalculator,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_20;
    AlphaTransitionCalculator__MakeFadeInFinished(*p_fadeUIAlphaCalculator, 0LL);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_20;
  }
  TransitionCalculator_float___Update(
    (TransitionCalculator_float__o *)fadeUIAlphaCalculator,
    (const MethodInfo_2532FA0 *)Method_TransitionCalculator_float__Update__);
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_20;
  if ( AlphaTransitionCalculator__IsFadeInFinished(*p_fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v16 = realtimeSinceStartup;
    v17 = MenuListControl_TypeInfo;
    if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
      v17 = MenuListControl_TypeInfo;
    }
    if ( (float)(v16 - alphaAnimTimeOld) >= v17->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      if ( !*p_fadeUIAlphaCalculator )
        goto LABEL_20;
      AlphaTransitionCalculator__StartFadeOut(*p_fadeUIAlphaCalculator, 0LL);
    }
  }
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_20;
  if ( AlphaTransitionCalculator__IsFadeOutFinished(*p_fadeUIAlphaCalculator, 0LL) )
  {
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_20;
    AlphaTransitionCalculator__StartFadeIn(*p_fadeUIAlphaCalculator, 0LL);
    this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    MenuListControl__SetEventNotice(this, v19);
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_20:
    sub_B170D4();
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v18);
}


void __fastcall MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7B9A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__, v5);
    byte_40F7B9A = 1;
  }
  memset(&v7, 0, sizeof(v7));
  noticeList = this->fields.noticeList;
  if ( !noticeList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)noticeList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v7.fields.current )
      sub_B170D4();
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v7.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void __fastcall MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x22
  int size; // w20
  unsigned int v6; // w21
  EventNoticeControl_o *v7; // x0

  if ( (byte_40F7B99 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_40F7B99 = 1;
  }
  noticeList = this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v6 = 0;
      do
      {
        if ( noticeList->fields._size <= v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v7 = noticeList->fields._items->m_Items[v6];
        if ( !v7 )
          break;
        EventNoticeControl__SetAlpha(v7, this->fields.alphaAnimNow, 0LL);
        if ( (int)++v6 >= size )
          return;
        noticeList = this->fields.noticeList;
      }
      while ( noticeList );
      sub_B170D4();
    }
  }
  else
  {
    MenuListControl__InitMenuEventNotice(this, method);
  }
}


void __fastcall MenuListControl__checkEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_combineEventList; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x22
  EventCampaignEntity_o *CombineEventData; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  int max_length; // w8
  __int64 v40; // x23
  EventEntity_o *v41; // x8
  CombineInitData_o *v42; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **current; // x1
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  int v60; // w28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v61; // x24
  MenuListControl_o *v62; // x0
  const MethodInfo *v63; // x3
  EventInfoData_o *v64; // x0
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x24
  __int64 v66; // x23
  EventInfoData_o *v67; // x22
  EventNoticeControl_o *v68; // x0
  struct System_Collections_Generic_List_EventNoticeControl__o *v69; // x24
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F7B92 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v8);
    sub_B16FFC(&Method_System_Func_EventEntity__bool___ctor__, v9);
    sub_B16FFC(&System_Func_EventEntity__bool__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoData__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v18);
    sub_B16FFC(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__, v19);
    sub_B16FFC(&MenuListControl___c__DisplayClass20_0_TypeInfo, v20);
    byte_40F7B92 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  combineData = this->fields.combineData;
  if ( !combineData )
    goto LABEL_34;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventInfoData__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    this->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v23;
    p_combineEventList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.combineEventList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.combineEventList,
      (System_Int32_array **)v23,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                    v31,
                                                                                                    v32,
                                                                                                    v33,
                                                                                                    v34);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v35,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v40 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v40 >= max_length )
        {
          sub_B17100(CombineEventData, v37, v38);
          sub_B170A0();
        }
        v41 = combineEventList->m_Items[v40];
        if ( !v41 )
          break;
        v42 = this->fields.combineData;
        if ( !v42 )
          break;
        CombineEventData = CombineInitData__getCombineEventData(v42, v41->fields.id, 0LL);
        if ( CombineEventData )
        {
          if ( !v35 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v35,
            (EventMissionProgressRequest_Argument_ProgressData_o *)CombineEventData,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        }
        max_length = combineEventList->max_length;
        if ( (int)++v40 >= max_length )
          goto LABEL_14;
      }
LABEL_34:
      sub_B170D4();
    }
LABEL_14:
    v43 = EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v35, 0LL);
    if ( !v43 )
      goto LABEL_34;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v72,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v43,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v73 = v72;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v73,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v48 = sub_B170CC(MenuListControl___c__DisplayClass20_0_TypeInfo, v44, v45, v46, v47);
      MenuListControl___c__DisplayClass20_0___ctor((MenuListControl___c__DisplayClass20_0_o *)v48, 0LL);
      if ( !v48 )
        sub_B170D4();
      current = (System_Int32_array **)v73.fields.current;
      *(_QWORD *)(v48 + 16) = v73.fields.current;
      sub_B16F98((BattleServantConfConponent_o *)(v48 + 16), current, v49, v50, v51, v52, v53, v54);
      if ( !*(_QWORD *)(v48 + 16) )
        sub_B170D4();
      v60 = *(_DWORD *)(*(_QWORD *)(v48 + 16) + 20LL) - 1;
      if ( (unsigned int)v60 < 0x21 && ((0x1840782BBuLL >> v60) & 1) != 0 )
      {
        v61 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_EventEntity__bool__TypeInfo,
                                                                                   v56,
                                                                                   v57,
                                                                                   v58,
                                                                                   v59);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v61,
          (Il2CppObject *)v48,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_EventEntity__bool___ctor__);
        v62 = (MenuListControl_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                                     (System_Func_TSource__bool__o *)v61,
                                     (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v64 = MenuListControl__setEventInfo(v62, *(EventCampaignEntity_o **)(v48 + 16), (EventEntity_o *)v62, v63);
        noticeList = this->fields.noticeList;
        if ( !noticeList )
          sub_B170D4();
        v66 = dword_3133780[v60];
        v67 = v64;
        if ( noticeList->fields._size <= (unsigned int)v66 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v68 = noticeList->fields._items->m_Items[v66];
        if ( !v68 )
          sub_B170D4();
        EventNoticeControl__SetCombineEventData(v68, v67, 0LL);
        v69 = this->fields.noticeList;
        if ( !v69 )
          sub_B170D4();
        if ( v69->fields._size <= (unsigned int)v66 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v70 = (UnityEngine_Component_o *)v69->fields._items->m_Items[v66];
        if ( !v70 )
          sub_B170D4();
        gameObject = UnityEngine_Component__get_gameObject(v70, 0LL);
        if ( !gameObject )
          sub_B170D4();
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_combineEventList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_combineEventList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoData__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v73,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
}


System_Collections_Generic_List_EventInfoData__o *__fastcall MenuListControl__getCombineEventList(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEventList;
}


float __fastcall MenuListControl__get_AlphaAnimNow(MenuListControl_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


float __fastcall MenuListControl__get_ScrollBarValue(MenuListControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *menuListScrollView; // x20
  struct UIScrollView_o *v4; // x8
  UnityEngine_Object_o *v5; // x20
  struct UIScrollView_o *v6; // x8
  UIProgressBar_o *v7; // x0

  if ( (byte_40F7B8E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7B8E = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL) )
  {
    v4 = this->fields.menuListScrollView;
    if ( !v4 )
      goto LABEL_16;
    v5 = *(UnityEngine_Object_o **)&v4->fields.showScrollBars;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
    {
      v6 = this->fields.menuListScrollView;
      if ( v6 )
      {
        v7 = *(UIProgressBar_o **)&v6->fields.showScrollBars;
        if ( v7 )
          return UIProgressBar__get_value(v7, 0LL);
      }
LABEL_16:
      sub_B170D4();
    }
  }
  return 0.0;
}


void __fastcall MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_B170D4();
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))menuListScrollView->klass->vtable._9_SetDragAmount.method)(
    menuListScrollView,
    0LL,
    menuListScrollView->klass->vtable._10_MoveRelative.methodPtr,
    0.0,
    0.0);
}


void __fastcall MenuListControl__setBannerIcon(
        MenuListControl_o *this,
        UISprite_o *targetSprite,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F7B94 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, targetSprite);
    byte_40F7B94 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0LL);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SetNoticeNumControl__o *setNoticeNumList; // x21
  SetNoticeNumControl_o *v6; // x0
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v7; // x21
  SetNoticeNumControl_o *v8; // x0
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v9; // x21
  SetNoticeNumControl_o *v10; // x0
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v11; // x21
  SetNoticeNumControl_o *v12; // x0
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v13; // x21
  SetNoticeNumControl_o *v14; // x0
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v15; // x20
  SetNoticeNumControl_o *v16; // x0

  if ( (byte_40F7B95 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__, enableData);
    byte_40F7B95 = 1;
  }
  setNoticeNumList = this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_29;
  if ( setNoticeNumList->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !enableData )
    goto LABEL_29;
  v6 = setNoticeNumList->fields._items->m_Items[1];
  if ( !v6 )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum(v6, enableData->fields.skillUpEnableNum, 0LL);
  v7 = this->fields.setNoticeNumList;
  if ( !v7 )
    goto LABEL_29;
  if ( v7->fields._size <= 3u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v8 = v7->fields._items->m_Items[3];
  if ( !v8 )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum(v8, enableData->fields.limitUpEnableNum, 0LL);
  v9 = this->fields.setNoticeNumList;
  if ( !v9 )
    goto LABEL_29;
  if ( v9->fields._size <= 5u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v10 = v9->fields._items->m_Items[5];
  if ( !v10 )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum(v10, enableData->fields.friendshipExceedEnableNum, 0LL);
  v11 = this->fields.setNoticeNumList;
  if ( !v11 )
    goto LABEL_29;
  if ( v11->fields._size <= 9u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v12 = v11->fields._items->m_Items[9];
  if ( !v12 )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum(v12, enableData->fields.npUpEnableNum, 0LL);
  v13 = this->fields.setNoticeNumList;
  if ( !v13 )
    goto LABEL_29;
  if ( v13->fields._size <= 0xAu )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v14 = v13->fields._items->m_Items[10];
  if ( !v14 )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum(v14, enableData->fields.lvExceedEnableNum, 0LL);
  v15 = this->fields.setNoticeNumList;
  if ( !v15 )
    goto LABEL_29;
  if ( v15->fields._size <= 0xBu )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v16 = v15->fields._items->m_Items[11];
  if ( !v16 )
LABEL_29:
    sub_B170D4();
  SetNoticeNumControl__setNoticeNum(v16, enableData->fields.costumeCombineEnableNum, 0LL);
}


EventInfoData_o *__fastcall MenuListControl__setEventInfo(
        MenuListControl_o *this,
        EventCampaignEntity_o *combineEventEnt,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **targetIds; // x1
  System_Int32_array **EventName; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **detail; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40F7B93 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoData_TypeInfo, combineEventEnt);
    byte_40F7B93 = 1;
  }
  v7 = sub_B170CC(EventInfoData_TypeInfo, combineEventEnt, eventEnt, method, v4);
  EventInfoData___ctor((EventInfoData_o *)v7, 0LL);
  if ( !eventEnt || !v7 || (*(_DWORD *)(v7 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_B170D4();
  *(_DWORD *)(v7 + 20) = combineEventEnt->fields.target;
  targetIds = (System_Int32_array **)combineEventEnt->fields.targetIds;
  *(_QWORD *)(v7 + 32) = targetIds;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), targetIds, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 24) = eventEnt->fields.iconId;
  EventName = (System_Int32_array **)EventEntity__getEventName(eventEnt, 0LL);
  *(_QWORD *)(v7 + 40) = EventName;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), EventName, v16, v17, v18, v19, v20, v21);
  detail = (System_Int32_array **)eventEnt->fields.detail;
  *(_QWORD *)(v7 + 48) = detail;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 48), detail, v23, v24, v25, v26, v27, v28);
  *(float *)(v7 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_QWORD *)(v7 + 64) = eventEnt->fields.startedAt;
  *(_QWORD *)(v7 + 72) = eventEnt->fields.endedAt;
  *(_QWORD *)(v7 + 80) = eventEnt;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 80), (System_Int32_array **)eventEnt, v29, v30, v31, v32, v33, v34);
  return (EventInfoData_o *)v7;
}


void __fastcall MenuListControl___c__DisplayClass20_0___ctor(
        MenuListControl___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MenuListControl___c__DisplayClass20_0___checkEventNotice_b__0(
        MenuListControl___c__DisplayClass20_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEntity; // x8

  if ( !entity || (eventCampaignEntity = this->fields.eventCampaignEntity) == 0LL )
    sub_B170D4();
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}