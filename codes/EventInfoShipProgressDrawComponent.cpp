void EventInfoShipProgressDrawComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2E5A7 & 1) == 0 )
  {
    sub_1C94098(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C94098(&StringLiteral_10799/*"ProgressShipData_"*/);
    byte_4D2E5A7 = 1;
  }
  EventInfoShipProgressDrawComponent_TypeInfo->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = (struct System_String_o *)StringLiteral_10799/*"ProgressShipData_"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventInfoShipProgressDrawComponent_TypeInfo->static_fields,
    StringLiteral_10799/*"ProgressShipData_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventInfoShipProgressDrawComponent__Awake(EventInfoShipProgressDrawComponent_o *this, const MethodInfo *method)
{
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  int max_length; // w8
  int v4; // w9

  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    sub_1C942F0(this, method);
  max_length = progressPathMesh->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void EventInfoShipProgressDrawComponent__DeleteContinueData(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  __int64 v18; // x1
  EventInfoShipProgressDrawComponent_c *v19; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v21; // x1
  System_String_o *v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4D2E5A4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C94098(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2E5A4 = 1;
  }
  v28 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_1C942F0(Master_object, v2);
  }
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_12;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v10 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_19;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_19:
      v14 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      v17 = *(_DWORD *)(v15 + 16);
      v28 = v17;
      if ( !v4 )
        sub_1C942F0(v15, v16);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v4,
             &entity,
             v17,
             (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C942F0(0, v18);
        if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0) )
        {
          v19 = EventInfoShipProgressDrawComponent_TypeInfo;
          if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
            v19 = EventInfoShipProgressDrawComponent_TypeInfo;
          }
          SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v19->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
          v21 = System_Int32__ToString((int32_t)&v28, 0);
          v22 = System_String__Concat_64417744(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v21, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v22, 0);
        }
      }
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_33:
    v26 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
}


System_Collections_IEnumerator_o *EventInfoShipProgressDrawComponent__EasingMove(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        float endRate,
        float moveRate,
        const MethodInfo *method)
{
  __int64 v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D2E5A0 & 1) == 0 )
  {
    sub_1C94098(&EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
    byte_4D2E5A0 = 1;
  }
  v9 = sub_1C942E4(EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 48) = endAction;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)endAction, v16, v17, v18, v19, v20, v21);
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
  if ( (byte_4D2E5A5 & 1) == 0 )
  {
    sub_1C94098(&EventInfoShipProgressDrawComponent_TypeInfo);
    byte_4D2E5A5 = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString(v2 + 124, 0);
  v6 = System_String__Concat_64417744(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0);
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
  int v10; // w8
  void *v11; // x20
  float v12; // s8
  int v13; // w21
  __int64 v14; // x0
  float v15; // s9
  float v16; // s10
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E5A3 & 1) == 0 )
  {
    sub_1C94098(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E5A3 = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString((int)this + 124, 0);
  v6 = System_String__Concat_64417744(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0);
  String = UnityEngine_PlayerPrefs__GetString(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !String )
      goto LABEL_19;
    IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_19;
    v10 = *((_DWORD *)IsNullOrEmpty + 6);
    v11 = IsNullOrEmpty;
    v12 = 0.0;
    if ( v10 < 1 )
    {
      v16 = 0.0;
      v15 = 0.0;
    }
    else
    {
      v13 = v10 & ~(v10 >> 31);
      v15 = System_Single__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0);
      if ( v13 < 2 )
      {
        v16 = 0.0;
      }
      else
      {
        if ( *((_DWORD *)v11 + 6) <= 1u )
          goto LABEL_20;
        v16 = System_Single__Parse(*((System_String_o **)v11 + 5), 0);
        if ( v13 < 3 )
          goto LABEL_16;
        if ( *((_DWORD *)v11 + 6) <= 2u )
LABEL_20:
          sub_1C942F8(v14);
        v12 = System_Single__Parse(*((System_String_o **)v11 + 6), 0);
      }
    }
LABEL_16:
    IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( IsNullOrEmpty )
    {
      v17.fields.z = 0.0;
      v17.fields.x = v15;
      v17.fields.y = v16;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v17, 0);
      this->fields.startRate = v12;
      return;
    }
LABEL_19:
    sub_1C942F0(IsNullOrEmpty, v9);
  }
}


void EventInfoShipProgressDrawComponent__OnDestroy(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.progressPathMesh = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.progressPathMesh, 0, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_4D2E5A1 & 1) == 0 )
  {
    this = (EventInfoShipProgressDrawComponent_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E5A1 = 1;
  }
  progressShipAnim = v2->fields.progressShipAnim;
  if ( !progressShipAnim )
    goto LABEL_11;
  m_Clip = (UnityEngine_Object_o *)progressShipAnim->fields.m_Clip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        SimpleAnimation__Play_67362784(v5, name, 0);
        return;
      }
    }
LABEL_11:
    sub_1C942F0(this, method);
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
  __int64 TotalPoint; // x23
  __int64 NextPoint; // x22
  float v12; // s0
  float startRate; // s9
  float v14; // s8
  int32_t targetFrameRate; // w0
  const MethodInfo *v16; // x2
  float moveAnimTime; // s11
  int v18; // w21
  System_Collections_IEnumerator_o *v19; // x0
  const MethodInfo *v20; // x1

  v4 = this;
  if ( (byte_4D2E59F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    this = (EventInfoShipProgressDrawComponent_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E59F = 1;
  }
  if ( v4->fields.progressData )
  {
    progressShipAnim = v4->fields.progressShipAnim;
    if ( !progressShipAnim )
      goto LABEL_23;
    m_Clip = (UnityEngine_Object_o *)progressShipAnim->fields.m_Clip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v4->fields.progressShipAnim;
      if ( !v7 )
        goto LABEL_23;
      this = (EventInfoShipProgressDrawComponent_o *)v7->fields.m_Clip;
      if ( !this )
        goto LABEL_23;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (EventInfoShipProgressDrawComponent_o *)SimpleAnimation__IsPlaying(v7, name, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (EventInfoShipProgressDrawComponent_o *)v4->fields.progressShipAnim;
        if ( !this )
          goto LABEL_23;
        SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
      }
    }
    progressData = v4->fields.progressData;
    if ( progressData )
    {
      TotalPoint = progressData->fields.TotalPoint;
      NextPoint = progressData->fields.NextPoint;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v12 = System_Math__Min_65939932((float)TotalPoint / (float)NextPoint, 1.0, 0);
      startRate = v4->fields.startRate;
      v14 = v12;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
      moveAnimTime = v4->fields.moveAnimTime;
      v18 = targetFrameRate;
      if ( v14 < 1.0 )
        goto LABEL_21;
      this = (EventInfoShipProgressDrawComponent_o *)v4->fields.pointRiverProgressCtr;
      if ( this )
      {
        EventInfoPointRiverProgressControl__SetMaskPanelActive((EventInfoPointRiverProgressControl_o *)this, 1, 0);
LABEL_21:
        v19 = EventInfoShipProgressDrawComponent__EasingMove(
                v4,
                endAction,
                v14,
                (float)(v14 - startRate) / (float)(moveAnimTime * (float)v18),
                v16);
        UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)v4, v19, 0);
        EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(v4, v20);
        return;
      }
    }
LABEL_23:
    sub_1C942F0(this, endAction);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2E5A2 & 1) == 0 )
  {
    sub_1C94098(&EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
    byte_4D2E5A2 = 1;
  }
  v7 = isWait;
  v8 = sub_1C942E4(EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 32), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 40) = isFadeIn;
  *(_BYTE *)(v8 + 41) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void EventInfoShipProgressDrawComponent__ResetShip(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.progressData,
    (int32_t)progressData_,
    (int32_t)method,
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
    sub_1C942F0(v10, v11);
  }
  v20 = v18->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v20 >= LODWORD(v19->max_length) )
LABEL_15:
    sub_1C942F8(v10);
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
  EventInfoShipProgressDrawComponent_c *v9; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  float startRate; // [xsp+Ch] [xbp-44h] BYREF
  float x; // [xsp+10h] [xbp-40h] BYREF
  _DWORD v16[15]; // [xsp+14h] [xbp-3Ch] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E5A6 & 1) == 0 )
  {
    sub_1C94098(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2E5A6 = 1;
  }
  startRate = 0.0;
  v3 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        x = localPosition.fields.x,
        v16[0] = LODWORD(localPosition.fields.y),
        v16[1] = LODWORD(localPosition.fields.z),
        transform = (UnityEngine_Transform_o *)System_Single__ToString(localPosition.fields.x, (const MethodInfo *)&x),
        !v3) )
  {
    sub_1C942F0(transform, v5);
  }
  System_Text_StringBuilder__Append_64501704(v3, (System_String_o *)transform, 0);
  System_Text_StringBuilder__Append_64501704(v3, (System_String_o *)StringLiteral_1450/*":"*/, 0);
  v7 = System_Single__ToString(v6, (const MethodInfo *)v16);
  System_Text_StringBuilder__Append_64501704(v3, v7, 0);
  System_Text_StringBuilder__Append_64501704(v3, (System_String_o *)StringLiteral_1450/*":"*/, 0);
  startRate = this->fields.startRate;
  v8 = System_Single__ToString(startRate, (const MethodInfo *)&startRate);
  System_Text_StringBuilder__Append_64501704(v3, v8, 0);
  v9 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v9 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v9->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v11 = System_Int32__ToString((int)this + 124, 0);
  v12 = System_String__Concat_64417744(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v11, 0);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                             v3,
                             v3->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString(v12, v13, 0);
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
    sub_1C942F0(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


void EventInfoShipProgressDrawComponent__Setup(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_o *inputPointRiverProgressCtr,
        int32_t inputEventId,
        bool isReset,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventInfoPointRiverProgressControl_o **p_pointRiverProgressCtr; // x22
  UnityEngine_Object_o *pointRiverProgressCtr; // x23
  Custom2dSplineMesh_o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  char v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x22
  const MethodInfo *v24; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v26; // x8
  __int64 TotalPoint; // x20
  __int64 NextPoint; // x21
  struct EventInfoPointRiverProgressControl_ProgressData_o *v29; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v32; // x9
  struct Custom2dSplineMesh_array *v33; // x8
  __int64 v34; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v35; // x9
  struct Custom2dSplineMesh_array *v36; // x8
  __int64 v37; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v42; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E59E & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2E59E = 1;
  }
  this->fields.pointRiverProgressCtr = inputPointRiverProgressCtr;
  p_pointRiverProgressCtr = &this->fields.pointRiverProgressCtr;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.pointRiverProgressCtr,
    (int32_t)inputPointRiverProgressCtr,
    inputEventId,
    isReset,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  pointRiverProgressCtr = (UnityEngine_Object_o *)this->fields.pointRiverProgressCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = (Custom2dSplineMesh_o *)UnityEngine_Object__op_Equality(pointRiverProgressCtr, 0, 0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    return;
  if ( !*p_pointRiverProgressCtr )
    goto LABEL_40;
  progressData = (*p_pointRiverProgressCtr)->fields.progressData;
  if ( !progressData )
    return;
  this->fields.progressData = progressData;
  p_progressData = &this->fields.progressData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.progressData,
    (int32_t)progressData,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.eventId = inputEventId;
  EventInfoShipProgressDrawComponent__LoadProgressData(this, v24);
  v25 = this->fields.progressData;
  if ( isReset )
  {
    if ( !v25 )
      goto LABEL_40;
    goto LABEL_25;
  }
  if ( !v25 )
    goto LABEL_40;
  if ( !v25->fields.IsFreeQuestClear )
  {
LABEL_25:
    if ( v25->fields.OldTotalPoint == v25->fields.TotalPoint )
      this->fields.startRate = 0.0;
    goto LABEL_27;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2B392 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2B392 = 1;
  }
  v14 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)&v14->fields.vtxIdx + 482LL) )
  {
    v26 = *p_progressData;
    if ( !*p_progressData )
      goto LABEL_40;
    TotalPoint = v26->fields.TotalPoint;
    NextPoint = v26->fields.NextPoint;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.startRate = System_Math__Min_65939932((float)TotalPoint / (float)NextPoint, 1.0, 0);
  }
