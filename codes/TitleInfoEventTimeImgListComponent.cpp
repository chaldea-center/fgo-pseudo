void __fastcall TitleInfoEventTimeImgListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B14C86 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTimeImgListComponent_TypeInfo, v1, v2);
    byte_4B14C86 = 1;
  }
  LODWORD(TitleInfoEventTimeImgListComponent_TypeInfo->static_fields->TIME_STATUS_ICON_MOVE_TIME) = (struct TitleInfoEventTimeImgListComponent_StaticFields)1056964608;
}


void __fastcall TitleInfoEventTimeImgListComponent___ctor(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTimeImgListComponent__AddTimeAnime(
        TitleInfoEventTimeImgListComponent_o *this,
        System_Action_o *changeDayCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x19
  UnityEngine_Component_o *grid; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  TitleInfoEventTimeImgListComponent_o *v27; // x0
  const MethodInfo *v28; // x2
  int32_t timeStep; // w8
  TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x1
  UnityEngine_GameObject_o *v31; // x21
  struct UIGrid_o *v32; // x8
  TweenPosition_o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  EventDelegate_Callback_o *v43; // x21
  UnityEngine_Vector3_o v44; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B14C84 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, changeDayCallback, method);
    sub_1BCA7E0(&TitleInfoEventTimeImgListComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoEventTimeImgListComponent___c__DisplayClass18_0__AddTimeAnime_b__0__, v8, v9);
    sub_1BCA7E0(&TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_TypeInfo, v10, v11);
    byte_4B14C84 = 1;
  }
  v12 = sub_1BCAA2C(TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_TypeInfo, changeDayCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = changeDayCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)changeDayCallback, v21, v22, v23, v24, v25, v26);
  timeStep = this->fields.timeStep;
  if ( timeStep < this->fields.maxTimeStep )
  {
    stateList = this->fields.stateList;
    this->fields.timeStep = timeStep + 1;
    if ( timeStep + 1 == TitleInfoEventTimeImgListComponent__GetChangeDayStep(v27, stateList, v28) )
      ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    grid = (UnityEngine_Component_o *)this->fields.grid;
    if ( grid )
    {
      grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0LL);
      v31 = (UnityEngine_GameObject_o *)grid;
      if ( !TitleInfoEventTimeImgListComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventTimeImgListComponent_TypeInfo, v14);
      v32 = this->fields.grid;
      if ( v32 )
      {
        v44.fields.z = 0.0;
        v44.fields.y = v32->fields.cellHeight * (float)this->fields.timeStep;
        v44.fields.x = 0.0;
        v33 = TweenPosition__Begin(
                v31,
                TitleInfoEventTimeImgListComponent_TypeInfo->static_fields->TIME_STATUS_ICON_MOVE_TIME,
                v44,
                0LL);
        grid = (UnityEngine_Component_o *)UnityEngine_AnimationCurve__EaseInOut(0.0, 0.0, 1.0, 1.0, 0LL);
        if ( v33 )
        {
          v33->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)grid;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v33->fields.animationCurve,
            (int64_t)grid,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          v33->fields.ignoreTimeScale = 0;
          v43 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v40, v41, v42);
          EventDelegate_Callback___ctor(
            v43,
            (Il2CppObject *)v12,
            Method_TitleInfoEventTimeImgListComponent___c__DisplayClass18_0__AddTimeAnime_b__0__,
            0LL);
          UITweener__SetOnFinished((UITweener_o *)v33, v43, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(grid, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeImgListComponent__CreateIcon(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t state,
        float y,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *iconPrefab; // x21
  Il2CppObject *v12; // x0
  UnityEngine_Component_o *grid; // x1
  UnityEngine_GameObject_o *v14; // x20
  Il2CppObject *Component_object; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4B14C83 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___,
      *(_QWORD *)&state,
      method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B14C83 = 1;
  }
  iconPrefab = (Il2CppObject *)this->fields.iconPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
  v12 = UnityEngine_Object__Instantiate_object_(
          iconPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  v14 = (UnityEngine_GameObject_o *)v12;
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v12, grid, 0LL);
  GameObjectExtensions__SetLocalPositionY(v14, y, 0LL);
  if ( !v14
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v14,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___)) == 0LL )
  {
    sub_1BCAA3C(Component_object, v16);
  }
  TitleInfoEventTimeImgListViewObject__Init((TitleInfoEventTimeImgListViewObject_o *)Component_object, state, v17);
}


