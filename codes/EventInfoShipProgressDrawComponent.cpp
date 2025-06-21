void __fastcall EventInfoShipProgressDrawComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B1DA77 & 1) == 0 )
  {
    sub_1BCAFF8(&EventInfoShipProgressDrawComponent_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_10678/*"ProgressShipData_"*/, v4);
    byte_4B1DA77 = 1;
  }
  EventInfoShipProgressDrawComponent_TypeInfo->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = (struct System_String_o *)StringLiteral_10678/*"ProgressShipData_"*/;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)EventInfoShipProgressDrawComponent_TypeInfo->static_fields,
    StringLiteral_10678/*"ProgressShipData_"*/,
    v2,
    v3);
}


void __fastcall EventInfoShipProgressDrawComponent___ctor(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__Awake(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  int max_length; // w8
  int v4; // w9

  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    sub_1BCB254(this, method);
  max_length = progressPathMesh->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall EventInfoShipProgressDrawComponent__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  __int64 v28; // x1
  EventInfoShipProgressDrawComponent_c *v29; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v31; // x1
  System_String_o *v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v38; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B1DA74 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__, v1);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventDetailMaster___, v2);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__, v6);
    sub_1BCAFF8(&EventInfoShipProgressDrawComponent_TypeInfo, v7);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4B1DA74 = 1;
  }
  v38 = 0;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_1BCB254(Master_object, v12);
  }
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_19;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_19:
      v24 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      v27 = *(_DWORD *)(v25 + 16);
      v38 = v27;
      if ( !v14 )
        sub_1BCB254(v25, v26);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v14,
             &entity,
             v27,
             (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1BCB254(0LL, v28);
        if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
        {
          v29 = EventInfoShipProgressDrawComponent_TypeInfo;
          if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
            v29 = EventInfoShipProgressDrawComponent_TypeInfo;
          }
          SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v29->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
          v31 = System_Int32__ToString((int32_t)&v38, 0LL);
          v32 = System_String__Concat_62450424(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v31, 0LL);
          UnityEngine_PlayerPrefs__DeleteKey(v32, 0LL);
        }
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_33;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_33:
    v36 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
}


System_Collections_IEnumerator_o *__fastcall EventInfoShipProgressDrawComponent__EasingMove(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        float endRate,
        float moveRate,
        const MethodInfo *method)
{
  __int64 v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B1DA70 & 1) == 0 )
  {
    sub_1BCAFF8(&EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo, endAction);
    byte_4B1DA70 = 1;
  }
  v9 = sub_1BCB244(EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 48) = endAction;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 48), (int32_t)endAction, v12, v13);
  *(float *)(v9 + 40) = moveRate;
  *(float *)(v9 + 44) = endRate;
  return (System_Collections_IEnumerator_o *)v9;
}


bool __fastcall EventInfoShipProgressDrawComponent__HasSaveData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  EventInfoShipProgressDrawComponent_c *v3; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0

  v2 = (int)this;
  if ( (byte_4B1DA75 & 1) == 0 )
  {
    sub_1BCAFF8(&EventInfoShipProgressDrawComponent_TypeInfo, method);
    byte_4B1DA75 = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString(v2 + 124, 0LL);
  v6 = System_String__Concat_62450424(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__LoadProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventInfoShipProgressDrawComponent_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *String; // x20
  void *IsNullOrEmpty; // x0
  __int64 v10; // x1
  int v11; // w8
  void *v12; // x20
  float v13; // s8
  int v14; // w21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  float v18; // s9
  float v19; // s10
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1DA73 & 1) == 0 )
  {
    sub_1BCAFF8(&EventInfoShipProgressDrawComponent_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v3);
    byte_4B1DA73 = 1;
  }
  v4 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v4 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v4->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v6 = System_Int32__ToString((int)this + 124, 0LL);
  v7 = System_String__Concat_62450424(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v6, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !String )
      goto LABEL_19;
    IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_19;
    v11 = *((_DWORD *)IsNullOrEmpty + 6);
    v12 = IsNullOrEmpty;
    v13 = 0.0;
    if ( v11 < 1 )
    {
      v19 = 0.0;
      v18 = 0.0;
    }
    else
    {
      v14 = v11 & ~(v11 >> 31);
      v18 = System_Single__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0LL);
      if ( v14 < 2 )
      {
        v19 = 0.0;
      }
      else
      {
        if ( *((_DWORD *)v12 + 6) <= 1u )
          goto LABEL_20;
        v19 = System_Single__Parse(*((System_String_o **)v12 + 5), 0LL);
        if ( v14 < 3 )
          goto LABEL_16;
        if ( *((_DWORD *)v12 + 6) <= 2u )
LABEL_20:
          sub_1BCB25C(v15, v16, v17);
        v13 = System_Single__Parse(*((System_String_o **)v12 + 6), 0LL);
      }
    }
