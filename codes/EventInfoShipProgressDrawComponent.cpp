void EventInfoShipProgressDrawComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5972634 & 1) == 0 )
  {
    sub_2213A60(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_2213A60(&StringLiteral_11229/*"ProgressShipData_"*/);
    byte_5972634 = 1;
  }
  v7 = StringLiteral_11229/*"ProgressShipData_"*/;
  EventInfoShipProgressDrawComponent_TypeInfo->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = (struct System_String_o *)StringLiteral_11229/*"ProgressShipData_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoShipProgressDrawComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventInfoShipProgressDrawComponent___ctor(EventInfoShipProgressDrawComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoShipProgressDrawComponent__Awake(EventInfoShipProgressDrawComponent_o *this, const MethodInfo *method)
{
  if ( !this->fields.progressPathMesh )
    sub_2213CDC(this, method);
}


void EventInfoShipProgressDrawComponent__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w8
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *v9; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *v16; // x20
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  int32_t v21; // w2
  EventInfoShipProgressDrawComponent_c *v22; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  System_Collections_Generic_IEnumerator_T__o *v26; // x20
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-44h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v33; // [xsp+28h] [xbp-38h]

  if ( (byte_5972631 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_2213A60(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5972631 = 1;
  }
  v33 = 0;
  v2 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v32 = 0;
  entity = 0;
  if ( !v2 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_2213CDC(Master_object, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  v33 = Enumerator;
  if ( !Enumerator )
LABEL_32:
    sub_2213CDC(Enumerator, v8);
  v9 = Enumerator;
  while ( 1 )
  {
    klass = v9->klass;
    v11 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_13;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v13 = sub_224BC3C(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v9,
            *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    v16 = v33;
    if ( !v33 )
      sub_2213CDC(v14, v15);
    v17 = v33->klass;
    v18 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_21:
      v20 = sub_224BC3C(v33, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v16,
                                                                  *(_QWORD *)(v20 + 8));
    if ( Enumerator )
    {
      v21 = (int32_t)Enumerator[1].klass;
      v32 = v21;
      if ( !v6 )
        sub_2213CDC(Enumerator, v8);
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    v6,
                                                                    &entity,
                                                                    v21,
                                                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
        if ( !entity )
          sub_2213CDC(0, v8);
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)EventDetailEntity__IsEventRiverProgress(
                                                                      (EventDetailEntity_o *)entity,
                                                                      0);
        if ( ((unsigned __int8)Enumerator & 1) != 0 )
        {
          v22 = EventInfoShipProgressDrawComponent_TypeInfo;
          if ( !*(&EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo, v8);
            v22 = EventInfoShipProgressDrawComponent_TypeInfo;
          }
          SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v22->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
          v24 = System_Int32__ToString((int32_t)&v32, 0);
          v25 = System_String__Concat_75651716(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v24, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v25, 0);
        }
      }
    }
    v9 = v33;
    if ( !v33 )
      goto LABEL_32;
  }
  v26 = v33;
  if ( v33 )
  {
    v27 = v33->klass;
    v28 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_38;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_38:
      v30 = sub_224BC3C(v33, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
  }
}


System_Collections_IEnumerator_o *EventInfoShipProgressDrawComponent__EasingMove(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        float endRate,
        float moveRate,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_597262D & 1) == 0 )
  {
    sub_2213A60(&EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
    byte_597262D = 1;
  }
  v9 = sub_2213CCC(EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 48) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)endAction, v16, v17, v18, v19, v20, v21);
  *(float *)(v9 + 40) = moveRate;
  *(float *)(v9 + 44) = endRate;
  return (System_Collections_IEnumerator_o *)v9;
}


bool EventInfoShipProgressDrawComponent__HasSaveData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  EventInfoShipProgressDrawComponent_c *v3; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0

  v2 = (int)this;
  if ( (byte_5972632 & 1) == 0 )
  {
    sub_2213A60(&EventInfoShipProgressDrawComponent_TypeInfo);
    byte_5972632 = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !*(&EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo, method);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString(v2 + 124, 0);
  v6 = System_String__Concat_75651716(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0);
}


void EventInfoShipProgressDrawComponent__LoadProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_c *v3; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *String; // x20
  void *IsNullOrEmpty; // x0
  __int64 v9; // x1
  float v10; // s8
  int v11; // w21
  System_String_o **v12; // x20
  __int64 v13; // x0
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972630 & 1) == 0 )
  {
    sub_2213A60(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972630 = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !*(&EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo, method);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString((int)this + 124, 0);
  v6 = System_String__Concat_75651716(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0);
  String = UnityEngine_PlayerPrefs__GetString(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !String )
      goto LABEL_19;
    IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_19;
    v10 = 0.0;
    v11 = *((_DWORD *)IsNullOrEmpty + 6);
    v12 = (System_String_o **)IsNullOrEmpty;
    if ( v11 < 1 )
    {
      v15 = 0.0;
      v14 = 0.0;
      goto LABEL_16;
    }
    v14 = System_Single__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0);
    if ( v11 == 1 )
    {
      v15 = 0.0;
      goto LABEL_16;
    }
    if ( ((_DWORD)v12[3] & 0xFFFFFFFE) != 0 )
    {
      v15 = System_Single__Parse(v12[5], 0);
      if ( v11 == 2 )
        goto LABEL_16;
      if ( *((_DWORD *)v12 + 6) > 2u )
      {
        v10 = System_Single__Parse(v12[6], 0);
LABEL_16:
        IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( IsNullOrEmpty )
        {
          v16.fields.z = 0.0;
          v16.fields.x = v14;
          v16.fields.y = v15;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v16, 0);
          this->fields.startRate = v10;
          return;
        }
LABEL_19:
        sub_2213CDC(IsNullOrEmpty, v9);
      }
    }
    sub_2213CE4(v13);
  }
}


void EventInfoShipProgressDrawComponent__OnDestroy(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.progressPathMesh = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.progressPathMesh, 0, v2, v3, v4, v5, v6, v7);
}


void EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v2; // x19
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v5; // x19
  System_String_o *name; // x1

  v2 = this;
  if ( (byte_597262E & 1) == 0 )
  {
    this = (EventInfoShipProgressDrawComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597262E = 1;
  }
  progressShipAnim = v2->fields.progressShipAnim;
  if ( !progressShipAnim )
    goto LABEL_11;
  m_Clip = (UnityEngine_Object_o *)progressShipAnim->fields.m_Clip;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.progressShipAnim;
    if ( v5 )
    {
      this = (EventInfoShipProgressDrawComponent_o *)v5->fields.m_Clip;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        SimpleAnimation__Play_78552168(v5, name, 0);
        return;
      }
    }
LABEL_11:
    sub_2213CDC(this, method);
  }
}


void EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v4; // x19
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *m_Clip; // x21
  struct SimpleAnimation_o *v7; // x21
  System_String_o *name; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  __int64 TotalPoint; // x22
  __int64 NextPoint; // x23
  __int64 v12; // x1
  float v13; // s8
  float startRate; // s9
  const MethodInfo *v15; // x2
  float moveAnimTime; // s10
  int v17; // w21
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  System_Collections_IEnumerator_o *v19; // x0
  const MethodInfo *v20; // x1

  v4 = this;
  if ( (byte_597262C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    this = (EventInfoShipProgressDrawComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597262C = 1;
  }
  if ( v4->fields.progressData )
  {
    progressShipAnim = v4->fields.progressShipAnim;
    if ( !progressShipAnim )
      goto LABEL_24;
    m_Clip = (UnityEngine_Object_o *)progressShipAnim->fields.m_Clip;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endAction);
    this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v4->fields.progressShipAnim;
      if ( !v7 )
        goto LABEL_24;
      this = (EventInfoShipProgressDrawComponent_o *)v7->fields.m_Clip;
      if ( !this )
        goto LABEL_24;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (EventInfoShipProgressDrawComponent_o *)SimpleAnimation__IsPlaying(v7, name, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (EventInfoShipProgressDrawComponent_o *)v4->fields.progressShipAnim;
        if ( !this )
          goto LABEL_24;
        SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
      }
    }
    progressData = v4->fields.progressData;
    if ( progressData )
    {
      TotalPoint = progressData->fields.TotalPoint;
      NextPoint = progressData->fields.NextPoint;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, endAction);
      v13 = System_Math__Min_77153640((float)TotalPoint / (float)NextPoint, 1.0, 0);
      startRate = v4->fields.startRate;
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v12);
      this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Application__get_targetFrameRate(0);
      moveAnimTime = v4->fields.moveAnimTime;
      v17 = (int)this;
      if ( v13 < 1.0 )
        goto LABEL_22;
      pointRiverProgressCtr = v4->fields.pointRiverProgressCtr;
      if ( pointRiverProgressCtr )
      {
        this = (EventInfoShipProgressDrawComponent_o *)pointRiverProgressCtr->fields.maskPanel;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
LABEL_22:
          v19 = EventInfoShipProgressDrawComponent__EasingMove(
                  v4,
                  endAction,
                  v13,
                  (float)(v13 - startRate) / (float)(moveAnimTime * (float)v17),
                  v15);
          UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v4, v19, 0);
          EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(v4, v20);
          return;
        }
      }
    }
LABEL_24:
    sub_2213CDC(this, endAction);
  }
}


System_Collections_IEnumerator_o *EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
        EventInfoShipProgressDrawComponent_o *this,
        bool isFadeIn,
        bool isWait,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_597262F & 1) == 0 )
  {
    sub_2213A60(&EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
    byte_597262F = 1;
  }
  v7 = isFadeIn;
  v8 = sub_2213CCC(EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 40) = v7;
  result = (System_Collections_IEnumerator_o *)v8;
  *(_BYTE *)(v8 + 41) = isWait;
  return result;
}


void EventInfoShipProgressDrawComponent__ResetShip(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  Custom2dSplineMesh_o *v10; // x0
  __int64 v11; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v12; // x9
  __int64 v13; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 v17; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x9
  struct Custom2dSplineMesh_array *v19; // x8
  __int64 v20; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progressData,
    (int32_t)progressData_,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = *p_progressData;
  *((_DWORD *)p_progressData + 2) = 0;
  if ( !v12 )
    goto LABEL_14;
  v13 = (__int64)*(p_progressData - 4);
  if ( !v13 )
    goto LABEL_14;
  ReleaseScenarioIndex = v12->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= *(_DWORD *)(v13 + 24) )
    goto LABEL_15;
  v10 = *(Custom2dSplineMesh_o **)(v13 + 8 * ReleaseScenarioIndex + 32);
  if ( !v10 )
    goto LABEL_14;
  Custom2dSplineMesh__CreateMesh(v10, 0);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_14;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_14;
  v17 = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v17 >= LODWORD(progressPathMesh->max_length) )
    goto LABEL_15;
  v10 = progressPathMesh->m_Items[v17];
  if ( !v10
    || (Custom2dSplineMesh__SetPathRate(v10, this->fields.startRate, 0), (v18 = this->fields.progressData) == 0)
    || (v19 = this->fields.progressPathMesh) == 0 )
  {
LABEL_14:
    sub_2213CDC(v10, v11);
  }
  v20 = v18->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v20 >= LODWORD(v19->max_length) )
LABEL_15:
    sub_2213CE4(v10);
  v10 = v19->m_Items[v20];
  if ( !v10 )
    goto LABEL_14;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v10, this->fields.startRate, 0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v27, 0);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v25);
}


void EventInfoShipProgressDrawComponent__SaveProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float v6; // s0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  EventInfoShipProgressDrawComponent_c *v10; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  float startRate; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v16[5]; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972633 & 1) == 0 )
  {
    sub_2213A60(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5972633 = 1;
  }
  v16[0].fields.z = 0.0;
  *(_QWORD *)&v16[0].fields.x = 0;
  startRate = 0.0;
  v3 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        v16[0] = localPosition,
        transform = (UnityEngine_Transform_o *)System_Single__ToString(localPosition.fields.x, (const MethodInfo *)v16),
        !v3) )
  {
    sub_2213CDC(transform, v5);
  }
  System_Text_StringBuilder__Append_75735064(v3, (System_String_o *)transform, 0);
  System_Text_StringBuilder__Append_75735064(v3, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  v7 = System_Single__ToString(v6, (const MethodInfo *)&v16[0].fields.y);
  System_Text_StringBuilder__Append_75735064(v3, v7, 0);
  System_Text_StringBuilder__Append_75735064(v3, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  startRate = this->fields.startRate;
  v8 = System_Single__ToString(startRate, (const MethodInfo *)&startRate);
  System_Text_StringBuilder__Append_75735064(v3, v8, 0);
  v10 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !*(&EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo, v9);
    v10 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v10->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v12 = System_Int32__ToString((int)this + 124, 0);
  v13 = System_String__Concat_75651716(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v12, 0);
  v14 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                             v3,
                             v3->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString(v13, v14, 0);
}


void EventInfoShipProgressDrawComponent__SetActive(
        EventInfoShipProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoShipProgressDrawComponent__Setup(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_o *inputPointRiverProgressCtr,
        int32_t inputEventId,
        bool isReset,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventInfoPointRiverProgressControl_o **p_pointRiverProgressCtr; // x22
  __int64 v13; // x1
  UnityEngine_Object_o *pointRiverProgressCtr; // x23
  Custom2dSplineMesh_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x1
  const MethodInfo *v24; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x8
  __int64 TotalPoint; // x20
  __int64 NextPoint; // x21
  float v28; // s0
  struct Custom2dSplineMesh_array *progressPathMesh; // x9
  __int64 ReleaseScenarioIndex; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v31; // x9
  struct Custom2dSplineMesh_array *v32; // x8
  __int64 v33; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v34; // x9
  struct Custom2dSplineMesh_array *v35; // x8
  __int64 v36; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v41; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597262B & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_597262B = 1;
  }
  this->fields.pointRiverProgressCtr = inputPointRiverProgressCtr;
  p_pointRiverProgressCtr = &this->fields.pointRiverProgressCtr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pointRiverProgressCtr,
    (int32_t)inputPointRiverProgressCtr,
    *(System_String_o **)&inputEventId,
    (System_String_o *)isReset,
    (int32_t)method,
    v5,
    v6,
    v7);
  pointRiverProgressCtr = (UnityEngine_Object_o *)this->fields.pointRiverProgressCtr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = (Custom2dSplineMesh_o *)UnityEngine_Object__op_Equality(pointRiverProgressCtr, 0, 0);
  if ( ((unsigned __int8)v15 & 1) != 0 )
    return;
  if ( !*p_pointRiverProgressCtr )
    goto LABEL_41;
  progressData = (*p_pointRiverProgressCtr)->fields.progressData;
  if ( !progressData )
    return;
  this->fields.progressData = progressData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progressData,
    (int32_t)progressData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.eventId = inputEventId;
  EventInfoShipProgressDrawComponent__LoadProgressData(this, v24);
  v25 = this->fields.progressData;
  if ( isReset )
  {
    if ( !v25 )
      goto LABEL_41;
    goto LABEL_27;
  }
  if ( !v25 )
    goto LABEL_41;
  if ( !v25->fields.IsFreeQuestClear )
  {
LABEL_27:
    if ( v25->fields.OldTotalPoint == v25->fields.TotalPoint )
      this->fields.startRate = 0.0;
    goto LABEL_29;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
  if ( !byte_596F301 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F301 = 1;
  }
  v15 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    v15 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  }
  v25 = this->fields.progressData;
  if ( !*(_BYTE *)(*(_QWORD *)&v15->fields.vtxIdx + 498LL) )
  {
    if ( !v25 )
      goto LABEL_41;
    TotalPoint = v25->fields.TotalPoint;
    NextPoint = v25->fields.NextPoint;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
    v28 = System_Math__Min_77153640((float)TotalPoint / (float)NextPoint, 1.0, 0);
    v25 = this->fields.progressData;
    this->fields.startRate = v28;
  }
  if ( !v25 )
    goto LABEL_41;
LABEL_29:
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_41;
  ReleaseScenarioIndex = v25->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= LODWORD(progressPathMesh->max_length) )
LABEL_42:
    sub_2213CE4(v15);
  v15 = progressPathMesh->m_Items[ReleaseScenarioIndex];
  if ( !v15 )
    goto LABEL_41;
  Custom2dSplineMesh__CreateMesh(v15, 0);
  v31 = this->fields.progressData;
  if ( !v31 )
    goto LABEL_41;
  v32 = this->fields.progressPathMesh;
  if ( !v32 )
    goto LABEL_41;
  v33 = v31->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v33 >= LODWORD(v32->max_length) )
    goto LABEL_42;
  v15 = v32->m_Items[v33];
  if ( !v15
    || (Custom2dSplineMesh__SetPathRate(v15, this->fields.startRate, 0), (v34 = this->fields.progressData) == 0)
    || (v35 = this->fields.progressPathMesh) == 0 )
  {
LABEL_41:
    sub_2213CDC(v15, v16);
  }
  v36 = v34->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v36 >= LODWORD(v35->max_length) )
    goto LABEL_42;
  v15 = v35->m_Items[v36];
  if ( !v15 )
    goto LABEL_41;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v15, this->fields.startRate, 0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v43, 0);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v41);
}


void EventInfoShipProgressDrawComponent__EasingMove_d__13___ctor(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoShipProgressDrawComponent__EasingMove_d__13__MoveNext(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  int v5; // w21
  int32_t i_5__2; // w8
  UnityEngine_GameObject_o *targetFrameRate; // x0
  __int64 v8; // x1
  float v9; // s0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppClass **v13; // x8
  Custom2dSplineMesh_o *v14; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v18; // s11
  float v19; // s12
  float v20; // s13
  bool v21; // w22
  UITweener_o *v22; // x23
  float deltaTime; // s0
  float startRate; // s0
  Il2CppObject **p__2__current; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  const MethodInfo *v33; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972635 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    byte_5972635 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    v5 = i_5__2 + 1;
    this->fields._i_5__2 = i_5__2 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v5 = 0;
    this->fields._i_5__2 = 0;
    this->fields.__1__state = -1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  targetFrameRate = (UnityEngine_GameObject_o *)UnityEngine_Application__get_targetFrameRate(0);
  if ( !_4__this )
LABEL_25:
    sub_2213CDC(targetFrameRate, v8);
  v9 = _4__this->fields.moveAnimTime * (float)(int)targetFrameRate;
  if ( v9 == INFINITY || v5 >= (int)v9 )
  {
    pointRiverProgressCtr = _4__this->fields.pointRiverProgressCtr;
    _4__this->fields.startRate = this->fields.endRate;
    if ( !pointRiverProgressCtr )
      goto LABEL_25;
    targetFrameRate = pointRiverProgressCtr->fields.maskPanel;
    if ( !targetFrameRate )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(targetFrameRate, 0, 0);
    EventInfoShipProgressDrawComponent__SaveProgressData(_4__this, v33);
    ActionExtensions__Call(this->fields.endAction, 0);
    return 0;
  }
  progressData = _4__this->fields.progressData;
  if ( !progressData )
    goto LABEL_25;
  progressPathMesh = _4__this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_25;
  ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= LODWORD(progressPathMesh->max_length) )
    sub_2213CE4(targetFrameRate);
  v13 = &progressPathMesh->obj.klass + ReleaseScenarioIndex;
  v14 = (Custom2dSplineMesh_o *)v13[4];
  if ( !v14 )
    goto LABEL_25;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                          (Custom2dSplineMesh_o *)v13[4],
                          _4__this->fields.startRate,
                          0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  v36 = Custom2dSplineMesh__GetPointAsWorldFlatten(v14, _4__this->fields.startRate + this->fields.moveRate, 0);
  v18 = v36.fields.x;
  v19 = v36.fields.y;
  v20 = v36.fields.z;
  targetFrameRate = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)_4__this,
                                                  0);
  if ( !targetFrameRate )
    goto LABEL_25;
  targetFrameRate = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetFrameRate, 0);
  if ( !targetFrameRate )
    goto LABEL_25;
  targetFrameRate = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                  targetFrameRate,
                                                  (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  if ( !targetFrameRate )
    goto LABEL_25;
  v21 = 1;
  v22 = (UITweener_o *)targetFrameRate;
  *(float *)&targetFrameRate[5].monitor = x;
  *((float *)&targetFrameRate[5].monitor + 1) = y;
  LOBYTE(targetFrameRate[6].monitor) = 1;
  *(float *)&targetFrameRate[5].fields.m_CachedPtr = z;
  *((float *)&targetFrameRate[5].fields.m_CachedPtr + 1) = v18;
  *(float *)&targetFrameRate[6].klass = v19;
  *((float *)&targetFrameRate[6].klass + 1) = v20;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  v22->fields.method = 0;
  v22->fields.duration = deltaTime;
  UITweener__PlayForward(v22, 0);
  Custom2dSplineMesh__SetPathRate(v14, _4__this->fields.startRate, 0);
  startRate = _4__this->fields.startRate;
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  _4__this->fields.startRate = startRate + *((float *)p__2__current + 4);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v26, v27, v28, v29, v30, v31);
  *((_DWORD *)p__2__current - 2) = 1;
  return v21;
}


Il2CppObject *EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_IEnumerator_Reset(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_EventInfoShipProgressDrawComponent__EasingMove_d__13_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_IEnumerator_get_Current(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoShipProgressDrawComponent__EasingMove_d__13__System_IDisposable_Dispose(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15___ctor(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__MoveNext(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *v2; // x19
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  __int64 v5; // x1
  EventInfoUISlideAnimation_o *Component_object; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  _BOOL4 v13; // w22
  float x; // s8
  float y; // s9
  float z; // s10
  _BOOL4 isFadeIn; // w8
  const MethodInfo **v18; // x8
  float v19; // s10
  float v20; // s9
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5972636 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_24659/*"ship_fade_out"*/);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)sub_2213A60(&StringLiteral_24658/*"ship_fade_in"*/);
    byte_5972636 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    isFadeIn = v2->fields.isFadeIn;
    v2->fields.__1__state = -1;
    if ( isFadeIn )
      v18 = (const MethodInfo **)&StringLiteral_24658/*"ship_fade_in"*/;
    else
      v18 = (const MethodInfo **)&StringLiteral_24659/*"ship_fade_out"*/;
    if ( !_4__this )
      goto LABEL_33;
    goto LABEL_30;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_33;
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
    if ( !this )
      goto LABEL_33;
    SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
    Component_object = (EventInfoUISlideAnimation_o *)UnityEngine_Component__GetComponent_object_(
                                                        (UnityEngine_Component_o *)_4__this,
                                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      v13 = v2->fields.isFadeIn;
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                        (UnityEngine_Component_o *)_4__this,
                                                                                        0);
      if ( v13 )
      {
        if ( !this )
          goto LABEL_33;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
        if ( !Component_object )
          goto LABEL_33;
        GameObjectExtensions__SetLocalPosition_42891620(
          (UnityEngine_GameObject_o *)this,
          x,
          y - Component_object->fields.slideOutPosition.fields.y,
          z,
          0);
      }
      else
      {
        if ( !this )
          goto LABEL_33;
        LODWORD(x) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
        if ( !this )
          goto LABEL_33;
        v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        if ( !Component_object )
          goto LABEL_33;
        v19 = Component_object->fields.slideOutPosition.fields.y;
        v20 = v24.fields.y;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
        if ( !this )
          goto LABEL_33;
        v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        y = v20 + v19;
        z = v25.fields.z;
      }
      v26.fields.x = x;
      v26.fields.y = y;
      v26.fields.z = z;
      EventInfoUISlideAnimation__StartSlideAnim_52752912(Component_object, 0, v26, v13, 0);
    }
    if ( v2->fields.isWait )
    {
      v2->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
      sub_2213A04(p__2__current, 0, v7, v8, v9, v10, v11, v12);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    }
    if ( v2->fields.isFadeIn )
      v18 = (const MethodInfo **)&StringLiteral_24658/*"ship_fade_in"*/;
    else
      v18 = (const MethodInfo **)&StringLiteral_24659/*"ship_fade_out"*/;
LABEL_30:
    method = *v18;
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
    if ( this )
    {
      SimpleAnimation__Play_78552168((SimpleAnimation_o *)this, (System_String_o *)method, 0);
      return 0;
    }
LABEL_33:
    sub_2213CDC(this, method);
  }
  return 0;
}


Il2CppObject *EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_IEnumerator_Reset(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_IEnumerator_get_Current(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_IDisposable_Dispose(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  ;
}