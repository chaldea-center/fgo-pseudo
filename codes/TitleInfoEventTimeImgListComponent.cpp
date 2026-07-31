void TitleInfoEventTimeImgListComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5936F9C & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventTimeImgListComponent_TypeInfo);
    byte_5936F9C = 1;
  }
  LODWORD(TitleInfoEventTimeImgListComponent_TypeInfo->static_fields->TIME_STATUS_ICON_MOVE_TIME) = (struct TitleInfoEventTimeImgListComponent_StaticFields)1056964608;
}


void TitleInfoEventTimeImgListComponent___ctor(TitleInfoEventTimeImgListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventTimeImgListComponent__AddTimeAnime(
        TitleInfoEventTimeImgListComponent_o *this,
        System_Action_o *changeDayCallback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_Component_o *grid; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t timeStep; // w8
  struct TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x12
  int32_t v22; // w8
  il2cpp_array_size_t max_length; // x9
  __int64 v24; // x10
  _BOOL4 v25; // w13
  int32_t *m_Items; // x12
  int32_t v27; // w14
  _BOOL4 v28; // w14
  bool v29; // zf
  __int64 v30; // x2
  UnityEngine_GameObject_o *v31; // x21
  struct UIGrid_o *v32; // x8
  TweenPosition_o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  EventDelegate_Callback_o *v40; // x21
  UnityEngine_Vector3_o v41; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5936F9A & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&TitleInfoEventTimeImgListComponent_TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventTimeImgListComponent___c__DisplayClass18_0__AddTimeAnime_b__0__);
    sub_21FFC50(&TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_TypeInfo);
    byte_5936F9A = 1;
  }
  v5 = sub_21FFEBC(TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = changeDayCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)changeDayCallback, v14, v15, v16, v17, v18, v19);
  timeStep = this->fields.timeStep;
  if ( timeStep < this->fields.maxTimeStep )
  {
    stateList = this->fields.stateList;
    v22 = timeStep + 1;
    this->fields.timeStep = v22;
    if ( !stateList || (max_length = stateList->max_length, (int)max_length < 1) )
    {
      LODWORD(max_length) = 0;
      goto LABEL_16;
    }
    v24 = 0;
    v25 = 0;
    m_Items = stateList->m_Items;
    while ( 1 )
    {
      v27 = m_Items[v24];
      if ( v27 == 2 )
      {
        v28 = 1;
      }
      else
      {
        v29 = v27 == 3;
        v28 = v27 == 3;
        if ( !v29 && v25 )
        {
          LODWORD(max_length) = v24;
LABEL_16:
          if ( v22 == (_DWORD)max_length )
            ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
          grid = (UnityEngine_Component_o *)this->fields.grid;
          if ( grid )
          {
            grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0);
            v31 = (UnityEngine_GameObject_o *)grid;
            if ( !*(&TitleInfoEventTimeImgListComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TitleInfoEventTimeImgListComponent_TypeInfo, v7, v30);
            v32 = this->fields.grid;
            if ( v32 )
            {
              v41.fields.z = 0.0;
              v41.fields.y = v32->fields.cellHeight * (float)this->fields.timeStep;
              v41.fields.x = 0.0;
              v33 = TweenPosition__Begin(
                      v31,
                      TitleInfoEventTimeImgListComponent_TypeInfo->static_fields->TIME_STATUS_ICON_MOVE_TIME,
                      v41,
                      0);
              grid = (UnityEngine_Component_o *)UnityEngine_AnimationCurve__EaseInOut(0.0, 0.0, 1.0, 1.0, 0);
              if ( v33 )
              {
                v33->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)grid;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v33->fields.animationCurve,
                  (int32_t)grid,
                  v34,
                  v35,
                  v36,
                  v37,
                  v38,
                  v39);
                v33->fields.ignoreTimeScale = 0;
                v40 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
                EventDelegate_Callback___ctor(
                  v40,
                  (Il2CppObject *)v5,
                  Method_TitleInfoEventTimeImgListComponent___c__DisplayClass18_0__AddTimeAnime_b__0__,
                  0);
                UITweener__SetOnFinished((UITweener_o *)v33, v40, 0);
                return;
              }
            }
          }
LABEL_25:
          sub_21FFECC(grid, v7);
        }
      }
      ++v24;
      v25 = v28;
      if ( (unsigned int)max_length == v24 )
        goto LABEL_16;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventTimeImgListComponent__CreateIcon(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t state,
        float y,
        const MethodInfo *method)
{
  Il2CppObject *iconPrefab; // x21
  Il2CppObject *v8; // x0
  UnityEngine_Component_o *grid; // x1
  UnityEngine_GameObject_o *v10; // x20
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5936F99 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936F99 = 1;
  }
  iconPrefab = (Il2CppObject *)this->fields.iconPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state, method);
  v8 = UnityEngine_Object__Instantiate_object_(
         iconPrefab,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  v10 = (UnityEngine_GameObject_o *)v8;
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v8, grid, 0);
  GameObjectExtensions__SetLocalPositionY(v10, y, 0);
  if ( !v10
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v10,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___)) == 0 )
  {
    sub_21FFECC(Component_object, v12);
  }
  TitleInfoEventTimeImgListViewObject__Init((TitleInfoEventTimeImgListViewObject_o *)Component_object, state, v13);
}