LABEL_16:
    IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( IsNullOrEmpty )
    {
      v20.fields.z = 0.0;
      v20.fields.x = v18;
      v20.fields.y = v19;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v20, 0LL);
      this->fields.startRate = v13;
      return;
    }
LABEL_19:
    sub_1BCB254(IsNullOrEmpty, v10);
  }
}


void __fastcall EventInfoShipProgressDrawComponent__OnDestroy(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.progressPathMesh = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.progressPathMesh, 0, v2, v3);
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v2; // x19
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v5; // x19
  System_String_o *name; // x1

  v2 = this;
  if ( (byte_4B1DA71 & 1) == 0 )
  {
    this = (EventInfoShipProgressDrawComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1DA71 = 1;
  }
  progressShipAnim = v2->fields.progressShipAnim;
  if ( !progressShipAnim )
    goto LABEL_11;
  monitor = (UnityEngine_Object_o *)progressShipAnim[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.progressShipAnim;
    if ( v5 )
    {
      this = (EventInfoShipProgressDrawComponent_o *)v5[1].monitor;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        SimpleAnimation__Play_65395744(v5, name, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1BCB254(this, method);
  }
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v9; // x21
  System_String_o *name; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  __int64 TotalPoint; // x23
  __int64 NextPoint; // x22
  float v14; // s0
  float startRate; // s9
  float v16; // s8
  const MethodInfo *v17; // x2
  float moveAnimTime; // s10
  int v19; // w21
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  System_Collections_IEnumerator_o *v21; // x0
  const MethodInfo *v22; // x1

  v4 = this;
  if ( (byte_4B1DA6F & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, endAction);
    sub_1BCAFF8(&System_Math_TypeInfo, v5);
    this = (EventInfoShipProgressDrawComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B1DA6F = 1;
  }
  if ( v4->fields.progressData )
  {
    progressShipAnim = v4->fields.progressShipAnim;
    if ( !progressShipAnim )
      goto LABEL_24;
    monitor = (UnityEngine_Object_o *)progressShipAnim[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v4->fields.progressShipAnim;
      if ( !v9 )
        goto LABEL_24;
      this = (EventInfoShipProgressDrawComponent_o *)v9[1].monitor;
      if ( !this )
        goto LABEL_24;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (EventInfoShipProgressDrawComponent_o *)SimpleAnimation__IsPlaying(v9, name, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (EventInfoShipProgressDrawComponent_o *)v4->fields.progressShipAnim;
        if ( !this )
          goto LABEL_24;
        SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
      }
    }
    progressData = v4->fields.progressData;
    if ( progressData )
    {
      TotalPoint = progressData->fields.TotalPoint;
      NextPoint = progressData->fields.NextPoint;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v14 = System_Math__Min_63972828((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
      startRate = v4->fields.startRate;
      v16 = v14;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Application__get_targetFrameRate(0LL);
      moveAnimTime = v4->fields.moveAnimTime;
      v19 = (int)this;
      if ( v16 < 1.0 )
        goto LABEL_22;
      pointRiverProgressCtr = v4->fields.pointRiverProgressCtr;
      if ( pointRiverProgressCtr )
      {
        this = (EventInfoShipProgressDrawComponent_o *)pointRiverProgressCtr->fields.maskPanel;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_22:
          v21 = EventInfoShipProgressDrawComponent__EasingMove(
                  v4,
                  endAction,
                  v16,
                  (float)(v16 - startRate) / (float)(moveAnimTime * (float)v19),
                  v17);
          UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)v4, v21, 0LL);
          EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(v4, v22);
          return;
        }
      }
    }
LABEL_24:
    sub_1BCB254(this, endAction);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
        EventInfoShipProgressDrawComponent_o *this,
        bool isFadeIn,
        bool isWait,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B1DA72 & 1) == 0 )
  {
    sub_1BCAFF8(&EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo, isFadeIn);
    byte_4B1DA72 = 1;
  }
  v7 = isWait;
  v8 = sub_1BCB244(EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 32), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 40) = isFadeIn;
  *(_BYTE *)(v8 + 41) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall EventInfoShipProgressDrawComponent__ResetShip(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  Custom2dSplineMesh_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v9; // x9
  __int64 v10; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 v14; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v15; // x9
  struct Custom2dSplineMesh_array *v16; // x8
  __int64 v17; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)progressData_, (int32_t)method, v3);
  v9 = *p_progressData;
  *((_DWORD *)p_progressData + 2) = 0;
  if ( !v9 )
    goto LABEL_14;
  v10 = (__int64)*(p_progressData - 4);
  if ( !v10 )
    goto LABEL_14;
  ReleaseScenarioIndex = v9->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= *(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  v6 = *(Custom2dSplineMesh_o **)(v10 + 8 * ReleaseScenarioIndex + 32);
  if ( !v6 )
    goto LABEL_14;
  Custom2dSplineMesh__CreateMesh(v6, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_14;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_14;
  v14 = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v14 >= progressPathMesh->max_length )
    goto LABEL_15;
  v6 = progressPathMesh->m_Items[v14];
  if ( !v6
    || (Custom2dSplineMesh__SetPathRate(v6, this->fields.startRate, 0LL), (v15 = this->fields.progressData) == 0LL)
    || (v16 = this->fields.progressPathMesh) == 0LL )
  {
LABEL_14:
    sub_1BCB254(v6, v7);
  }
  v17 = v15->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v17 >= v16->max_length )