LABEL_27:
  v29 = this->fields.progressData;
  if ( !v29 )
    goto LABEL_40;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_40;
  ReleaseScenarioIndex = v29->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= LODWORD(progressPathMesh->max_length) )
    goto LABEL_41;
  v14 = progressPathMesh->m_Items[ReleaseScenarioIndex];
  if ( !v14 )
    goto LABEL_40;
  Custom2dSplineMesh__CreateMesh(v14, 0);
  v32 = this->fields.progressData;
  if ( !v32 )
    goto LABEL_40;
  v33 = this->fields.progressPathMesh;
  if ( !v33 )
    goto LABEL_40;
  v34 = v32->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v34 >= LODWORD(v33->max_length) )
    goto LABEL_41;
  v14 = v33->m_Items[v34];
  if ( !v14
    || (Custom2dSplineMesh__SetPathRate(v14, this->fields.startRate, 0), (v35 = this->fields.progressData) == 0)
    || (v36 = this->fields.progressPathMesh) == 0 )
  {
LABEL_40:
    sub_1C942F0(v14, v15);
  }
  v37 = v35->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v37 >= LODWORD(v36->max_length) )
LABEL_41:
    sub_1C942F8(v14);
  v14 = v36->m_Items[v37];
  if ( !v14 )
    goto LABEL_40;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v14, this->fields.startRate, 0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v44.fields.x = x;
  v44.fields.y = y;
  v44.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v44, 0);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v42);
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
  EventInfoPointRiverProgressControl_o *targetFrameRate; // x0
  __int64 v8; // x1
  float v9; // s0
  int v10; // w8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppClass **v14; // x8
  Custom2dSplineMesh_o *v15; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v19; // s11
  float v20; // s12
  float v21; // s13
  bool v22; // w22
  UITweener_o *v23; // x23
  Il2CppObject **p__2__current; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E5A8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    byte_4D2E5A8 = 1;
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
    this->fields.__1__state = -1;
    this->fields._i_5__2 = 0;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Application__get_targetFrameRate(0);
  if ( !_4__this )