void TitleInfoEventTimeImgListComponent__CreateIconList(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x8
  unsigned __int64 v5; // x20
  unsigned __int64 max_length_low; // x9
  struct UIGrid_o *grid; // x9

  stateList = this->fields.stateList;
  if ( !stateList )
LABEL_7:
    sub_21FFECC(this, method);
  v5 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(stateList->max_length);
    if ( (__int64)v5 >= (int)max_length_low )
      break;
    if ( v5 >= max_length_low )
      sub_21FFED4(this);
    grid = this->fields.grid;
    if ( grid )
    {
      TitleInfoEventTimeImgListComponent__CreateIcon(
        this,
        stateList->m_Items[v5],
        grid->fields.cellHeight * (float)(int)v5,
        v2);
      stateList = this->fields.stateList;
      ++v5;
      if ( stateList )
        continue;
    }
    goto LABEL_7;
  }
}


int32_t TitleInfoEventTimeImgListComponent__GetChangeDayStep(
        TitleInfoEventTimeImgListComponent_o *this,
        TitleInfoEventTimeImgListComponent_TimeState_array *list,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x0
  __int64 v4; // x8
  _BOOL4 v5; // w11
  int32_t v6; // w12
  _BOOL4 v7; // w12
  bool v8; // zf

  if ( list )
  {
    max_length = list->max_length;
    if ( (int)max_length >= 1 )
    {
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = list->m_Items[v4];
        if ( v6 == 2 )
        {
          v7 = 1;
        }
        else
        {
          v8 = v6 == 3;
          v7 = v6 == 3;
          if ( !v8 && v5 )
          {
            LODWORD(max_length) = v4;
            return max_length;
          }
        }
        ++v4;
        v5 = v7;
        if ( (unsigned int)list->max_length == v4 )
          return max_length;
      }
    }
  }
  LODWORD(max_length) = 0;
  return max_length;
}


TitleInfoEventTimeImgListComponent_TimeState_array *TitleInfoEventTimeImgListComponent__GetStateList(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t start,
        const MethodInfo *method)
{
  intptr_t *v4; // x19
  System_Array_o *v5; // x0
  System_RuntimeFieldHandle_o v6; // x1
  TitleInfoEventTimeImgListComponent_TimeState_array *v7; // x19

  if ( (byte_5936F9B & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventTimeImgListComponent_TimeState___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__05DC715F8E536C7C410383B0D77EB649831DF1DFAD839486E54FFC948EA3E3B2);
    sub_21FFC50(&Field__PrivateImplementationDetails__08B06BA91C8EC8563FBA7CD4038FA9699D8AD7B3FD34E52E42FDBCBBDA783FFD);
    sub_21FFC50(&Field__PrivateImplementationDetails__7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D);
    sub_21FFC50(&Field__PrivateImplementationDetails__F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE);
    byte_5936F9B = 1;
  }
  if ( (unsigned int)start > 3 )
    return 0;
  v4 = (intptr_t *)*(&off_52966B0 + (unsigned int)start);
  v5 = (System_Array_o *)sub_21FFD10(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4);
  v6.fields.value = *v4;
  v7 = (TitleInfoEventTimeImgListComponent_TimeState_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v5, v6, 0);
  return v7;
}


int32_t TitleInfoEventTimeImgListComponent__GetStepCount(
        TitleInfoEventTimeImgListComponent_o *this,
        TitleInfoEventTimeImgListComponent_TimeState_array *list,
        int32_t end,
        const MethodInfo *method)
{
  int max_length; // w8
  __int64 v5; // x0
  int v6; // w9

  if ( !list )
    sub_21FFECC(this, 0);
  max_length = list->max_length;
  v5 = max_length & (unsigned int)~(max_length >> 31);
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_21FFED4(v5);
      if ( list->m_Items[v6] == end )
        break;
      if ( (_DWORD)v5 == ++v6 )
        return v5;
    }
    LODWORD(v5) = v6;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventTimeImgListComponent__Init(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  struct TitleInfoEventTimeImgListComponent_TimeState_array *StateList; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1

  this->fields.startState = start;
  this->fields.endState = end;
  StateList = TitleInfoEventTimeImgListComponent__GetStateList(this, start, *(const MethodInfo **)&end);
  this->fields.stateList = StateList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.stateList, (int32_t)StateList, v6, v7, v8, v9, v10, v11);
  TitleInfoEventTimeImgListComponent__CreateIconList(this, v12);
}


void TitleInfoEventTimeImgListComponent__SetupTimeAnime(
        TitleInfoEventTimeImgListComponent_o *this,
        System_Action_o *changeDayCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x1
  int32_t endState; // w2
  int32_t StepCount; // w0
  const MethodInfo *v9; // x2

  stateList = this->fields.stateList;
  endState = this->fields.endState;
  this->fields.timeStep = 0;
  StepCount = TitleInfoEventTimeImgListComponent__GetStepCount(this, stateList, endState, v3);
  this->fields.maxTimeStep = StepCount;
  if ( StepCount )
    TitleInfoEventTimeImgListComponent__AddTimeAnime(this, changeDayCallback, v9);
  else
    ActionExtensions__Call(changeDayCallback, 0);
}


int32_t TitleInfoEventTimeImgListComponent__get_EndState(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.endState;
}


int32_t TitleInfoEventTimeImgListComponent__get_StartState(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.startState;
}


void TitleInfoEventTimeImgListComponent___c__DisplayClass18_0___ctor(
        TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTimeImgListComponent___c__DisplayClass18_0___AddTimeAnime_b__0(
        TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  TitleInfoEventTimeImgListComponent__AddTimeAnime(this->fields.__4__this, this->fields.changeDayCallback, v2);
}