LABEL_15:
    sub_1BCB25C(v6, v7, v8);
  v6 = v16->m_Items[v17];
  if ( !v6 )
    goto LABEL_14;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v6, this->fields.startRate, 0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v24, 0LL);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v22);
}


void __fastcall EventInfoShipProgressDrawComponent__SaveProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Text_StringBuilder_o *v5; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  float v8; // s0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  EventInfoShipProgressDrawComponent_c *v11; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  System_String_o *v15; // x0
  float startRate; // [xsp+Ch] [xbp-44h] BYREF
  float x; // [xsp+10h] [xbp-40h] BYREF
  _DWORD v18[15]; // [xsp+14h] [xbp-3Ch] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1DA76 & 1) == 0 )
  {
    sub_1BCAFF8(&EventInfoShipProgressDrawComponent_TypeInfo, method);
    sub_1BCAFF8(&System_Text_StringBuilder_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v4);
    byte_4B1DA76 = 1;
  }
  startRate = 0.0;
  v5 = (System_Text_StringBuilder_o *)sub_1BCB244(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        x = localPosition.fields.x,
        v18[0] = LODWORD(localPosition.fields.y),
        v18[1] = LODWORD(localPosition.fields.z),
        transform = (UnityEngine_Transform_o *)System_Single__ToString(localPosition.fields.x, (const MethodInfo *)&x),
        !v5) )
  {
    sub_1BCB254(transform, v7);
  }
  System_Text_StringBuilder__Append_62534368(v5, (System_String_o *)transform, 0LL);
  System_Text_StringBuilder__Append_62534368(v5, (System_String_o *)StringLiteral_1448/*":"*/, 0LL);
  v9 = System_Single__ToString(v8, (const MethodInfo *)v18);
  System_Text_StringBuilder__Append_62534368(v5, v9, 0LL);
  System_Text_StringBuilder__Append_62534368(v5, (System_String_o *)StringLiteral_1448/*":"*/, 0LL);
  startRate = this->fields.startRate;
  v10 = System_Single__ToString(startRate, (const MethodInfo *)&startRate);
  System_Text_StringBuilder__Append_62534368(v5, v10, 0LL);
  v11 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v11 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v11->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v13 = System_Int32__ToString((int)this + 124, 0LL);
  v14 = System_String__Concat_62450424(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v13, 0LL);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v5->klass->vtable._3_ToString.method)(
                             v5,
                             v5->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v14, v15, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__SetActive(
        EventInfoShipProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoShipProgressDrawComponent__Setup(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_o *inputPointRiverProgressCtr,
        int32_t inputEventId,
        bool isReset,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  struct EventInfoPointRiverProgressControl_o **p_pointRiverProgressCtr; // x22
  UnityEngine_Object_o *pointRiverProgressCtr; // x23
  Custom2dSplineMesh_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x22
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x8
  __int64 TotalPoint; // x20
  __int64 NextPoint; // x21
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v28; // x9
  struct Custom2dSplineMesh_array *v29; // x8
  __int64 v30; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v31; // x9
  struct Custom2dSplineMesh_array *v32; // x8
  __int64 v33; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v38; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1DA6E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, inputPointRiverProgressCtr);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v10);
    byte_4B1DA6E = 1;
  }
  this->fields.pointRiverProgressCtr = inputPointRiverProgressCtr;
  p_pointRiverProgressCtr = &this->fields.pointRiverProgressCtr;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.pointRiverProgressCtr,
    (int32_t)inputPointRiverProgressCtr,
    inputEventId,
    (const MethodInfo *)isReset);
  pointRiverProgressCtr = (UnityEngine_Object_o *)this->fields.pointRiverProgressCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = (Custom2dSplineMesh_o *)UnityEngine_Object__op_Equality(pointRiverProgressCtr, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
    return;
  if ( !*p_pointRiverProgressCtr )
    goto LABEL_40;
  progressData = (*p_pointRiverProgressCtr)->fields.progressData;
  if ( !progressData )
    return;
  this->fields.progressData = progressData;
  p_progressData = &this->fields.progressData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)progressData, v15, v16);
  this->fields.eventId = inputEventId;
  EventInfoShipProgressDrawComponent__LoadProgressData(this, v19);
  v21 = this->fields.progressData;
  if ( isReset )
  {
    if ( !v21 )
      goto LABEL_40;
    goto LABEL_25;
  }
  if ( !v21 )
    goto LABEL_40;
  if ( !v21->fields.IsFreeQuestClear )
  {
LABEL_25:
    if ( v21->fields.OldTotalPoint == v21->fields.TotalPoint )
      this->fields.startRate = 0.0;
    goto LABEL_27;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B1AFE4 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v14);
    byte_4B1AFE4 = 1;
  }
  v13 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)&v13->fields.vtxIdx + 474LL) )
  {
    v22 = *p_progressData;
    if ( !*p_progressData )
      goto LABEL_40;
    TotalPoint = v22->fields.TotalPoint;
    NextPoint = v22->fields.NextPoint;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.startRate = System_Math__Min_63972828((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
  }
LABEL_27:
  v25 = this->fields.progressData;
  if ( !v25 )
    goto LABEL_40;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_40;
  ReleaseScenarioIndex = v25->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressPathMesh->max_length )
    goto LABEL_41;
  v13 = progressPathMesh->m_Items[ReleaseScenarioIndex];
  if ( !v13 )
    goto LABEL_40;
  Custom2dSplineMesh__CreateMesh(v13, 0LL);
  v28 = this->fields.progressData;
  if ( !v28 )
    goto LABEL_40;
  v29 = this->fields.progressPathMesh;
  if ( !v29 )
    goto LABEL_40;
  v30 = v28->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v30 >= v29->max_length )
    goto LABEL_41;
  v13 = v29->m_Items[v30];
  if ( !v13
    || (Custom2dSplineMesh__SetPathRate(v13, this->fields.startRate, 0LL), (v31 = this->fields.progressData) == 0LL)
    || (v32 = this->fields.progressPathMesh) == 0LL )
  {
LABEL_40:
    sub_1BCB254(v13, v14);
  }
  v33 = v31->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v33 >= v32->max_length )