LABEL_25:
    sub_1C942F0(targetFrameRate, v8);
  v9 = _4__this->fields.moveAnimTime * (float)(int)targetFrameRate;
  v10 = (int)v9;
  if ( v9 == INFINITY )
    v10 = 0x80000000;
  if ( v5 >= v10 )
  {
    targetFrameRate = _4__this->fields.pointRiverProgressCtr;
    _4__this->fields.startRate = this->fields.endRate;
    if ( !targetFrameRate )
      goto LABEL_25;
    EventInfoPointRiverProgressControl__SetMaskPanelActive(targetFrameRate, 0, 0);
    EventInfoShipProgressDrawComponent__SaveProgressData(_4__this, v31);
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
    sub_1C942F8(targetFrameRate);
  v14 = &progressPathMesh->obj.klass + ReleaseScenarioIndex;
  v15 = (Custom2dSplineMesh_o *)v14[4];
  if ( !v15 )
    goto LABEL_25;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                          (Custom2dSplineMesh_o *)v14[4],
                          _4__this->fields.startRate,
                          0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  v34 = Custom2dSplineMesh__GetPointAsWorldFlatten(v15, _4__this->fields.startRate + this->fields.moveRate, 0);
  v19 = v34.fields.x;
  v20 = v34.fields.y;
  v21 = v34.fields.z;
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this,
                                                              0);
  if ( !targetFrameRate )
    goto LABEL_25;
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)targetFrameRate,
                                                              0);
  if ( !targetFrameRate )
    goto LABEL_25;
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)targetFrameRate,
                                                              (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  if ( !targetFrameRate )
    goto LABEL_25;
  v22 = 1;
  v23 = (UITweener_o *)targetFrameRate;
  *(float *)&targetFrameRate->fields.maskPanel = x;
  *((float *)&targetFrameRate->fields.maskPanel + 1) = y;
  *(float *)&targetFrameRate->fields.userEventPointMaster = z;
  *((float *)&targetFrameRate->fields.userEventPointMaster + 1) = v19;
  LOBYTE(targetFrameRate->fields.eventUiValueEntityList) = 1;
  *(float *)&targetFrameRate->fields.eventUiEntity = v20;
  *((float *)&targetFrameRate->fields.eventUiEntity + 1) = v21;
  *(float *)&targetFrameRate->fields.assetData2 = UnityEngine_Time__get_deltaTime(0);
  v23->fields.method = 0;
  UITweener__PlayForward(v23, 0);
  Custom2dSplineMesh__SetPathRate(v15, _4__this->fields.startRate, 0);
  _4__this->fields.startRate = _4__this->fields.startRate + this->fields.moveRate;
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v25, v26, v27, v28, v29, v30);
  *((_DWORD *)p__2__current - 2) = 1;
  return v22;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_EventInfoShipProgressDrawComponent__EasingMove_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  Il2CppObject *Component_object; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  _BOOL4 isFadeIn; // w22
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v16; // x3
  float v17; // s11
  float v18; // s10
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  System_String_o **v21; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2E5A9 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_23655/*"ship_fade_out"*/);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)sub_1C94098(&StringLiteral_23654/*"ship_fade_in"*/);
    byte_4D2E5A9 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
    if ( !this )
      goto LABEL_29;
    SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_4__this,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Object__op_Inequality(
                                                                                      (UnityEngine_Object_o *)Component_object,
                                                                                      0,
                                                                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      isFadeIn = v2->fields.isFadeIn;
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                        (UnityEngine_Component_o *)_4__this,
                                                                                        0);
      if ( !this )
        goto LABEL_29;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      x = localPosition.fields.x;
      if ( isFadeIn )
      {
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
        if ( !Component_object )
          goto LABEL_29;
        GameObjectExtensions__SetLocalPosition_36798916(
          (UnityEngine_GameObject_o *)this,
          x,
          y - *((float *)&Component_object[3].monitor + 1),
          z,
          0);
      }
      else
      {
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
        if ( !this )
          goto LABEL_29;
        v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        if ( !Component_object )
          goto LABEL_29;
        v17 = *((float *)&Component_object[3].monitor + 1);
        v18 = v23.fields.y;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
        if ( !this )
          goto LABEL_29;
        v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        z = v24.fields.z;
        y = v18 + v17;
      }
      v25.fields.x = x;
      v25.fields.y = y;
      v25.fields.z = z;
      EventInfoUISlideAnimation__StartSlideAnim_45250920(
        (EventInfoUISlideAnimation_o *)Component_object,
        0,
        v25,
        isFadeIn,
        v16);
    }
    if ( v2->fields.isWait )
    {
      v2->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C9403C(p__2__current, 0, v6, v7, v8, v9, v10, v11);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
LABEL_22:
    if ( v2->fields.isFadeIn )
      v21 = (System_String_o **)&StringLiteral_23654/*"ship_fade_in"*/;
    else
      v21 = (System_String_o **)&StringLiteral_23655/*"ship_fade_out"*/;
    if ( _4__this )
    {
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
      if ( this )
      {
        SimpleAnimation__Play_67362784((SimpleAnimation_o *)this, *v21, 0);
        return 0;
      }
    }
LABEL_29:
    sub_1C942F0(this, method);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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