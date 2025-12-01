void TitleInfoEventTimeImgListComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CC5D3D & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventTimeImgListComponent_TypeInfo);
    byte_4CC5D3D = 1;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  TitleInfoEventTimeImgListComponent_o *v20; // x0
  const MethodInfo *v21; // x2
  int32_t timeStep; // w8
  TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x1
  UnityEngine_GameObject_o *v24; // x21
  struct UIGrid_o *v25; // x8
  TweenPosition_o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  EventDelegate_Callback_o *v33; // x21
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4CC5D3B & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&TitleInfoEventTimeImgListComponent_TypeInfo);
    sub_1C713B0(&Method_TitleInfoEventTimeImgListComponent___c__DisplayClass18_0__AddTimeAnime_b__0__);
    sub_1C713B0(&TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_TypeInfo);
    byte_4CC5D3B = 1;
  }
  v5 = sub_1C715FC(TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = changeDayCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)changeDayCallback, v14, v15, v16, v17, v18, v19);
  timeStep = this->fields.timeStep;
  if ( timeStep < this->fields.maxTimeStep )
  {
    stateList = this->fields.stateList;
    this->fields.timeStep = timeStep + 1;
    if ( timeStep + 1 == TitleInfoEventTimeImgListComponent__GetChangeDayStep(v20, stateList, v21) )
      ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    grid = (UnityEngine_Component_o *)this->fields.grid;
    if ( grid )
    {
      grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0);
      v24 = (UnityEngine_GameObject_o *)grid;
      if ( !TitleInfoEventTimeImgListComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventTimeImgListComponent_TypeInfo);
      v25 = this->fields.grid;
      if ( v25 )
      {
        v34.fields.z = 0.0;
        v34.fields.y = v25->fields.cellHeight * (float)this->fields.timeStep;
        v34.fields.x = 0.0;
        v26 = TweenPosition__Begin(
                v24,
                TitleInfoEventTimeImgListComponent_TypeInfo->static_fields->TIME_STATUS_ICON_MOVE_TIME,
                v34,
                0);
        grid = (UnityEngine_Component_o *)UnityEngine_AnimationCurve__EaseInOut(0.0, 0.0, 1.0, 1.0, 0);
        if ( v26 )
        {
          v26->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)grid;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v26->fields.animationCurve,
            (int32_t)grid,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          v26->fields.ignoreTimeScale = 0;
          v33 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v33,
            (Il2CppObject *)v5,
            Method_TitleInfoEventTimeImgListComponent___c__DisplayClass18_0__AddTimeAnime_b__0__,
            0);
          UITweener__SetOnFinished((UITweener_o *)v26, v33, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_1C71608(grid, v7);
  }
}


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

  if ( (byte_4CC5D3A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5D3A = 1;
  }
  iconPrefab = (Il2CppObject *)this->fields.iconPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         iconPrefab,
         (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  v10 = (UnityEngine_GameObject_o *)v8;
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v8, grid, 0);
  GameObjectExtensions__SetLocalPositionY(v10, y, 0);
  if ( !v10
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v10,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___)) == 0 )
  {
    sub_1C71608(Component_object, v12);
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
    sub_1C71608(this, method);
  v5 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(stateList->max_length);
    if ( (__int64)v5 >= (int)max_length_low )
      break;
    if ( v5 >= max_length_low )
      sub_1C71610(this);
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
  unsigned __int64 max_length; // x8
  unsigned __int64 v4; // x0
  _BOOL4 v5; // w11
  int32_t v6; // w12
  _BOOL4 v7; // w12
  bool v8; // zf

  if ( list && (int)list->max_length >= 1 )
  {
    max_length = (unsigned int)list->max_length;
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1C71610(v4);
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
          return v4;
      }
      ++v4;
      v5 = v7;
      if ( (__int64)v4 >= (int)max_length )
        return v4;
    }
  }
  LODWORD(v4) = 0;
  return v4;
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

  if ( (byte_4CC5D3C & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventTimeImgListComponent_TimeState___TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__05DC715F8E536C7C410383B0D77EB649831DF1DFAD839486E54FFC948EA3E3B2);
    sub_1C713B0(&Field__PrivateImplementationDetails__08B06BA91C8EC8563FBA7CD4038FA9699D8AD7B3FD34E52E42FDBCBBDA783FFD);
    sub_1C713B0(&Field__PrivateImplementationDetails__7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D);
    sub_1C713B0(&Field__PrivateImplementationDetails__F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE);
    byte_4CC5D3C = 1;
  }
  if ( (unsigned int)start > 3 )
    return 0;
  v4 = (intptr_t *)*(&off_46E1130 + start);
  v5 = (System_Array_o *)sub_1C71458(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4);
  v6.fields.value = *v4;
  v7 = (TitleInfoEventTimeImgListComponent_TimeState_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v5, v6, 0);
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
    sub_1C71608(this, 0);
  max_length = list->max_length;
  v5 = max_length & (unsigned int)~(max_length >> 31);
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_1C71610(v5);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  this->fields.startState = start;
  this->fields.endState = end;
  StateList = TitleInfoEventTimeImgListComponent__GetStateList(this, start, *(const MethodInfo **)&end);
  this->fields.stateList = StateList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.stateList, (int32_t)StateList, v6, v7, v8, v9, v10, v11);
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
    sub_1C71608(this, method);
  TitleInfoEventTimeImgListComponent__AddTimeAnime(this->fields.__4__this, this->fields.changeDayCallback, v2);
}