LABEL_41:
    sub_1BCB25C(v13, v14, v20);
  v13 = v32->m_Items[v33];
  if ( !v13 )
    goto LABEL_40;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v13, this->fields.startRate, 0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v40, 0LL);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v38);
}


void __fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13___ctor(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13__MoveNext(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  int v6; // w21
  int32_t i_5__2; // w8
  UnityEngine_GameObject_o *targetFrameRate; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  float v11; // s0
  int v12; // w8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppClass **v16; // x8
  Custom2dSplineMesh_o *v17; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v21; // s11
  float v22; // s12
  float v23; // s13
  bool v24; // w22
  UITweener_o *v25; // x23
  Il2CppObject **p__2__current; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  const MethodInfo *v30; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1DA78 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v3);
    byte_4B1DA78 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    v6 = i_5__2 + 1;
    this->fields._i_5__2 = i_5__2 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v6 = 0;
    this->fields.__1__state = -1;
    this->fields._i_5__2 = 0;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (UnityEngine_GameObject_o *)UnityEngine_Application__get_targetFrameRate(0LL);
  if ( !_4__this )
LABEL_26:
    sub_1BCB254(targetFrameRate, v9);
  v11 = _4__this->fields.moveAnimTime * (float)(int)targetFrameRate;
  v12 = (int)v11;
  if ( v11 == INFINITY )
    v12 = 0x80000000;
  if ( v6 >= v12 )
  {
    pointRiverProgressCtr = _4__this->fields.pointRiverProgressCtr;
    _4__this->fields.startRate = this->fields.endRate;
    if ( !pointRiverProgressCtr )
      goto LABEL_26;
    targetFrameRate = pointRiverProgressCtr->fields.maskPanel;
    if ( !targetFrameRate )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(targetFrameRate, 0, 0LL);
    EventInfoShipProgressDrawComponent__SaveProgressData(_4__this, v30);
    ActionExtensions__Call(this->fields.endAction, 0LL);
    return 0;
  }
  progressData = _4__this->fields.progressData;
  if ( !progressData )
    goto LABEL_26;
  progressPathMesh = _4__this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_26;
  ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressPathMesh->max_length )
    sub_1BCB25C(targetFrameRate, v9, v10);
  v16 = &progressPathMesh->obj.klass + ReleaseScenarioIndex;
  v17 = (Custom2dSplineMesh_o *)v16[4];
  if ( !v17 )
    goto LABEL_26;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                          (Custom2dSplineMesh_o *)v16[4],
                          _4__this->fields.startRate,
                          0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  v33 = Custom2dSplineMesh__GetPointAsWorldFlatten(v17, _4__this->fields.startRate + this->fields.moveRate, 0LL);
  v21 = v33.fields.x;
  v22 = v33.fields.y;
  v23 = v33.fields.z;
  targetFrameRate = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)_4__this,
                                                  0LL);
  if ( !targetFrameRate )
    goto LABEL_26;
  targetFrameRate = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetFrameRate, 0LL);
  if ( !targetFrameRate )
    goto LABEL_26;
  targetFrameRate = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                  targetFrameRate,
                                                  (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  if ( !targetFrameRate )
    goto LABEL_26;
  v24 = 1;
  v25 = (UITweener_o *)targetFrameRate;
  *(float *)&targetFrameRate[5].monitor = x;
  *((float *)&targetFrameRate[5].monitor + 1) = y;
  *(float *)&targetFrameRate[5].fields.m_CachedPtr = z;
  *((float *)&targetFrameRate[5].fields + 1) = v21;
  LOBYTE(targetFrameRate[6].monitor) = 1;
  *(float *)&targetFrameRate[6].klass = v22;
  *((float *)&targetFrameRate[6].klass + 1) = v23;
  *(float *)&targetFrameRate[2].monitor = UnityEngine_Time__get_deltaTime(0LL);
  v25->fields.method = 0;
  UITweener__PlayForward(v25, 0LL);
  Custom2dSplineMesh__SetPathRate(v17, _4__this->fields.startRate, 0LL);
  _4__this->fields.startRate = _4__this->fields.startRate + this->fields.moveRate;
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, 0, v27, v28);
  *((_DWORD *)p__2__current - 2) = 1;
  return v24;
}