void __fastcall TitleInfoEventTimeImgListComponent__CreateIconList(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x8
  unsigned __int64 v5; // x20
  unsigned __int64 max_length; // x9
  struct UIGrid_o *grid; // x9

  stateList = this->fields.stateList;
  if ( !stateList )
LABEL_7:
    sub_1BCAA3C(this, method);
  v5 = 0LL;
  while ( 1 )
  {
    max_length = stateList->max_length;
    if ( (__int64)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
      sub_1BCAA44(this, method);
    grid = this->fields.grid;
    if ( grid )
    {
      TitleInfoEventTimeImgListComponent__CreateIcon(
        this,
        stateList->m_Items[v5 + 1],
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


int32_t __fastcall TitleInfoEventTimeImgListComponent__GetChangeDayStep(
        TitleInfoEventTimeImgListComponent_o *this,
        TitleInfoEventTimeImgListComponent_TimeState_array *list,
        const MethodInfo *method)
{
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x0
  _BOOL4 v5; // w11
  int32_t v6; // w12
  _BOOL4 v7; // w12
  bool v8; // zf

  if ( list && (int)*(_QWORD *)&list->max_length >= 1 )
  {
    v3 = (unsigned int)*(_QWORD *)&list->max_length;
    v4 = 0LL;
    v5 = 0;
    while ( 1 )
    {
      if ( v4 >= v3 )
        sub_1BCAA44(v4, list);
      v6 = list->m_Items[v4 + 1];
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
      if ( (__int64)v4 >= (int)v3 )
        return v4;
    }
  }
  LODWORD(v4) = 0;
  return v4;
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTimeImgListComponent_TimeState_array *__fastcall TitleInfoEventTimeImgListComponent__GetStateList(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t start,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 *v12; // x19
  System_Array_o *v13; // x0
  __int64 v14; // x1
  TitleInfoEventTimeImgListComponent_TimeState_array *v15; // x19

  if ( (byte_4B14C85 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, *(_QWORD *)&start, method);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__05DC715F8E536C7C410383B0D77EB649831DF1DFAD839486E54FFC948EA3E3B2,
      v4,
      v5);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__08B06BA91C8EC8563FBA7CD4038FA9699D8AD7B3FD34E52E42FDBCBBDA783FFD,
      v6,
      v7);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D,
      v8,
      v9);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE,
      v10,
      v11);
    byte_4B14C85 = 1;
  }
  if ( (unsigned int)start > 3 )
    return 0LL;
  v12 = (__int64 *)*(&off_455AEE8 + start);
  v13 = (System_Array_o *)sub_1BCA888(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4LL);
  v14 = *v12;
  v15 = (TitleInfoEventTimeImgListComponent_TimeState_array *)v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v13, (System_RuntimeFieldHandle_o)v14, 0LL);
  return v15;
}


int32_t __fastcall TitleInfoEventTimeImgListComponent__GetStepCount(
        TitleInfoEventTimeImgListComponent_o *this,
        TitleInfoEventTimeImgListComponent_TimeState_array *list,
        int32_t end,
        const MethodInfo *method)
{
  signed int max_length; // w8
  __int64 v5; // x0
  int v6; // w9

  if ( !list )
    sub_1BCAA3C(this, 0LL);
  max_length = list->max_length;
  v5 = max_length & (unsigned int)~(max_length >> 31);
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_1BCAA44(v5, list);
      if ( list->m_Items[v6 + 1] == end )
        break;
      if ( (_DWORD)v5 == ++v6 )
        return v5;
    }
    LODWORD(v5) = v6;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeImgListComponent__Init(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  struct TitleInfoEventTimeImgListComponent_TimeState_array *StateList; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x1

  this->fields.startState = start;
  this->fields.endState = end;
  StateList = TitleInfoEventTimeImgListComponent__GetStateList(this, start, *(const MethodInfo **)&end);
  this->fields.stateList = StateList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stateList, (int64_t)StateList, v6, v7, v8, v9, v10, v11);
  TitleInfoEventTimeImgListComponent__CreateIconList(this, v12);
}


void __fastcall TitleInfoEventTimeImgListComponent__SetupTimeAnime(
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
    ActionExtensions__Call(changeDayCallback, 0LL);
}


int32_t __fastcall TitleInfoEventTimeImgListComponent__get_EndState(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.endState;
}


int32_t __fastcall TitleInfoEventTimeImgListComponent__get_StartState(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.startState;
}


void __fastcall TitleInfoEventTimeImgListComponent___c__DisplayClass18_0___ctor(
        TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTimeImgListComponent___c__DisplayClass18_0___AddTimeAnime_b__0(
        TitleInfoEventTimeImgListComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  TitleInfoEventTimeImgListComponent__AddTimeAnime(this->fields.__4__this, this->fields.changeDayCallback, v2);
}