Il2CppObject *__fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_IEnumerator_Reset(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_EventInfoShipProgressDrawComponent__EasingMove_d__13_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_IEnumerator_get_Current(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13__System_IDisposable_Dispose(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15___ctor(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__MoveNext(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  Il2CppObject *Component_object; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _BOOL4 isFadeIn; // w22
  float v12; // s1
  float v13; // s2
  float v14; // s0
  float v15; // s8
  float v16; // s10
  float z; // s9
  float v18; // s1
  float v19; // s11
  float v20; // s10
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_String_o **v23; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B1DA79 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_23223/*"ship_fade_out"*/, v4);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)sub_1BCAFF8(
                                                                                      &StringLiteral_23222/*"ship_fade_in"*/,
                                                                                      v5);
    byte_4B1DA79 = 1;
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
    SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_4__this,
                         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Object__op_Inequality(
                                                                                      (UnityEngine_Object_o *)Component_object,
                                                                                      0LL,
                                                                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      isFadeIn = v2->fields.isFadeIn;
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                        (UnityEngine_Component_o *)_4__this,
                                                                                        0LL);
      if ( !this )
        goto LABEL_29;
      *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v15 = v14;
      if ( isFadeIn )
      {
        v16 = v12;
        z = v13;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !Component_object )
          goto LABEL_29;
        GameObjectExtensions__SetLocalPosition_35356952(
          (UnityEngine_GameObject_o *)this,
          v15,
          v16 - *((float *)&Component_object[3].monitor + 1),
          z,
          0LL);
      }
      else
      {
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_29;
        *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !Component_object )
          goto LABEL_29;
        v19 = *((float *)&Component_object[3].monitor + 1);
        v20 = v18;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_29;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        z = localPosition.fields.z;
        v16 = v20 + v19;
      }
      v25.fields.x = v15;
      v25.fields.y = v16;
      v25.fields.z = z;
      EventInfoUISlideAnimation__StartSlideAnim_43941764(
        (EventInfoUISlideAnimation_o *)Component_object,
        0LL,
        v25,
        isFadeIn,
        0LL);
    }
    if ( v2->fields.isWait )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(p__2__current, 0, v9, v10);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_22:
    if ( v2->fields.isFadeIn )
      v23 = (System_String_o **)&StringLiteral_23222/*"ship_fade_in"*/;
    else
      v23 = (System_String_o **)&StringLiteral_23223/*"ship_fade_out"*/;
    if ( _4__this )
    {
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
      if ( this )
      {
        SimpleAnimation__Play_65395744((SimpleAnimation_o *)this, *v23, 0LL);
        return 0;
      }
    }
LABEL_29:
    sub_1BCB254(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_IEnumerator_Reset(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_IEnumerator_get_Current(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_IDisposable_Dispose(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  ;
}