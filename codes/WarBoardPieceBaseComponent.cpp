void WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2E1DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&StringLiteral_6894/*"Frame{0}"*/);
    byte_4D2E1DE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.listEffectData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_D00A30;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_D02160;
  this->fields.lengthMoveAttack = 25.0;
  v10 = StringLiteral_6894/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6894/*"Frame{0}"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseFrameName, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.removeTweenTargetObjects,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardPieceBaseComponent__AddDeadMoveTask(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Vector3_o originalPos,
        int32_t squareIndex,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  float pixelPerSecond; // s13
  WarBoardMovePerformance_o *v16; // x0
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v28; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v29; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_4D2E1D5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardMovePerformance_TypeInfo);
    byte_4D2E1D5 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  pieceData = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                       (WarBoardManager_o *)pieceData,
                                       30,
                                       PieceEventVals,
                                       0);
  if ( !v9 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)pieceData,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v16 = (WarBoardMovePerformance_o *)sub_1C93D20(WarBoardMovePerformance_TypeInfo);
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  v17 = (Il2CppObject *)v16;
  WarBoardMovePerformance___ctor(v16, gameObject, v32, SquarePosition, pixelPerSecond, 0, 0);
  items = v9->fields._items;
  v25 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v17,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v17;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v28 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v28,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v29 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v29,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v9,
                                             (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_1C93D2C(pieceData, v10);
  }
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)pieceData, 0);
}


void WarBoardPieceBaseComponent__ChangeCriticalStars(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__ChangeStatus(
        WarBoardPieceBaseComponent_o *this,
        bool isBreak,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__ClickIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x21
  struct WarBoardSeSetting_o *seSetting; // x8
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v11; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct WarBoardPieceData_o *v15; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x21
  struct WarBoardSeSetting_o *v18; // x8
  struct WarBoardPieceData_o *v19; // x8
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x21
  struct WarBoardSeSetting_o *v22; // x8
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x19
  struct WarBoardSeSetting_o *v25; // x8

  if ( (byte_4D2E1C6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent_ClickIcon__);
    byte_4D2E1C6 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  controllType_k__BackingField = Instance->fields._controllType_k__BackingField;
  v6 = Instance;
  if ( controllType_k__BackingField == 1 )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_41;
    if ( pieceData->fields._isEditing_k__BackingField )
    {
      v13 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C93AEC(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      v15 = this->fields.pieceData;
      if ( v15 )
      {
        WarBoardManager__SquareSelect(v6, v15->fields._nowSquareIndex_k__BackingField, 0);
        methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
        v11 = this->klass->vtable._14_EditPiece.method;
        goto LABEL_33;
      }
LABEL_41:
      sub_1C93D2C(Instance, v4);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0) )
    {
      v7 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C93AEC(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v8, seSetting->fields.DeselectSe, 0, 0);
          WarBoardManager__DeselectPiece(v6, 1, 0, 0);
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
          v11 = this->klass->vtable._13_HideStatus.method;
LABEL_33:
          ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))methodPtr)(this, v11);
          return;
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__get_isSelectedPiece(v6, 0) && this->fields.isSelectable )
    {
      v16 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1C93AEC(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v16, v16[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v18 = Instance->fields.seSetting;
        if ( v18 )
        {
          Instance = (WarBoardManager_o *)OverwriteAssetSoundName__PlaySe(v17, v18->fields.SelectSe, 0, 0);
          v19 = this->fields.pieceData;
          if ( v19 )
          {
            WarBoardManager__SelectedPieceAction(v6, v19->fields._nowSquareIndex_k__BackingField, 0);
            return;
          }
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__IsNowTurn(v6, this->fields.pieceData, 0) )
    {
      v20 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1C93AEC(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v20, v20[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v22 = Instance->fields.seSetting;
        if ( v22 )
        {
          OverwriteAssetSoundName__PlaySe(v21, v22->fields.SelectSe, 0, 0);
          WarBoardManager__SelectPiece(v6, this->fields.pieceData, 0);
          methodPtr = this->klass->vtable._12_ShowStatus.methodPtr;
          v11 = this->klass->vtable._12_ShowStatus.method;
          goto LABEL_33;
        }
      }
      goto LABEL_41;
    }
  }
  if ( (((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._12_ShowStatus.methodPtr)(
          this,
          this->klass->vtable._12_ShowStatus.method)
      & 1) != 0 )
  {
    v23 = Method_WarBoardPieceBaseComponent_ClickIcon__;
    if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1C93AEC(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v24 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v23, v23[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v25 = Instance->fields.seSetting;
    if ( !v25 )
      goto LABEL_41;
    OverwriteAssetSoundName__PlaySe(v24, v25->fields.OpenSimpleInfoSe, 0, 0);
  }
}


void WarBoardPieceBaseComponent__CreateEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v12; // x21
  Il2CppObject *v13; // x22
  WarBoardCommonEffectPerformance_o *v14; // x0
  Il2CppObject *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Nullable_Vector3__o v26; // 0:x3.16
  System_Nullable_Vector3__o v27; // 0:x5.16

  if ( (byte_4D2E1DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1C93AD4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_4D2E1DB = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_328DCE4 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v12, 0, 0) )
      v12 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__52629400(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v12,
            (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    v14 = (WarBoardCommonEffectPerformance_o *)sub_1C93D20(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v26.fields.hasValue = 0;
    *(_QWORD *)&v26.fields.value.fields.y = 0;
    *(_QWORD *)&v27.fields.hasValue = 0;
    *(_QWORD *)&v27.fields.value.fields.y = 0;
    v15 = (Il2CppObject *)v14;
    WarBoardCommonEffectPerformance___ctor(
      v14,
      0,
      (UnityEngine_GameObject_o *)v13,
      v26,
      v27,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0);
    if ( v7 )
    {
      items = v7->fields._items;
      v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v15,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v25 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v15;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v7,
              (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_38679444(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v7,
            0);
          return;
        }
      }
    }
LABEL_21:
    sub_1C93D2C(Instance, v9);
  }
}


void WarBoardPieceBaseComponent__CreateEffectText(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDamageBaseObject; // x20
  System_Collections_Generic_List_object__o *v10; // x20
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v12; // x1
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v14; // x22
  WarBoardCommonEffectPerformance_o *v15; // x0
  Il2CppObject *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Nullable_Vector3__o v27; // 0:x3.16
  System_Nullable_Vector3__o v28; // 0:x5.16

  if ( (byte_4D2E1DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardCommonEffectPerformance_TypeInfo);
    byte_4D2E1DC = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0, effectDamageBaseObject, 0) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    effectDamageBaseLabel = (UnityEngine_Object_o *)this->fields.effectDamageBaseLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(effectDamageBaseLabel, 0, 0) )
    {
      Instance = this->fields.effectDamageBaseLabel;
      if ( !Instance )
        goto LABEL_19;
      UILabel__set_text(Instance, popText, 0);
    }
    v14 = this->fields.effectDamageBaseObject;
    v15 = (WarBoardCommonEffectPerformance_o *)sub_1C93D20(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v27.fields.hasValue = 0;
    *(_QWORD *)&v27.fields.value.fields.y = 0;
    *(_QWORD *)&v28.fields.hasValue = 0;
    *(_QWORD *)&v28.fields.value.fields.y = 0;
    v16 = (Il2CppObject *)v15;
    WarBoardCommonEffectPerformance___ctor(v15, 0, v14, v27, v28, (System_Nullable_Vector3__o)0, 0, 0, 0, 0);
    if ( v10 )
    {
      items = v10->fields._items;
      v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v10->fields._version;
      if ( items )
      {
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v16,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v26 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v16;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v10,
              (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_38679444(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
            0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C93D2C(Instance, v12);
  }
}


void WarBoardPieceBaseComponent__EditPiece(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Transform_o *WarBoardPieceBaseComponent__GetEffectDisplayTransform(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


UnityEngine_Vector3_o WarBoardPieceBaseComponent__GetIconLocalPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->zeroVector.fields.x;
  result.fields.y = static_fields->zeroVector.fields.y;
  result.fields.z = static_fields->zeroVector.fields.z;
  return result;
}


UnityEngine_Vector3_o WarBoardPieceBaseComponent__GetIconPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->zeroVector.fields.x;
  result.fields.y = static_fields->zeroVector.fields.y;
  result.fields.z = static_fields->zeroVector.fields.z;
  return result;
}


System_Int32_array *WarBoardPieceBaseComponent__GetParticipantVals(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x20
  System_Collections_Generic_IEnumerable_TSource__o *PieceEventVals; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  long double inited; // q0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *m_CachedPtr; // x19
  WarBoardPieceBaseComponent___c_c *v15; // x0
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v17; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  v4 = this;
  if ( (byte_4D2E1CF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C93AD4(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4D2E1CF = 1;
  }
  if ( !targetPiece )
    goto LABEL_28;
  if ( WarBoardPieceData__get_isMaster(targetPiece, 0) )
  {
    this = (WarBoardPieceBaseComponent_o *)v4->fields.pieceData;
    if ( this )
    {
      PieceEventVals = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                              (WarBoardPieceData_o *)this,
                                                                              0);
      v6 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(targetPiece, 0);
      v7 = System_Linq_Enumerable__Concat_int_(
             PieceEventVals,
             v6,
             (const MethodInfo_31C09E4 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v7,
               (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_1C93D2C(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)*((_QWORD *)this + 55);
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)WarBoardData__LoadBattleParticipantInfo((WarBoardData_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  if ( !LOBYTE(this->fields.m_CancellationTokenSource) )
  {
    m_CachedPtr = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.m_CachedPtr;
    v15 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v15 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    _9__62_0 = (System_Func_object__object__o *)v15->static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = WarBoardPieceBaseComponent___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__62_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__62_0,
        v17,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__62_0,
        (int32_t)_9__62_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                m_CachedPtr,
                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                (const MethodInfo_31DD360 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v7,
             (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C69B68(inited);
  return **(System_Int32_array ***)(v12 + 184);
}


WarBoardSimpleAnimationPerformance_o *WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4D2E1D7 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4D2E1D7 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1C93D20(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0);
  return v6;
}


void WarBoardPieceBaseComponent__HideActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_4D2E1C8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E1C8 = 1;
  }
  currentActionPointRoot = this->fields.currentActionPointRoot;
  if ( !currentActionPointRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0);
  currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0, 0) )
  {
    currentActionPointRoot = this->fields.currentPieceActionPointRoot;
    if ( currentActionPointRoot )
    {
      UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0);
      goto LABEL_9;
    }
LABEL_10:
    sub_1C93D2C(currentActionPointRoot, method);
  }
LABEL_9:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
}


void WarBoardPieceBaseComponent__HideActionTarget(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_1C93D2C(0, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0);
}


void WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_4D2E1CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4D2E1CB = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C69B68(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_1C93D2C(0, method);
  WarBoardManager__HideSimplePopup(v5, 0, 0);
}


void WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
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
  UnityEngine_Transform_o *transform; // x21
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v22; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Object_c **v30; // x25
  unsigned __int64 v31; // x29
  float v32; // s8
  __int64 v33; // x23
  int v34; // w26
  float v35; // s9
  __int64 v36; // x27
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v38; // x0
  UnityEngine_Object_c *v39; // x8
  UnityEngine_Object_c **v40; // x21
  UnityEngine_Transform_o *v41; // x25
  UnityEngine_GameObject_o *v42; // x25
  WarBoardBreakPointComponent_o *v43; // x24
  struct UIWidget_o *breakPointParent; // x8
  int32_t mDepth; // w28
  bool isMaster; // w25
  const MethodInfo *v47; // x6
  unsigned int *v48; // x25
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  const MethodInfo *v55; // x3
  struct WarBoardBreakPointComponent_array *v56; // x8
  float maxSpacing; // s0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  UnityEngine_Transform_array *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  UnityEngine_Transform_o *v71; // x22
  const MethodInfo *v72; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v77; // x21
  UnityEngine_Object_o *v78; // x22
  Il2CppObject *v79; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  UnityEngine_Object_o *v87; // x21
  Il2CppObject *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  __int64 v95; // x0
  __int64 v96; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E1C2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&UnityEngine_Transform___TypeInfo);
    sub_1C93AD4(&WarBoardBreakPointComponent___TypeInfo);
    sub_1C93AD4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C93AD4(&StringLiteral_23437/*"root_text/type01/dm_base"*/);
    sub_1C93AD4(&StringLiteral_19002/*"ef_dm_base"*/);
    byte_4D2E1C2 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.pieceData = pieceData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.pieceData, (int32_t)pieceData, v14, v15, v16, v17, v18, v19);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_26;
  if ( !gameObject )
    goto LABEL_26;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  breakPointMax_k__BackingField = (unsigned int)pieceData->fields._breakPointMax_k__BackingField;
  v22 = (struct WarBoardBreakPointComponent_array *)sub_1C93B7C(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v22;
  p_breakPoints = &this->fields.breakPoints;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.breakPoints, (int32_t)v22, v24, v25, v26, v27, v28, v29);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_26;
  v30 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v31 = 0;
    v32 = 0.0;
    v33 = 1;
    v34 = 2 * breakPointMax_k__BackingField - 2;
    v35 = (float)*(int *)(gameObject + 168) / (float)(int)breakPointMax_k__BackingField;
    v36 = 8;
    v96 = breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      v39 = *v30;
      v40 = v30;
      v41 = v38;
      if ( !v39->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v39);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__52629400(
                              breakPointPrefab,
                              v41,
                              (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
      if ( !gameObject )
        goto LABEL_26;
      v42 = (UnityEngine_GameObject_o *)gameObject;
      v43 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v42, 0);
      if ( !gameObject )
        goto LABEL_26;
      v97.fields.y = 0.0;
      v97.fields.z = 0.0;
      v97.fields.x = v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v97, 0);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      mDepth = breakPointParent->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0);
      if ( !v43 )
        goto LABEL_26;
      WarBoardBreakPointComponent__Initialize(v43, v34 + mDepth, v33, isMaster, gameObject & 1, 0, v47);
      v48 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      gameObject = sub_1C93C10(v43, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
      if ( !gameObject )
        goto LABEL_57;
      if ( v31 >= v48[6] )
        goto LABEL_56;
      *(_QWORD *)&v48[v36] = v43;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v48[v36], (int32_t)v43, v49, v50, v51, v52, v53, v54);
      v56 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      if ( v31 >= LODWORD(v56->max_length) )
        goto LABEL_56;
      v30 = v40;
      gameObject = *(__int64 *)((char *)&v56->obj.klass + v36 * 4);
      if ( !gameObject )
        goto LABEL_26;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v31 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v55);
      if ( v96 == v33 )
        break;
      maxSpacing = v43->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      ++v31;
      v34 -= 2;
      if ( maxSpacing >= v35 )
        maxSpacing = v35;
      ++v33;
      v32 = v32 + maxSpacing;
      v36 += 2;
      if ( !gameObject )
        goto LABEL_26;
    }
  }
  gameObject = (__int64)this->fields.selectObject;
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._10_UpdateDisplayActionCount.methodPtr)(
    this,
    this->klass->vtable._10_UpdateDisplayActionCount.method);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._9_HideActionCount.methodPtr)(
    this,
    this->klass->vtable._9_HideActionCount.method);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._17_ChangeCriticalStars.methodPtr)(
    this,
    this->klass->vtable._17_ChangeCriticalStars.method);
  pieceData->fields.pieceComponent = this;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&pieceData->fields.pieceComponent,
    (int32_t)this,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
LABEL_30:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    return;
  }
  v64 = (UnityEngine_Transform_array *)sub_1C93B7C(UnityEngine_Transform___TypeInfo, 1);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v64 )
    goto LABEL_26;
  v71 = (UnityEngine_Transform_o *)gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C93C10(gameObject, v64->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_57:
      v95 = sub_1C93D50();
      sub_1C93BFC(v95, 0);
    }
  }
  if ( !LODWORD(v64->max_length) )
LABEL_56:
    sub_1C93D34(gameObject);
  v64->m_Items[0] = v71;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v64->m_Items, (int32_t)v71, v65, v66, v67, v68, v69, v70);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v64, v72);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_26;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v74);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v75);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_19002/*"ef_dm_base"*/,
                               (const MethodInfo_328DCE4 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !(*v30)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v30);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    v77 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v78 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !(*v30)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v30);
    if ( UnityEngine_Object__op_Inequality(v78, 0, 0) )
      v77 = (UnityEngine_Transform_o *)v78;
    if ( !(*v30)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v30);
    v79 = UnityEngine_Object__Instantiate_object__52629400(
            CommonEffectAsset_object,
            v77,
            (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v79;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.effectDamageBaseObject,
      (int32_t)v79,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0, 0) )
    {
      v87 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_23437/*"root_text/type01/dm_base"*/,
                                      0);
      if ( !(*v30)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v30);
      gameObject = UnityEngine_Object__op_Inequality(v87, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v87 )
          goto LABEL_26;
        v88 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v87,
                (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v88;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.effectDamageBaseLabel,
          (int32_t)v88,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_26:
        sub_1C93D2C(gameObject, v6);
      goto LABEL_30;
    }
  }
}


bool WarBoardPieceBaseComponent__IsModifyStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  return 0;
}


void WarBoardPieceBaseComponent__LongTapIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnAfterAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  WarBoardPieceData_o *Piece_38493796; // x0
  WarBoardData_o **v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x24
  WarBoardTaskBase_TaskCallback_o *v32; // x25
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  int32x2_t v50; // d1
  float32x2_t v51; // d9
  float v52; // s10
  float32x2_t v53; // d9
  float v54; // s8
  float v55; // s10
  float32x2_t v56; // d9
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v60; // s0
  unsigned __int64 v61; // d1
  float v62; // s0
  __int64 v63; // x24
  WarBoardTaskBase_TaskCallback_o *v64; // x25
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct WarBoardPieceData_o *v71; // x8
  UnityEngine_GameObject_o *v72; // x26
  float v73; // s8
  float v74; // s9
  float v75; // s10
  float pixelPerSecond; // s13
  WarBoardMovePerformance_o *v77; // x0
  WarBoardTaskBase_o *v78; // x25
  bool IsEnabledMovedAfterDefend; // w0
  System_Func_bool__o *v80; // x23
  __int64 v81; // x21
  System_Delegate_o **v82; // x22
  System_Delegate_o *v83; // x23
  WarBoardPieceBaseComponent___c_c *v84; // x0
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v86; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  System_Delegate_o *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  System_Delegate_o *v101; // x8
  WarBoardTaskBase_TaskCallback_c *v102; // x1
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  float32x2_t v113; // d0
  unsigned __int64 v114; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v116; // 0:kr14_12.12
  UnityEngine_Vector3_o v117; // 0:kr20_12.12
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E1D2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C93AD4(&WarBoardCallbackTask_TypeInfo);
    sub_1C93AD4(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C93AD4(&WarBoardMovePerformance_TypeInfo);
    byte_4D2E1D2 = 1;
  }
  v5 = sub_1C93D20(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_60;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 52) = squareIndex;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 24) = Instance;
  v16 = (WarBoardData_o **)(v5 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)Instance, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_38493796 = WarBoardData__GetPiece_38493796(gameObject, *(_DWORD *)(v5 + 52), 0);
  *(_QWORD *)(v5 + 16) = Piece_38493796;
  v24 = (WarBoardData_o **)(v5 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Piece_38493796, v25, v26, v27, v28, v29, v30);
  v31 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v31, 0, 0);
  v32 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v31 )
    goto LABEL_60;
  *(_QWORD *)(v31 + 32) = v32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v31 + 32), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  if ( !v14 )
    goto LABEL_60;
  items = v14->fields._items;
  v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v31,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v31;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 4), v31, v39, v40, v41, v42, v43, v44);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v16;
  if ( !*v16 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  v116 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v5 + 52), 0);
  v113.n64_u64[0] = *(unsigned __int64 *)&v116.fields.x;
  v51.n64_u64[0] = *(unsigned __int64 *)(v5 + 40);
  v52 = *(float *)(v5 + 48);
  if ( !byte_4D2A13B )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    v113.n64_u64[0] = *(unsigned __int64 *)&v116.fields.x;
    byte_4D2A13B = 1;
  }
  v53.n64_u64[0] = vsub_f32(v113, v51).n64_u64[0];
  v54 = v116.fields.z - v52;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v55 = vaddv_f32(vmul_f32(v53, v53)) + (float)(v54 * v54);
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  v50.n64_f32[0] = sqrtf(v55);
  v114 = v50.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v50.n64_u64[0] = v114;
  }
  if ( v50.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v56.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v56.n64_u64[0] = vdiv_f32(v53, vdup_lane_s32(v50, 0)).n64_u64[0];
    z = v54 / v50.n64_f32[0];
  }
  gameObject = *v24;
  if ( !*v24 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v60 = *(float *)&v114 - lengthOnAttack;
  if ( (float)(*(float *)&v114 - lengthOnAttack) > 0.0 )
  {
    v61 = vadd_f32(vmul_n_f32(v56, v60), *(float32x2_t *)(v5 + 40)).n64_u64[0];
    v62 = (float)(z * v60) + *(float *)(v5 + 48);
    *(_QWORD *)(v5 + 40) = v61;
    *(float *)(v5 + 48) = v62;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0);
  v63 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v63, 0, 0);
  v64 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v64,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0);
  if ( !v63 )
    goto LABEL_60;
  *(_QWORD *)(v63 + 32) = v64;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v63 + 32), (int32_t)v64, v65, v66, v67, v68, v69, v70);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v71 = this->fields.pieceData;
  if ( !v71 )
    goto LABEL_60;
  v72 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v73 = *(float *)(v5 + 40);
  v74 = *(float *)(v5 + 44);
  v75 = *(float *)(v5 + 48);
  v117 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v71->fields._nowSquareIndex_k__BackingField,
           0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v77 = (WarBoardMovePerformance_o *)sub_1C93D20(WarBoardMovePerformance_TypeInfo);
  v118.fields.x = v73;
  v118.fields.y = v74;
  v118.fields.z = v75;
  v78 = (WarBoardTaskBase_o *)v77;
  WarBoardMovePerformance___ctor(v77, v72, v118, v117, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0) )
  {
    gameObject = *v24;
    if ( !*v24 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  *(_BYTE *)(v5 + 56) = IsEnabledMovedAfterDefend;
  v80 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v80,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0);
  v81 = sub_1C93D20(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v81, v80, (WarBoardTaskBase_o *)v63, v78, 0);
  if ( !v81 )
LABEL_60:
    sub_1C93D2C(gameObject, v7);
  v82 = (System_Delegate_o **)(v81 + 40);
  v83 = *(System_Delegate_o **)(v81 + 40);
  v84 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v84 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__65_3 = v84->static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v84 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v86 = (Il2CppObject *)v84->static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v86,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0);
    v87 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v87->__9__65_3 = _9__65_3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v87->__9__65_3, (int32_t)_9__65_3, v88, v89, v90, v91, v92, v93);
  }
  v94 = System_Delegate__Combine(v83, (System_Delegate_o *)_9__65_3, 0);
  v101 = v94;
  if ( v94 )
  {
    v102 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v94->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v82 = v94;
      if ( (WarBoardTaskBase_TaskCallback_c *)v94->klass == v102 )
        goto LABEL_54;
    }
    sub_1C940C8(v94);
  }
  *v82 = v101;
LABEL_54:
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v81 + 40), (int32_t)v101, v95, v96, v97, v98, v99, v100);
  v109 = v14->fields._items;
  v110 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v109 )
    goto LABEL_60;
  v111 = v14->fields._size;
  if ( (unsigned int)v111 >= LODWORD(v109->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v81,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = &v109->obj.klass + v111;
    v14->fields._size = v111 + 1;
    v112[4] = (Il2CppClass *)v81;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v112 + 4), v81, v103, v104, v105, v106, v107, v108);
  }
  gameObject = *v16;
  if ( !*v16 )
    goto LABEL_60;
  WarBoardManager__AddTask_38679444(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
    0);
}


void WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  WarBoardWallData_o *Wall; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x23
  WarBoardTaskBase_TaskCallback_o *v31; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  int32x2_t v49; // d3
  float32x2_t v50; // d9
  float v51; // s10
  float32x2_t v52; // d9
  float v53; // s8
  float v54; // s10
  float32x2_t v55; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v58; // s2
  float v59; // s1
  __int64 v60; // x23
  WarBoardTaskBase_TaskCallback_o *v61; // x24
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct WarBoardPieceData_o *v68; // x8
  UnityEngine_GameObject_o *v69; // x25
  float v70; // s8
  float v71; // s9
  float v72; // s10
  float pixelPerSecond; // s13
  WarBoardMovePerformance_o *v74; // x0
  WarBoardTaskBase_o *v75; // x24
  System_Func_bool__o *v76; // x25
  WarBoardConditionalJumpTask_o *v77; // x19
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  float32x2_t v88; // d0
  unsigned __int64 v89; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v90; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v92; // 0:kr14_12.12
  UnityEngine_Vector3_o v93; // 0:kr20_12.12
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E1D4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
    sub_1C93AD4(&WarBoardCallbackTask_TypeInfo);
    sub_1C93AD4(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C93AD4(&WarBoardMovePerformance_TypeInfo);
    byte_4D2E1D4 = 1;
  }
  v5 = sub_1C93D20(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 44) = squareIndex;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 16) = Instance;
  v16 = (WarBoardData_o **)(v5 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Instance, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v5 + 44), 1, 0);
  *(_QWORD *)(v5 + 48) = Wall;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)Wall, v24, v25, v26, v27, v28, v29);
  v30 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v30, 0, 0);
  v31 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v30 )
    goto LABEL_40;
  *(_QWORD *)(v30 + 32) = v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  if ( !v14 )
    goto LABEL_40;
  items = v14->fields._items;
  v45 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v30,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v30;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 4), v30, v38, v39, v40, v41, v42, v43);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v16;
  if ( !*v16 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 16);
  *(UnityEngine_Vector3_o *)(v5 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  v92 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v5 + 44), 0);
  v88.n64_u64[0] = *(unsigned __int64 *)&v92.fields.x;
  v50.n64_u64[0] = *(unsigned __int64 *)(v5 + 32);
  v51 = *(float *)(v5 + 40);
  if ( !byte_4D2A13B )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    v88.n64_u64[0] = *(unsigned __int64 *)&v92.fields.x;
    byte_4D2A13B = 1;
  }
  v52.n64_u64[0] = vsub_f32(v88, v50).n64_u64[0];
  v53 = v92.fields.z - v51;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v54 = vaddv_f32(vmul_f32(v52, v52)) + (float)(v53 * v53);
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  v49.n64_f32[0] = sqrtf(v54);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    v89 = v49.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v49.n64_u64[0] = v89;
  }
  if ( v49.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      v90 = v49.n64_u32[0];
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      v49.n64_u32[0] = v90;
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v55.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v55.n64_u64[0] = vdiv_f32(v52, vdup_lane_s32(v49, 0)).n64_u64[0];
    z = v53 / v49.n64_f32[0];
  }
  v58 = v49.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v58 > 0.0 )
  {
    v59 = (float)(z * v58) + *(float *)(v5 + 40);
    *(float32x2_t *)(v5 + 32) = vadd_f32(vmul_n_f32(v55, v58), *(float32x2_t *)(v5 + 32));
    *(float *)(v5 + 40) = v59;
  }
  v60 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v60, 0, 0);
  v61 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v61,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0);
  if ( !v60 )
    goto LABEL_40;
  *(_QWORD *)(v60 + 32) = v61;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v60 + 32), (int32_t)v61, v62, v63, v64, v65, v66, v67);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v68 = this->fields.pieceData;
  if ( !v68 )
    goto LABEL_40;
  v69 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v70 = *(float *)(v5 + 32);
  v71 = *(float *)(v5 + 36);
  v72 = *(float *)(v5 + 40);
  v93 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v68->fields._nowSquareIndex_k__BackingField,
          0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v74 = (WarBoardMovePerformance_o *)sub_1C93D20(WarBoardMovePerformance_TypeInfo);
  v94.fields.x = v70;
  v94.fields.y = v71;
  v94.fields.z = v72;
  v75 = (WarBoardTaskBase_o *)v74;
  WarBoardMovePerformance___ctor(v74, v69, v94, v93, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  *(_BYTE *)(v5 + 56) = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0);
  v76 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v76,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0);
  v77 = (WarBoardConditionalJumpTask_o *)sub_1C93D20(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor(v77, v76, (WarBoardTaskBase_o *)v60, v75, 0);
  v84 = v14->fields._items;
  v85 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v84 )
    goto LABEL_40;
  v86 = v14->fields._size;
  if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v77,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = &v84->obj.klass + v86;
    v14->fields._size = v86 + 1;
    v87[4] = (Il2CppClass *)v77;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v87 + 4), (int32_t)v77, v78, v79, v80, v81, v82, v83);
  }
  gameObject = *v16;
  if ( !*v16 )
LABEL_40:
    sub_1C93D2C(gameObject, v7);
  WarBoardManager__AddTask_38679444(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
    0);
}


void WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x23
  __int64 Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 *v14; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v16; // x22
  float x; // s11
  float y; // s9
  float z; // s10
  WarBoardSquareData_o *Square; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_List_object__o *v27; // x20
  const MethodInfo *v28; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v31; // x0
  __int64 v32; // x25
  WarBoardTaskBase_TaskCallback_c **v33; // x19
  System_Delegate_o **v34; // x26
  System_Delegate_o *v35; // x27
  WarBoardTaskBase_TaskCallback_o *v36; // x28
  System_Delegate_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  WarBoardPieceBaseComponent_c *v44; // x8
  WarBoardTaskBase_TaskCallback_c *v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  float v56; // s13
  float v57; // s14
  float v58; // s12
  float v59; // s8
  float v60; // s14
  float v61; // s13
  float v62; // s15
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  float v65; // s0
  float v66; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s12
  UnityEngine_GameObject_o *v69; // x26
  WarBoardMovePerformance_o *v70; // x0
  Il2CppObject *v71; // x25
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  System_Collections_Generic_List_object__o *v82; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v83; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v84; // x0
  float lengthMoveAttack; // s0
  float v86; // s8
  float v87; // s12
  float v88; // s13
  UnityEngine_GameObject_o *v89; // x0
  float v90; // s14
  UnityEngine_GameObject_o *v91; // x21
  WarBoardMovePerformance_o *v92; // x0
  WarBoardTaskBase_o *v93; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v94; // x21
  WarBoardMessageMaster_o *v95; // x23
  int32_t id; // w26
  System_Collections_Generic_List_object__o *v97; // x0
  int32_t breakPoint_k__BackingField; // w27
  int32_t v99; // w2
  bool v100; // w4
  WarBoardMessageMaster_o *v101; // x0
  int32_t v102; // w1
  int32_t v103; // w3
  __int64 v104; // x24
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  Il2CppObject **v111; // x22
  float lengthOnEncount; // s0
  float v113; // s1
  float v114; // s12
  float v115; // s2
  float v116; // s0
  float v117; // s8
  float v118; // s14
  float v119; // s9
  float v120; // s11
  float v121; // s15
  float v122; // s13
  float v123; // s14
  float v124; // s10
  float v125; // s12
  float v126; // s13
  float v127; // s14
  float v128; // s15
  struct UnityEngine_Vector3_StaticFields *v129; // x8
  float v130; // s1
  _QWORD *monitor; // x8
  __int64 v132; // x8
  float v133; // s10
  float ZoomSize; // s0
  __int64 v135; // x8
  __int64 v136; // x8
  __int64 v137; // x8
  const MethodInfo_39A43D0 *v138; // x2
  UnityEngine_Vector2_o ScrlPos; // kr20_8
  __int64 v140; // x8
  WarBoardManager_o *v141; // x23
  float v142; // s8
  float v143; // s10
  float encountCameraSize; // s0
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x1
  Il2CppClass **v155; // x0
  System_Collections_Generic_IEnumerable_T__o *v156; // x23
  int32_t v157; // w2
  int32_t v158; // w3
  System_String_o *v159; // x4
  int32_t v160; // w5
  int64_t v161; // x6
  System_String_o *v162; // x7
  WarBoardTaskBase_array *v163; // x23
  WarBoardManager_o *v164; // x24
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  WarBoardTaskBase_o *v173; // x24
  int32_t v174; // w2
  int32_t v175; // w3
  System_String_o *v176; // x4
  int32_t v177; // w5
  int64_t v178; // x6
  System_String_o *v179; // x7
  WarBoardTaskBase_o *v180; // x24
  const MethodInfo *v181; // x2
  int32_t v182; // w2
  int32_t v183; // w3
  System_String_o *v184; // x4
  int32_t v185; // w5
  int64_t v186; // x6
  System_String_o *v187; // x7
  WarBoardTaskBase_o *v188; // x22
  WarBoardOrthostichySchedule_o *v189; // x22
  int32_t v190; // w2
  int32_t v191; // w3
  System_String_o *v192; // x4
  int32_t v193; // w5
  int64_t v194; // x6
  System_String_o *v195; // x7
  WarBoardParallelSchedule_o *v196; // x21
  int32_t v197; // w2
  int32_t v198; // w3
  System_String_o *v199; // x4
  int32_t v200; // w5
  int64_t v201; // x6
  System_String_o *v202; // x7
  struct System_Object_array *v203; // x8
  _QWORD *v204; // x9
  __int64 v205; // x10
  Il2CppClass **v206; // x0
  GrandQuestFolderBoardItem_o *v207; // x0
  int32_t v208; // w1
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  WarBoardPieceBaseComponent___c_c *v215; // x8
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v217; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v218; // x0
  int32_t v219; // w2
  int32_t v220; // w3
  System_String_o *v221; // x4
  int32_t v222; // w5
  int64_t v223; // x6
  System_String_o *v224; // x7
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  WarBoardTaskBase_TaskCallback_o *v227; // x26
  System_Delegate_o *v228; // x0
  int32_t v229; // w2
  int32_t v230; // w3
  System_String_o *v231; // x4
  int32_t v232; // w5
  int64_t v233; // x6
  System_String_o *v234; // x7
  WarBoardTaskBase_TaskCallback_c *v235; // x1
  int32_t v236; // w2
  int32_t v237; // w3
  System_String_o *v238; // x4
  int32_t v239; // w5
  int64_t v240; // x6
  System_String_o *v241; // x7
  struct System_Object_array *v242; // x8
  _QWORD *v243; // x9
  __int64 v244; // x10
  Il2CppClass **v245; // x0
  System_Delegate_o *v246; // x23
  Il2CppObject *v247; // x22
  WarBoardTaskBase_TaskCallback_o *v248; // x24
  WarBoardPieceBaseComponent_c *v249; // x0
  WarBoardTaskBase_TaskCallback_c *v250; // x1
  System_Delegate_o *v251; // x22
  WarBoardPieceBaseComponent___c_c *v252; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v254; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v255; // x0
  int32_t v256; // w2
  int32_t v257; // w3
  System_String_o *v258; // x4
  int32_t v259; // w5
  int64_t v260; // x6
  System_String_o *v261; // x7
  WarBoardPieceBaseComponent_c *v262; // x0
  int32_t v263; // w2
  int32_t v264; // w3
  System_String_o *v265; // x4
  int32_t v266; // w5
  int64_t v267; // x6
  System_String_o *v268; // x7
  WarBoardTaskBase_TaskCallback_c *v269; // x1
  __int64 v270; // x0
  float v271; // [xsp+4h] [xbp-DCh]
  WarBoardManager_o **v272; // [xsp+18h] [xbp-C8h]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v274; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v276; // 0:kr14_12.12
  System_Nullable_Vector3__o v277; // 0:x0.16
  UnityEngine_Vector3_o v278; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v279; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v280; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v281; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v282; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v283; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4D2E1D0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C93AD4(&WarBoardCallbackTask_TypeInfo);
    sub_1C93AD4(&WarBoardMovePerformance_TypeInfo);
    sub_1C93AD4(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C93AD4(&WarBoardParallelSchedule_TypeInfo);
    sub_1C93AD4(&WarBoardTaskBase___TypeInfo);
    sub_1C93AD4(&StringLiteral_8991/*"MasterDamage"*/);
    byte_4D2E1D0 = 1;
  }
  v5 = sub_1C93D20(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v5, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v5 )
    goto LABEL_157;
  *(_QWORD *)(v5 + 24) = Instance;
  v14 = (__int64 *)(v5 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), Instance, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardData__GetPiece_38493796((WarBoardData_o *)Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_157;
  v16 = (WarBoardPieceData_o *)Instance;
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_157;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_157;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v276 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0);
  if ( !*v14 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v14 + 440);
  if ( !Instance )
    goto LABEL_157;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0);
  *(_QWORD *)(v5 + 16) = Square;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Square, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v16, v28);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0);
  if ( !v27 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v272 = (WarBoardManager_o **)(v5 + 24);
  v31 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)v31,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v32 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0, 0);
  if ( !v32 )
    goto LABEL_157;
  v33 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v34 = (System_Delegate_o **)(v32 + 32);
  v35 = *(System_Delegate_o **)(v32 + 32);
  v36 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v36,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0);
  v37 = System_Delegate__Combine(v35, (System_Delegate_o *)v36, 0);
  v44 = (WarBoardPieceBaseComponent_c *)v37;
  if ( v37 )
  {
    v45 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v37->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_152;
    *v34 = v37;
    if ( (WarBoardTaskBase_TaskCallback_c *)v37->klass != v45 )
      goto LABEL_152;
  }
  else
  {
    *v34 = 0;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)v37, v38, v39, v40, v41, v42, v43);
  items = v27->fields._items;
  v53 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v27->fields._version;
  if ( !items )
    goto LABEL_157;
  v54 = v27->fields._size;
  if ( (unsigned int)v54 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)v32,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &items->obj.klass + v54;
    v27->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)v32;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v55 + 4), v32, v46, v47, v48, v49, v50, v51);
  }
  if ( !byte_4D2A13B )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13B = 1;
  }
  v56 = v276.fields.y - SquarePosition.fields.y;
  v57 = v276.fields.x - SquarePosition.fields.x;
  v58 = v276.fields.z - SquarePosition.fields.z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  Instance = (__int64)System_Math_TypeInfo;
  v59 = sqrtf((float)(v58 * v58) + (float)((float)(v57 * v57) + (float)(v56 * v56)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v59 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      Instance = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v60 = static_fields->zeroVector.fields.x;
    v61 = static_fields->zeroVector.fields.y;
    v62 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v60 = v57 / v59;
    v61 = v56 / v59;
    v62 = v58 / v59;
  }
  if ( !v16 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v16, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v65 = v59 - lengthOnAttack;
  if ( (float)(v59 - lengthOnAttack) > 0.0 )
  {
    v271 = v61;
    x = SquarePosition.fields.x + (float)(v60 * v65);
    y = SquarePosition.fields.y + (float)(v61 * v65);
    v66 = SquarePosition.fields.z + (float)(v62 * v65);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v69 = gameObject;
    v70 = (WarBoardMovePerformance_o *)sub_1C93D20(WarBoardMovePerformance_TypeInfo);
    v282.fields.x = x;
    v282.fields.y = y;
    v282.fields.z = v66;
    v71 = (Il2CppObject *)v70;
    z = v66;
    WarBoardMovePerformance___ctor(v70, v69, SquarePosition, v282, pixelPerSecond, 5, 0);
    v78 = v27->fields._items;
    v79 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v27->fields._version;
    if ( !v78 )
      goto LABEL_157;
    v80 = v27->fields._size;
    if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        v71,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = &v78->obj.klass + v80;
      v27->fields._size = v80 + 1;
      v81[4] = (Il2CppClass *)v71;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v81 + 4), (int32_t)v71, v72, v73, v74, v75, v76, v77);
    }
    v61 = v271;
  }
  v82 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v82,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0);
  if ( !v82 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v82,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v83 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v82,
    (System_Collections_Generic_IEnumerable_T__o *)v83,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v84 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v82,
    (System_Collections_Generic_IEnumerable_T__o *)v84,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v16, 0) )
  {
    v104 = sub_1C93D20(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v104,
      0);
    if ( v104 )
    {
      *(_QWORD *)(v104 + 32) = v5;
      v111 = (Il2CppObject **)(v104 + 32);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v104 + 32), v5, v105, v106, v107, v108, v109, v110);
      System_Collections_Generic_List_object___AddRange(
        v27,
        (System_Collections_Generic_IEnumerable_T__o *)v82,
        (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v113 = v60 * lengthOnEncount;
      v114 = v276.fields.x - (float)(v60 * lengthOnEncount);
      v115 = v61 * lengthOnEncount;
      v116 = v62 * lengthOnEncount;
      v117 = x + v113;
      v118 = v276.fields.y - v115;
      v119 = y + v115;
      v120 = z + v116;
      v121 = v276.fields.z - v116;
      if ( !byte_4D2A13C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13C = 1;
      }
      v122 = v114 - v117;
      v123 = v118 - v119;
      v124 = v121 - v120;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v125 = sqrtf((float)(v124 * v124) + (float)((float)(v122 * v122) + (float)(v123 * v123)));
      if ( v125 <= 0.00001 )
      {
        if ( !byte_4D2A139 )
        {
          sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        v129 = UnityEngine_Vector3_TypeInfo->static_fields;
        v126 = v129->zeroVector.fields.x;
        v127 = v129->zeroVector.fields.y;
        v128 = v129->zeroVector.fields.z;
      }
      else
      {
        v126 = v122 / v125;
        v127 = v123 / v125;
        v128 = v124 / v125;
      }
      if ( !byte_4D2A13B )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13B = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._35_GetIconLocalPosition.methodPtr)(
                   this,
                   this->klass->vtable._35_GetIconLocalPosition.method);
      v33 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
      if ( *v111 )
      {
        monitor = (*v111)[1].monitor;
        if ( monitor )
        {
          v132 = monitor[6];
          if ( v132 )
          {
            Instance = *(_QWORD *)(v132 + 80);
            if ( Instance )
            {
              v133 = v130;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0);
              v135 = *(_QWORD *)(v104 + 32);
              *(float *)(v104 + 16) = ZoomSize;
              if ( v135 )
              {
                v136 = *(_QWORD *)(v135 + 24);
                if ( v136 )
                {
                  v137 = *(_QWORD *)(v136 + 48);
                  if ( v137 )
                  {
                    Instance = *(_QWORD *)(v137 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0);
                      v140 = *(_QWORD *)(v104 + 32);
                      *(UnityEngine_Vector2_o *)(v104 + 20) = ScrlPos;
                      if ( v140 )
                      {
                        v141 = *(WarBoardManager_o **)(v140 + 24);
                        *(_QWORD *)&v277.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v142 = v117 + (float)((float)(v125 * v126) * 0.5);
                        v143 = (float)(v119 + (float)((float)(v125 * v127) * 0.5)) + v133;
                        *(_QWORD *)&v277.fields.hasValue = &v274;
                        v279.fields.x = v142;
                        v279.fields.y = v143;
                        v279.fields.z = v120 + (float)((float)(v125 * v128) * 0.5);
                        *(_QWORD *)&v274.fields.hasValue = 0;
                        *(_QWORD *)&v274.fields.value.fields.y = 0;
                        System_Nullable_Vector3____ctor(v277, v279, v138);
                        encountCameraSize = this->fields.encountCameraSize;
                        size = 0;
                        System_Nullable_float____ctor(
                          (System_Nullable_float__o)&size,
                          encountCameraSize,
                          (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
                        if ( v141 )
                        {
                          Instance = (__int64)WarBoardManager__GetCameraPerformanceTask(v141, v274, size, 1, 0, 1, 0);
                          v151 = v27->fields._items;
                          v152 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v27->fields._version;
                          if ( v151 )
                          {
                            v153 = v27->fields._size;
                            v154 = Instance;
                            if ( (unsigned int)v153 >= LODWORD(v151->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v27,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_387999C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v155 = &v151->obj.klass + v153;
                              v27->fields._size = v153 + 1;
                              v155[4] = (Il2CppClass *)v154;
                              sub_1C93A78(
                                (GrandQuestFolderBoardItem_o *)(v155 + 4),
                                v154,
                                v145,
                                v146,
                                v147,
                                v148,
                                v149,
                                v150);
                            }
                            if ( *v111 )
                            {
                              Instance = (__int64)(*v111)[1].monitor;
                              if ( Instance )
                              {
                                v281.fields.x = v142;
                                v281.fields.y = v143;
                                v281.fields.z = v120 + (float)((float)(v125 * v128) * 0.5);
                                Instance = (__int64)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v281,
                                                      1,
                                                      0);
                                v215 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
                                  v215 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                _9__63_1 = v215->static_fields->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !v215->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v215);
                                    v215 = WarBoardPieceBaseComponent___c_TypeInfo;
                                  }
                                  v217 = (Il2CppObject *)v215->static_fields->__9;
                                  _9__63_1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v217,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0);
                                  v218 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v218->__9__63_1 = _9__63_1;
                                  sub_1C93A78(
                                    (GrandQuestFolderBoardItem_o *)&v218->__9__63_1,
                                    (int32_t)_9__63_1,
                                    v219,
                                    v220,
                                    v221,
                                    v222,
                                    v223,
                                    v224);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_1C93A78(
                                    (GrandQuestFolderBoardItem_o *)&this->fields.currentActionPointLabel,
                                    (int32_t)_9__63_1,
                                    v209,
                                    v210,
                                    v211,
                                    v212,
                                    v213,
                                    v214);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v227 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v227,
                                    (Il2CppObject *)v104,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0);
                                  v228 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v227, 0);
                                  v44 = (WarBoardPieceBaseComponent_c *)v228;
                                  if ( v228 )
                                  {
                                    v235 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v228->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v228;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v228->klass != v235 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0;
                                  }
                                  sub_1C93A78(
                                    (GrandQuestFolderBoardItem_o *)&this->fields.breakPointParent,
                                    (int32_t)v228,
                                    v229,
                                    v230,
                                    v231,
                                    v232,
                                    v233,
                                    v234);
                                  v242 = v27->fields._items;
                                  v243 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v27->fields._version;
                                  if ( v242 )
                                  {
                                    v244 = v27->fields._size;
                                    if ( (unsigned int)v244 >= LODWORD(v242->max_length) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v27,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_387999C **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v245 = &v242->obj.klass + v244;
                                      v27->fields._size = v244 + 1;
                                      v245[4] = (Il2CppClass *)this;
                                      sub_1C93A78(
                                        (GrandQuestFolderBoardItem_o *)(v245 + 4),
                                        (int32_t)this,
                                        v236,
                                        v237,
                                        v238,
                                        v239,
                                        v240,
                                        v241);
                                    }
                                    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                                          v27,
                                                          0,
                                                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v246 = *(System_Delegate_o **)(Instance + 32);
                                      v247 = *v111;
                                      v248 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v248,
                                        v247,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0);
                                      v249 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v246,
                                                                               (System_Delegate_o *)v248,
                                                                               0);
                                      v44 = v249;
                                      if ( v249 )
                                      {
                                        v250 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v249->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v249;
                                        if ( v249->_1.image != v250 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0;
                                      }
                                      v207 = (GrandQuestFolderBoardItem_o *)this;
                                      v208 = (int)v44;
                                      goto LABEL_140;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_157:
    sub_1C93D2C(Instance, v7);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v86 = x + (float)(v60 * lengthMoveAttack);
  v87 = y + (float)(v61 * lengthMoveAttack);
  v88 = z + (float)(v62 * lengthMoveAttack);
  v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v90 = this->fields.pixelPerSecond;
  v91 = v89;
  v92 = (WarBoardMovePerformance_o *)sub_1C93D20(WarBoardMovePerformance_TypeInfo);
  v278.fields.x = v86;
  v278.fields.y = v87;
  v278.fields.z = v88;
  v283.fields.x = x;
  v283.fields.y = y;
  v283.fields.z = z;
  v93 = (WarBoardTaskBase_o *)v92;
  WarBoardMovePerformance___ctor(v92, v91, v278, v283, v90, 4, 0);
  v94 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(v16, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v33 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
  if ( !*v272 )
    goto LABEL_157;
  v95 = (WarBoardMessageMaster_o *)Instance;
  Instance = (__int64)(*v272)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0);
  v97 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v97,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v16->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v16, 0);
  if ( !v95 )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
  {
    v99 = 11;
    v100 = 1;
    v101 = v95;
    v102 = id;
    v103 = breakPoint_k__BackingField;
  }
  else
  {
    v99 = 9;
    v101 = v95;
    v102 = id;
    v103 = breakPoint_k__BackingField;
    v100 = 0;
  }
  Instance = (__int64)WarBoardMessageMaster__GetMessageTasks(v101, v102, v99, v103, v100, 0);
  v156 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v82,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v156,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v27,
      v156,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_1C93B7C(WarBoardTaskBase___TypeInfo, 5);
  if ( !Instance )
    goto LABEL_157;
  v163 = (WarBoardTaskBase_array *)Instance;
  if ( v93 )
  {
    Instance = sub_1C93C10(v93, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !LODWORD(v163->max_length) )
    goto LABEL_158;
  v163->m_Items[0] = v93;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v163->m_Items, (int32_t)v93, v157, v158, v159, v160, v161, v162);
  Instance = (__int64)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v164 = *v272;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v164 )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__CreateAttackEffectTask(v164, v280, 0, 0);
  v173 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C93C10(Instance, v163->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v163->max_length) <= 1 )
    goto LABEL_158;
  v163->m_Items[1] = v173;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v163->m_Items[1], (int32_t)v173, v167, v168, v169, v170, v171, v172);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v180 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C93C10(Instance, v163->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v163->max_length) <= 2 )
    goto LABEL_158;
  v163->m_Items[2] = v180;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v163->m_Items[2], (int32_t)v180, v174, v175, v176, v177, v178, v179);
  Instance = (__int64)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_8991/*"MasterDamage"*/,
                        v181);
  v188 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C93C10(Instance, v163->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v163->max_length) <= 3 )
    goto LABEL_158;
  v163->m_Items[3] = v188;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v163->m_Items[3], (int32_t)v188, v182, v183, v184, v185, v186, v187);
  v189 = (WarBoardOrthostichySchedule_o *)sub_1C93D20(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_38956748(v189, v94, 0);
  if ( v189 )
  {
    Instance = sub_1C93C10(v189, v163->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v270 = sub_1C93D50();
      sub_1C93BFC(v270, 0);
    }
  }
  if ( LODWORD(v163->max_length) <= 4 )
LABEL_158:
    sub_1C93D34(Instance);
  v163->m_Items[4] = (WarBoardTaskBase_o *)v189;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v163->m_Items[4], (int32_t)v189, v190, v191, v192, v193, v194, v195);
  v196 = (WarBoardParallelSchedule_o *)sub_1C93D20(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v196, v163, 0);
  v203 = v27->fields._items;
  v204 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v27->fields._version;
  if ( !v203 )
    goto LABEL_157;
  v205 = v27->fields._size;
  if ( (unsigned int)v205 >= LODWORD(v203->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)v196,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v206 = &v203->obj.klass + v205;
  v27->fields._size = v205 + 1;
  v206[4] = (Il2CppClass *)v196;
  v207 = (GrandQuestFolderBoardItem_o *)(v206 + 4);
  v208 = (int)v196;
LABEL_140:
  sub_1C93A78(v207, v208, v197, v198, v199, v200, v201, v202);
LABEL_141:
  if ( v27->fields._size < 1 )
    return;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v27,
                        0,
                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
  v251 = *(System_Delegate_o **)(Instance + 32);
  v252 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v252 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__63_4 = v252->static_fields->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !v252->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v252);
      v252 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v254 = (Il2CppObject *)v252->static_fields->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v254, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0);
    v255 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v255->__9__63_4 = _9__63_4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v255->__9__63_4, (int32_t)_9__63_4, v256, v257, v258, v259, v260, v261);
  }
  v262 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v251, (System_Delegate_o *)_9__63_4, 0);
  v44 = v262;
  if ( !v262 )
    goto LABEL_153;
  v269 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v262->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v262, v262->_1.image != v269) )
  {
LABEL_152:
    sub_1C940C8(v44);
LABEL_153:
    this->klass = v44;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)this, (int32_t)v44, v263, v264, v265, v266, v267, v268);
  Instance = (__int64)*v33;
  if ( !*v33 )
    goto LABEL_157;
  WarBoardManager__AddTask_38679444(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v27,
    0);
}


void WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  WarBoardManager_o *v7; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v9; // x20
  float v10; // s8
  float v11; // s15
  float v12; // s14
  float v13; // s11
  float x; // s12
  float y; // s13
  float z; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s8
  WarBoardControlUiDataComponent_c *v19; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v21; // 0:kr14_12.12
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E1D1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2E1D1 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_38493796(Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v9 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  v21 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0);
  if ( !byte_4D2A13B )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13B = 1;
  }
  v10 = v21.fields.x - SquarePosition.fields.x;
  v11 = v21.fields.y - SquarePosition.fields.y;
  v12 = v21.fields.z - SquarePosition.fields.z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  v13 = sqrtf((float)(v12 * v12) + (float)((float)(v10 * v10) + (float)(v11 * v11)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v13 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      Instance = (WarBoardData_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v10 / v13;
    y = v11 / v13;
    z = v12 / v13;
  }
  if ( !v9 )
    goto LABEL_27;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v9, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0)) == 0 )
  {
LABEL_27:
    sub_1C93D2C(Instance, v6);
  }
  v22.fields.x = SquarePosition.fields.x + (float)(x * (float)(v13 - lengthOnAttack));
  v22.fields.y = SquarePosition.fields.y + (float)(y * (float)(v13 - lengthOnAttack));
  v22.fields.z = SquarePosition.fields.z + (float)(z * (float)(v13 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v22, 0);
  v19 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v19);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__OnBreak(
        WarBoardPieceBaseComponent_o *this,
        int32_t oldBreakPoint,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        int32_t dummyPoint,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        bool cameraMove,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v14; // x22
  Il2CppObject *Instance; // x25
  const MethodInfo_39A43D0 *v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v26; // x1
  Il2CppClass **v27; // x0
  WarBoardTaskBase_array *v28; // x26
  Il2CppObject *v29; // x27
  const MethodInfo_39A43D0 *v30; // x2
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  WarBoardPieceBaseComponent_o *v37; // x24
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v39; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v41; // x0
  System_Nullable_Vector3__o v42; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v43; // 0:x0.16
  System_Nullable_Vector3__o v44; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_4D2E1D8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C93AD4(&WarBoardTaskBase___TypeInfo);
    byte_4D2E1D8 = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v43.fields.hasValue = &v42;
          *(_QWORD *)&v42.fields.hasValue = 0;
          *(_QWORD *)&v42.fields.value.fields.y = 0;
          *(_QWORD *)&v43.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v43, localPosition, v16);
          if ( Instance )
          {
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v42,
                                                     cameraSize,
                                                     1,
                                                     0,
                                                     1,
                                                     0);
            items = taskList->fields._items;
            v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              v26 = this;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)this,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v27[4] = (Il2CppClass *)v26;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v26, v17, v18, v19, v20, v21, v22);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v28 = (WarBoardTaskBase_array *)sub_1C93B7C(WarBoardTaskBase___TypeInfo, 1);
        v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          v46 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v44.fields.hasValue = &v42;
          v42 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v44.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v44, v46, v30);
          if ( v29 )
          {
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v29,
                                                     v42,
                                                     cameraSize,
                                                     1,
                                                     0,
                                                     1,
                                                     0);
            if ( v28 )
            {
              v37 = this;
              if ( this )
              {
                this = (WarBoardPieceBaseComponent_o *)sub_1C93C10(this, v28->obj.klass->_1.element_class);
                if ( !this )
                {
                  v41 = sub_1C93D50();
                  sub_1C93BFC(v41, 0);
                }
              }
              if ( !LODWORD(v28->max_length) )
LABEL_34:
                sub_1C93D34(this);
              v28->m_Items[0] = (WarBoardTaskBase_o *)v37;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)v28->m_Items, (int32_t)v37, v31, v32, v33, v34, v35, v36);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v28, 0);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_32:
      sub_1C93D2C(this, *(_QWORD *)&oldBreakPoint);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_32;
  v39 = 0;
  if ( dummyPoint < 0 )
    dummyPoint = pieceData->fields._breakPoint_k__BackingField;
  while ( (int)v39 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( !breakPoints )
      goto LABEL_32;
    if ( (unsigned int)v39 >= LODWORD(breakPoints->max_length) )
      goto LABEL_34;
    this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v39];
    if ( this )
    {
      if ( (int)v39 >= oldBreakPoint || dummyPoint > (int)v39 )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          dummyPoint > (int)v39,
          0,
          (const MethodInfo *)taskList);
      }
      else
      {
        WarBoardBreakPointComponent__OnBreak(
          (WarBoardBreakPointComponent_o *)this,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)taskList,
          startCallback,
          (const MethodInfo *)taskList);
        startCallback = 0;
      }
      pieceData = v14->fields.pieceData;
      ++v39;
      if ( pieceData )
        continue;
    }
    goto LABEL_32;
  }
}


void WarBoardPieceBaseComponent__OnDamage(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnDead(
        WarBoardPieceBaseComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  const MethodInfo *v7; // x2

  if ( (byte_4D2E1CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E1CD = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C93D2C(Instance, v5);
  v6 = dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(Instance, 0);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v6, v7);
}


void WarBoardPieceBaseComponent__OnGuts(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnInvincible(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnMapDamage(
        WarBoardPieceBaseComponent_o *this,
        int32_t damage,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnMapGainHP(
        WarBoardPieceBaseComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnMove(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardTaskBase_TaskCallback_o *v3; // x29
  WarBoardTaskBase_TaskCallback_c **v4; // x22
  __int64 v6; // x19
  WarBoardPieceData_o *Instance; // x0
  WarBoardPieceData_o *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  WarBoardPieceData_o **v15; // x20
  WarBoardPieceData_o *Piece_38493796; // x0
  WarBoardPieceData_o **v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x25
  System_Collections_Generic_List_object__o *v33; // x24
  System_Delegate_o *v34; // x26
  WarBoardTaskBase_TaskCallback_o *v35; // x27
  System_Delegate_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Delegate_c *v43; // x8
  WarBoardTaskBase_TaskCallback_c *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v53; // x29
  struct WarBoardPieceData_o *v54; // x8
  UnityEngine_GameObject_o *v55; // x26
  float pixelPerSecond; // s13
  __int64 v57; // x27
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  WarBoardTaskBase_array *v64; // x26
  UnityEngine_GameObject_o *v65; // x27
  struct WarBoardPieceData_o *v66; // x8
  float v67; // s13
  WarBoardMovePerformance_o *v68; // x28
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  System_Delegate_o *v81; // x27
  WarBoardTaskBase_TaskCallback_o *v82; // x28
  System_Delegate_o *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  WarBoardTaskBase_TaskCallback_c *v90; // x1
  System_Delegate_o *v91; // x28
  System_Delegate_o *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  WarBoardTaskBase_TaskCallback_c *v99; // x1
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  struct System_Object_array *items; // x8
  _QWORD *v107; // x9
  __int64 size; // x10
  Il2CppClass **v109; // x0
  struct WarBoardPieceData_o *v110; // x8
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  System_Collections_Generic_List_object__o *v131; // x22
  System_Int32_array *PieceEventVals; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  System_Int32_array *v139; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v141; // x0
  WarBoardManager_o *v142; // x20
  WarBoardTaskBase_array *v143; // x21
  __int64 v144; // x22
  WarBoardTaskBase_TaskCallback_o *v145; // x23
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  __int64 v158; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v160; // 0:kr14_12.12
  UnityEngine_Vector3_o v161; // 0:kr20_12.12
  UnityEngine_Vector3_o v162; // 0:kr34_12.12

  LODWORD(v4) = squareIndex;
  if ( (byte_4D2E1CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C93AD4(&WarBoardCallbackTask_TypeInfo);
    sub_1C93AD4(&WarBoardMovePerformance_TypeInfo);
    sub_1C93AD4(&WarBoardParallelSchedule_TypeInfo);
    sub_1C93AD4(&WarBoardTaskBase___TypeInfo);
    byte_4D2E1CE = 1;
  }
  v6 = sub_1C93D20(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v6, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v6 )
    goto LABEL_83;
  *(_QWORD *)(v6 + 48) = Instance;
  v15 = (WarBoardPieceData_o **)(v6 + 48);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 48), (int32_t)Instance, v9, v10, v11, v12, v13, v14);
  if ( !*(_QWORD *)(v6 + 48) )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v6 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_83;
  Piece_38493796 = WarBoardData__GetPiece_38493796((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 40) = Piece_38493796;
  v17 = (WarBoardPieceData_o **)(v6 + 40);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 40), (int32_t)Piece_38493796, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v6 + 48);
  if ( !v24 )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(v24 + 440);
  if ( !Instance )
    goto LABEL_83;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 16) = Square;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)Square, v26, v27, v28, v29, v30, v31);
  v32 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0, 0);
  if ( !v32 )
    goto LABEL_83;
  v33 = (System_Collections_Generic_List_object__o *)(v32 + 32);
  v34 = *(System_Delegate_o **)(v32 + 32);
  v35 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0);
  v36 = System_Delegate__Combine(v34, (System_Delegate_o *)v35, 0);
  v43 = (System_Delegate_c *)v36;
  if ( v36 )
  {
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v33->klass = (System_Collections_Generic_List_object__c *)v36;
    if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != v44 )
      goto LABEL_44;
  }
  else
  {
    v33->klass = 0;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  Instance = (WarBoardPieceData_o *)sub_1C93B7C(int___TypeInfo, 2);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_83;
  v8 = Instance;
  if ( !Instance )
    goto LABEL_83;
  groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
  if ( !groupId_k__BackingField
    || (Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField,
        groupId_k__BackingField == 1) )
  {
LABEL_84:
    sub_1C93D34(Instance);
  }
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  *(_QWORD *)(v6 + 24) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)Instance, v45, v46, v47, v48, v49, v50);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v53 = *(_QWORD *)(v6 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v54 = this->fields.pieceData;
  if ( !v54 )
    goto LABEL_83;
  v55 = (UnityEngine_GameObject_o *)Instance;
  Instance = *(WarBoardPieceData_o **)(v6 + 48);
  if ( !Instance )
    goto LABEL_83;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v54->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_83;
  v160 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v57 = sub_1C93D20(WarBoardMovePerformance_TypeInfo);
  WarBoardMovePerformance___ctor((WarBoardMovePerformance_o *)v57, v55, SquarePosition, v160, pixelPerSecond, 0, 0);
  if ( v53 )
  {
    Instance = (WarBoardPieceData_o *)sub_1C93B7C(WarBoardTaskBase___TypeInfo, 3);
    if ( !Instance )
      goto LABEL_83;
    v64 = (WarBoardTaskBase_array *)Instance;
    if ( v57 )
    {
      Instance = (WarBoardPieceData_o *)sub_1C93C10(v57, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_85;
    }
    if ( !LODWORD(v64->max_length) )
      goto LABEL_84;
    v64->m_Items[0] = (WarBoardTaskBase_o *)v57;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)v64->m_Items, v57, v58, v59, v60, v61, v62, v63);
    Instance = *v17;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( *v17 )
    {
      Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0);
      if ( *v15 )
      {
        v65 = (UnityEngine_GameObject_o *)Instance;
        v161 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v15, (int32_t)v4, 0);
        v66 = this->fields.pieceData;
        if ( v66 )
        {
          Instance = *v15;
          if ( *v15 )
          {
            v162 = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v66->fields._nowSquareIndex_k__BackingField,
                     0);
            v67 = this->fields.pixelPerSecond;
            v68 = (WarBoardMovePerformance_o *)sub_1C93D20(WarBoardMovePerformance_TypeInfo);
            WarBoardMovePerformance___ctor(v68, v65, v161, v162, v67, 0, 0);
            if ( !v68 || (Instance = (WarBoardPieceData_o *)sub_1C93C10(v68, v64->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v64->max_length) <= 1 )
                goto LABEL_84;
              v64->m_Items[1] = (WarBoardTaskBase_o *)v68;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->m_Items[1], (int32_t)v68, v69, v70, v71, v72, v73, v74);
              Instance = (WarBoardPieceData_o *)sub_1C93C10(v32, v64->obj.klass->_1.element_class);
              if ( Instance )
              {
                if ( LODWORD(v64->max_length) <= 2 )
                  goto LABEL_84;
                v64->m_Items[2] = (WarBoardTaskBase_o *)v32;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->m_Items[2], v32, v75, v76, v77, v78, v79, v80);
                v32 = sub_1C93D20(WarBoardParallelSchedule_TypeInfo);
                WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v32, v64, 0);
                if ( !v32 )
                  goto LABEL_83;
                v34 = (System_Delegate_o *)(v32 + 40);
                v81 = *(System_Delegate_o **)(v32 + 40);
                v82 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
                WarBoardTaskBase_TaskCallback___ctor(
                  v82,
                  (Il2CppObject *)v6,
                  Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
                  0);
                v83 = System_Delegate__Combine(v81, (System_Delegate_o *)v82, 0);
                v43 = (System_Delegate_c *)v83;
                if ( !v83 )
                  goto LABEL_45;
                v90 = WarBoardTaskBase_TaskCallback_TypeInfo;
                if ( (WarBoardTaskBase_TaskCallback_c *)v83->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
                {
                  v34->klass = (System_Delegate_c *)v83;
                  if ( (WarBoardTaskBase_TaskCallback_c *)v83->klass == v90 )
                  {
LABEL_46:
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)v34, (int32_t)v43, v84, v85, v86, v87, v88, v89);
                    if ( !v33 )
                      goto LABEL_83;
                    items = v33->fields._items;
                    v107 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                    ++v33->fields._version;
                    if ( !items )
                      goto LABEL_83;
                    size = v33->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v33,
                        (Il2CppObject *)v32,
                        *(const MethodInfo_387999C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v109 = &items->obj.klass + size;
                      v33->fields._size = size + 1;
                      v109[4] = (Il2CppClass *)v32;
                      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v109 + 4), v32, v100, v101, v102, v103, v104, v105);
                    }
                    v110 = this->fields.pieceData;
                    if ( !v110 )
                      goto LABEL_83;
                    Instance = *v17;
                    if ( !*v17 )
                      goto LABEL_83;
                    WarBoardPieceData__SetSquareIndex(Instance, v110->fields._nowSquareIndex_k__BackingField, 0);
                    goto LABEL_64;
                  }
                }
LABEL_44:
                sub_1C940C8(v43);
LABEL_45:
                v34->klass = v43;
                goto LABEL_46;
              }
            }
LABEL_85:
            v158 = sub_1C93D50();
            sub_1C93BFC(v158, 0);
          }
        }
      }
    }
LABEL_83:
    sub_1C93D2C(Instance, v8);
  }
  if ( !v57 )
    goto LABEL_83;
  v17 = (WarBoardPieceData_o **)(unsigned int)v4;
  v34 = (System_Delegate_o *)(v57 + 40);
  v91 = *(System_Delegate_o **)(v57 + 40);
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0);
  v92 = System_Delegate__Combine(v91, (System_Delegate_o *)v3, 0);
  v43 = (System_Delegate_c *)v92;
  if ( v92 )
  {
    v99 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v92->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v34->klass = (System_Delegate_c *)v92;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v17;
    if ( (WarBoardTaskBase_TaskCallback_c *)v92->klass != v99 )
      goto LABEL_44;
  }
  else
  {
    v34->klass = 0;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v17;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v57 + 40), (int32_t)v92, v93, v94, v95, v96, v97, v98);
  v17 = (WarBoardPieceData_o **)(v6 + 40);
  if ( !v33 )
    goto LABEL_83;
  v117 = v33->fields._items;
  v118 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v117 )
    goto LABEL_83;
  v119 = v33->fields._size;
  if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v57,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
  }
  else
  {
    v120 = &v117->obj.klass + v119;
    v33->fields._size = v119 + 1;
    v120[4] = (Il2CppClass *)v57;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v120 + 4), v57, v111, v112, v113, v114, v115, v116);
  }
  v127 = v33->fields._items;
  v128 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v127 )
    goto LABEL_83;
  v129 = v33->fields._size;
  if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v32,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
  }
  else
  {
    v130 = &v127->obj.klass + v129;
    v33->fields._size = v129 + 1;
    v130[4] = (Il2CppClass *)v32;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v130 + 4), v32, v121, v122, v123, v124, v125, v126);
  }
LABEL_64:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0);
  v131 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v131,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0);
  *(_QWORD *)(v6 + 32) = PieceEventVals;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)PieceEventVals, v133, v134, v135, v136, v137, v138);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v6 + 32),
                                      0);
  if ( !v131 )
    goto LABEL_83;
  System_Collections_Generic_List_object___AddRange(
    v131,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v17 )
  {
    v139 = WarBoardPieceData__CreatePieceEventVals(*v17, 0);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v139, 0);
    System_Collections_Generic_List_object___AddRange(
      v131,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v141 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v131,
    (System_Collections_Generic_IEnumerable_T__o *)v141,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v131,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v15;
    if ( !*v15 )
      goto LABEL_83;
    WarBoardManager__AddTask_38679444(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v131,
      0);
  }
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_83;
  WarBoardManager__AddTask_38679444(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v33,
    0);
  v142 = *(WarBoardManager_o **)(v6 + 48);
  v143 = (WarBoardTaskBase_array *)sub_1C93B7C(WarBoardTaskBase___TypeInfo, 1);
  v144 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v144, 0, 0);
  v145 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(v3->klass);
  WarBoardTaskBase_TaskCallback___ctor(
    v145,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0);
  if ( !v144 )
    goto LABEL_83;
  *(_QWORD *)(v144 + 32) = v145;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v144 + 32), (int32_t)v145, v146, v147, v148, v149, v150, v151);
  if ( !v143 )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)sub_1C93C10(v144, v143->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_85;
  if ( !LODWORD(v143->max_length) )
    goto LABEL_84;
  v143->m_Items[0] = (WarBoardTaskBase_o *)v144;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v143->m_Items, v144, v152, v153, v154, v155, v156, v157);
  if ( !v142 )
    goto LABEL_83;
  WarBoardManager__AddTask(v142, 0, v143, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0);
}


void WarBoardPieceBaseComponent__OnRevive(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_4D2E1CC & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E1CC = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C93D2C(Instance, v4);
  v5 = WarBoardData__GetPieceMaxDispPriotiry(Instance, 0) - this->fields.dispPriotiry;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v5, v6);
}


void WarBoardPieceBaseComponent__OnShowDamagePopup(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_String_o *v8; // x1
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_4D2E1DA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19002/*"ef_dm_base"*/);
    byte_4D2E1DA = 1;
  }
  if ( !System_String__IsNullOrEmpty(popText, 0) )
    WarBoardPieceBaseComponent__CreateEffectText(this, v8, popText, v9, taskList, v10);
}


void WarBoardPieceBaseComponent__OnWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x23
  WarBoardData_o *Instance; // x0
  __int64 v7; // x1
  WarBoardManager_o *v8; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x24
  System_Delegate_o **v19; // x25
  System_Delegate_o *v20; // x26
  WarBoardTaskBase_TaskCallback_o *v21; // x27
  System_Delegate_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Delegate_o *v29; // x8
  WarBoardTaskBase_TaskCallback_c *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  float v41; // s14
  float v42; // s8
  float v43; // s9
  float v44; // s11
  float z; // s13
  float x; // s1
  float y; // s2
  float v48; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v50; // s0
  float v51; // s11
  float v52; // s12
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s14
  UnityEngine_GameObject_o *v55; // x24
  WarBoardMovePerformance_o *v56; // x0
  Il2CppObject *v57; // x23
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  float lengthMoveAttack; // s0
  float v69; // s1
  float v70; // s2
  float v71; // s0
  float v72; // s8
  float v73; // s9
  float v74; // s10
  UnityEngine_GameObject_o *v75; // x0
  float v76; // s14
  UnityEngine_GameObject_o *v77; // x22
  WarBoardMovePerformance_o *v78; // x0
  WarBoardTaskBase_o *v79; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v80; // x22
  System_Collections_Generic_List_object__o *v81; // x23
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  WarBoardTaskBase_array *v88; // x23
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  WarBoardData_o *v95; // x21
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  WarBoardData_o *v102; // x21
  WarBoardOrthostichySchedule_o *v103; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  WarBoardParallelSchedule_o *v110; // x21
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  __int64 v121; // x0
  float v122; // [xsp+8h] [xbp-A8h]
  float v123; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v125; // 0:kr14_12.12
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v129; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4D2E1D3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
    sub_1C93AD4(&WarBoardCallbackTask_TypeInfo);
    sub_1C93AD4(&WarBoardMovePerformance_TypeInfo);
    sub_1C93AD4(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C93AD4(&WarBoardParallelSchedule_TypeInfo);
    sub_1C93AD4(&WarBoardTaskBase___TypeInfo);
    byte_4D2E1D3 = 1;
  }
  v5 = sub_1C93D20(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v5, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  v8 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_64;
  v10 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v8, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  v125 = WarBoardManager__GetSquarePosition(v8, squareIndex, 0);
  Instance = v8->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Instance, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v18 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v18, 0, 0);
  if ( !v18 )
    goto LABEL_64;
  v19 = (System_Delegate_o **)(v18 + 32);
  v20 = *(System_Delegate_o **)(v18 + 32);
  v21 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0);
  v22 = System_Delegate__Combine(v20, (System_Delegate_o *)v21, 0);
  v29 = v22;
  if ( v22 )
  {
    v30 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v22->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v19 = v22;
      if ( (WarBoardTaskBase_TaskCallback_c *)v22->klass == v30 )
        goto LABEL_14;
    }
    sub_1C940C8(v22);
  }
  *v19 = v29;
LABEL_14:
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v29, v23, v24, v25, v26, v27, v28);
  if ( !v17 )
    goto LABEL_64;
  items = v17->fields._items;
  v38 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v18;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 4), v18, v31, v32, v33, v34, v35, v36);
  }
  if ( !byte_4D2A13B )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13B = 1;
  }
  v41 = v125.fields.x - SquarePosition.fields.x;
  v42 = v125.fields.y - SquarePosition.fields.y;
  v43 = v125.fields.z - SquarePosition.fields.z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  v44 = sqrtf((float)(v43 * v43) + (float)((float)(v41 * v41) + (float)(v42 * v42)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  z = SquarePosition.fields.z;
  if ( v44 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    v48 = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v41 / v44;
    y = v42 / v44;
    v48 = v43 / v44;
  }
  v50 = v44 - this->fields.lengthOnAttack;
  if ( v50 <= 0.0 )
  {
    v51 = SquarePosition.fields.x;
    v52 = SquarePosition.fields.y;
  }
  else
  {
    v122 = y;
    v123 = x;
    v51 = SquarePosition.fields.x + (float)(x * v50);
    v52 = SquarePosition.fields.y + (float)(y * v50);
    z = SquarePosition.fields.z + (float)(v48 * v50);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v55 = gameObject;
    v56 = (WarBoardMovePerformance_o *)sub_1C93D20(WarBoardMovePerformance_TypeInfo);
    v128.fields.x = v51;
    v128.fields.y = v52;
    v128.fields.z = z;
    v57 = (Il2CppObject *)v56;
    WarBoardMovePerformance___ctor(v56, v55, SquarePosition, v128, pixelPerSecond, 5, 0);
    v64 = v17->fields._items;
    v65 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v17->fields._version;
    if ( !v64 )
      goto LABEL_64;
    v66 = v17->fields._size;
    if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        v57,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v67 = &v64->obj.klass + v66;
      v17->fields._size = v66 + 1;
      v67[4] = (Il2CppClass *)v57;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 4), (int32_t)v57, v58, v59, v60, v61, v62, v63);
    }
    y = v122;
    x = v123;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v69 = x * lengthMoveAttack;
  v70 = y * lengthMoveAttack;
  v71 = v48 * lengthMoveAttack;
  v72 = v51 + v69;
  v73 = v52 + v70;
  v74 = z + v71;
  v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v76 = this->fields.pixelPerSecond;
  v77 = v75;
  v78 = (WarBoardMovePerformance_o *)sub_1C93D20(WarBoardMovePerformance_TypeInfo);
  v126.fields.x = v72;
  v126.fields.y = v73;
  v126.fields.z = v74;
  v129.fields.x = v51;
  v129.fields.y = v52;
  v129.fields.z = z;
  v79 = (WarBoardTaskBase_o *)v78;
  WarBoardMovePerformance___ctor(v78, v77, v126, v129, v76, 4, 0);
  if ( !v10 )
    goto LABEL_64;
  v80 = WarBoardWallData__DecrementBreakPointPerformance(v10, 1, 0);
  v81 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0, 0), !v81)
    || (System_Collections_Generic_List_object___AddRange(
          v81,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v17,
          (System_Collections_Generic_IEnumerable_T__o *)v81,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_1C93B7C(WarBoardTaskBase___TypeInfo, 4)) == 0) )
  {
LABEL_64:
    sub_1C93D2C(Instance, v7);
  }
  v88 = (WarBoardTaskBase_array *)Instance;
  if ( v79 )
  {
    Instance = (WarBoardData_o *)sub_1C93C10(v79, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !LODWORD(v88->max_length) )
    goto LABEL_65;
  v88->m_Items[0] = v79;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v88->m_Items, (int32_t)v79, v82, v83, v84, v85, v86, v87);
  Instance = (WarBoardData_o *)v10->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v8, IconPosition, 0, 0);
  v95 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C93C10(Instance, v88->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v88->max_length) <= 1 )
    goto LABEL_65;
  v88->m_Items[1] = (WarBoardTaskBase_o *)v95;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v88->m_Items[1], (int32_t)v95, v89, v90, v91, v92, v93, v94);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v102 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C93C10(Instance, v88->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v88->max_length) <= 2 )
    goto LABEL_65;
  v88->m_Items[2] = (WarBoardTaskBase_o *)v102;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v88->m_Items[2], (int32_t)v102, v96, v97, v98, v99, v100, v101);
  v103 = (WarBoardOrthostichySchedule_o *)sub_1C93D20(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_38956748(v103, v80, 0);
  if ( v103 )
  {
    Instance = (WarBoardData_o *)sub_1C93C10(v103, v88->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v121 = sub_1C93D50();
      sub_1C93BFC(v121, 0);
    }
  }
  if ( LODWORD(v88->max_length) <= 3 )
LABEL_65:
    sub_1C93D34(Instance);
  v88->m_Items[3] = (WarBoardTaskBase_o *)v103;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v88->m_Items[3], (int32_t)v103, v104, v105, v106, v107, v108, v109);
  v110 = (WarBoardParallelSchedule_o *)sub_1C93D20(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v110, v88, 0);
  v117 = v17->fields._items;
  v118 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v17->fields._version;
  if ( !v117 )
    goto LABEL_64;
  v119 = v17->fields._size;
  if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v110,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
  }
  else
  {
    v120 = &v117->obj.klass + v119;
    v17->fields._size = v119 + 1;
    v120[4] = (Il2CppClass *)v110;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v120 + 4), (int32_t)v110, v111, v112, v113, v114, v115, v116);
  }
  if ( v17->fields._size >= 1 )
    WarBoardManager__AddTask_38679444(v8, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v17, 0);
}


bool WarBoardPieceBaseComponent__PlayEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 1, v3);
}


void WarBoardPieceBaseComponent__PlaySimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v6; // x2

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_5;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0) )
    return;
  WarBoardPieceBaseComponent__StopSimpleAnimation(this, animationName, v6);
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
LABEL_5:
    sub_1C93D2C(simpleAnimation, animationName);
  SimpleAnimation__Play_67370764(simpleAnimation, animationName, 0);
}


void WarBoardPieceBaseComponent__RepareBreakPointByPiece(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct WarBoardPieceData_o *pieceData; // x8
  int breakPoint_k__BackingField; // w20
  WarBoardPieceBaseComponent_o *v5; // x19
  __int64 v6; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_8:
    sub_1C93D2C(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= LODWORD(breakPoints->max_length) )
        sub_1C93D34(this);
      this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v6];
      if ( this )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          breakPoint_k__BackingField > (int)v6,
          0,
          v2);
        pieceData = v5->fields.pieceData;
        ++v6;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void WarBoardPieceBaseComponent__Selectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 1;
}


void WarBoardPieceBaseComponent__SetButtonTweenTarget(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v22; // x1
  Il2CppClass **v23; // x0
  struct UICommonButton_o *button; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D2E1C3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E1C3 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v10 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_24;
      }
      v11 = 0;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v12,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v12,
                                                                       0);
            items = v4->fields._items;
            v20 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v22 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v22;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
            }
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C93D34(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C93D2C(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4D2E1C5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E1C5 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0);
  }
}


bool WarBoardPieceBaseComponent__SetEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *listEffectData; // x20
  System_Predicate_object__o *v17; // x21
  Il2CppObject *v18; // x20
  _QWORD *monitor; // x22
  __int64 v20; // x8
  unsigned __int64 v21; // x23
  bool v22; // w19
  UnityEngine_Object_o *v23; // x21

  if ( (byte_4D2E1D9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
    byte_4D2E1D9 = 1;
  }
  v7 = sub_1C93D20(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = effectKey;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)effectKey, v10, v11, v12, v13, v14, v15);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v17 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    0);
  if ( !listEffectData )
    goto LABEL_18;
  v8 = System_Collections_Generic_List_object___Find(
         listEffectData,
         (System_Predicate_T__o *)v17,
         (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v18 = v8;
  if ( !v8 )
    return v18 != 0;
  monitor = v8[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_1C93D2C(v8, v9);
  v20 = monitor[3];
  if ( (int)v20 >= 1 )
  {
    v21 = 0;
    v22 = isDisp;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1C93D34(v8);
      v23 = (UnityEngine_Object_o *)monitor[v21 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(v23, 0, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, v22, 0);
      }
      LODWORD(v20) = *((_DWORD *)monitor + 6);
      ++v21;
    }
    while ( (__int64)v21 < (int)v20 );
  }
  return v18 != 0;
}


void WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4D2E1C4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E1C4 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardPieceBaseComponent__ShowActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  struct WarBoardPieceData_o *v4; // x8
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20
  UnityEngine_GameObject_o *v6; // x20
  bool activeSelf; // w0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x10
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E1C7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E1C7 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_23;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
    if ( !pieceData )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0);
  }
  v4 = this->fields.pieceData;
  if ( !v4 || (pieceData = (WarBoardPieceData_o *)v4->fields._Cost_k__BackingField) == 0 )
LABEL_23:
    sub_1C93D2C(pieceData, method);
  if ( WarBoardCost__get_HasCost((WarBoardCost_o *)pieceData, 0) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0, 0) )
    {
      pieceData = (WarBoardPieceData_o *)this->fields.currentPieceActionPointRoot;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0);
        pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
        if ( pieceData )
        {
          v6 = this->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pieceData, 0);
          v8 = 112;
          if ( activeSelf )
          {
            v8 = 124;
            v9 = 120;
          }
          else
          {
            v9 = 108;
          }
          if ( activeSelf )
            v10 = 116;
          else
            v10 = 104;
          v11.fields.x = *(float *)((char *)&this->klass + v10);
          v11.fields.y = *(float *)((char *)&this->klass + v9);
          v11.fields.z = *(float *)((char *)&this->klass + v8);
          GameObjectExtensions__SetLocalPosition(v6, v11, 0);
          goto LABEL_22;
        }
      }
      goto LABEL_23;
    }
  }
LABEL_22:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
}


void WarBoardPieceBaseComponent__ShowActionTarget(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_1C93D2C(0, method);
  UnityEngine_GameObject__SetActive(selectObject, 1, 0);
}


bool WarBoardPieceBaseComponent__ShowStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  return 0;
}


bool WarBoardPieceBaseComponent__StopEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 0, v3);
}


void WarBoardPieceBaseComponent__StopSimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_7;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0) )
  {
    simpleAnimation = this->fields.simpleAnimation;
    if ( simpleAnimation )
    {
      SimpleAnimation__Stop_67368280(simpleAnimation, animationName, 0);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0);
        return;
      }
    }
LABEL_7:
    sub_1C93D2C(simpleAnimation, animationName);
  }
}


void WarBoardPieceBaseComponent__Unselectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 0;
}


void WarBoardPieceBaseComponent__UpdateDisplayActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  struct WarBoardPieceData_o *v4; // x8
  UILabel_o *currentActionPointLabel; // x20
  struct WarBoardPieceData_o *v6; // x8
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *currentPieceActionPointLabel; // x20
  int32_t currentActionCount_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  currentActionCount_k__BackingField = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    v4 = this->fields.pieceData;
    if ( !v4 )
      goto LABEL_13;
    currentActionPointLabel = this->fields.currentActionPointLabel;
    currentActionCount_k__BackingField = v4->fields._currentActionCount_k__BackingField;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0);
    if ( !currentActionPointLabel )
      goto LABEL_13;
    UILabel__set_text(currentActionPointLabel, (System_String_o *)pieceData, 0);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_HasCost(pieceData, 0);
  if ( ((unsigned __int8)pieceData & 1) != 0 )
  {
    v6 = this->fields.pieceData;
    if ( v6 )
    {
      Cost_k__BackingField = v6->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
      {
        currentPieceActionPointLabel = this->fields.currentPieceActionPointLabel;
        currentActionCount_k__BackingField = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0);
        if ( currentPieceActionPointLabel )
        {
          UILabel__set_text(currentPieceActionPointLabel, (System_String_o *)pieceData, 0);
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1C93D2C(pieceData, method);
  }
LABEL_12:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
}


void WarBoardPieceBaseComponent__UpdateUiBrightnessByPieceStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_HashSet_T__o *v4; // x22
  WarBoardPieceData_o *pieceData; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_HashSet_T__o **v13; // x21
  System_Collections_Generic_HashSet_T__o *v14; // x23
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v23; // w23
  System_Action_object__o *v24; // x25
  System_Collections_Generic_IEnumerable_T__o *v25; // x24
  System_Action_object__o *v26; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_object__o *v28; // x25
  System_Collections_Generic_IEnumerable_T__o *v29; // x23
  System_Action_object__o *v30; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_object__o *v33; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *removeTweenTargetObjects; // x23
  Il2CppObject *gameObject; // x0
  __int64 v39; // x1
  UnityEngine_GameObject_o *v40; // x0
  Il2CppObject *v41; // x1
  UnityEngine_GameObject_o *v42; // x0
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  Il2CppObject *v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  struct UICommonButton_o *v55; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v64; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2E1CA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_UIWidget__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_UIWidget___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Distinct_GameObject___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_UIWidget__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor___79006616);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__);
    sub_1C93AD4(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__);
    sub_1C93AD4(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
    byte_4D2E1CA = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v3 = sub_1C93D20(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v3, 0);
  v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C93D20(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_372B7CC *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v3 )
    goto LABEL_39;
  *(_QWORD *)(v3 + 24) = v4;
  v13 = (System_Collections_Generic_HashSet_T__o **)(v3 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  v14 = (System_Collections_Generic_HashSet_T__o *)sub_1C93D20(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v14,
    (const MethodInfo_372B7CC *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v3 + 16) = v14;
  v15 = v3 + 16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v14, v16, v17, v18, v19, v20, v21);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_39;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v23 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v24 = (System_Action_object__o *)sub_1C93D20(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v24,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v24,
      (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_39;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, 0);
    if ( v23 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v25 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v26 = (System_Action_object__o *)sub_1C93D20(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v26,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0);
      BasicHelper__ForEach_object_(
        v25,
        (System_Action_T__o *)v26,
        (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v28 = (System_Action_object__o *)sub_1C93D20(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v28,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v28,
      (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v23 & 1) != 0 )
    {
      v29 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v30 = (System_Action_object__o *)sub_1C93D20(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v30,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0);
      BasicHelper__ForEach_object_(
        v29,
        (System_Action_T__o *)v30,
        (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v15 )
    goto LABEL_39;
  if ( *(int *)(*(_QWORD *)v15 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_39;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v33 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v33,
    tweenTargets,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_GameObject___ctor___79006616);
  pieceData = *(WarBoardPieceData_o **)v15;
  if ( !*(_QWORD *)v15 )
    goto LABEL_39;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v63,
    (System_Collections_Generic_HashSet_T__o *)pieceData,
    (const MethodInfo_372C334 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v64 = v63;
  while ( 1 )
  {
    v34 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_35F9AA8 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v34 )
      break;
    current = v64.fields._current;
    if ( !v64.fields._current )
      sub_1C93D2C(v34, v35);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v64.fields._current,
                                   0);
    if ( !removeTweenTargetObjects )
      sub_1C93D2C(gameObject, gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v41 = (Il2CppObject *)v40;
      if ( !v33 )
        sub_1C93D2C(v40, v40);
      goto LABEL_22;
    }
    if ( !*v13 )
      sub_1C93D2C(0, v39);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v13,
           current,
           (const MethodInfo_372BEC0 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v65.fields.r = 0.5;
      v65.fields.g = 0.5;
      v65.fields.b = 0.5;
      v65.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v65, 0);
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v41 = (Il2CppObject *)v42;
      if ( !v33 )
        sub_1C93D2C(v42, v42);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v33,
        v41,
        (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      v66.fields.r = 1.0;
      v66.fields.g = 1.0;
      v66.fields.b = 1.0;
      v66.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v66, 0);
      v43 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v50 = v43;
      if ( !v33 )
        sub_1C93D2C(v43, v43);
      items = v33->fields._items;
      v52 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1C93D2C(v43, v43);
      size = v33->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v43,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v54 + 4), (int32_t)v50, v44, v45, v46, v47, v48, v49);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_35F9AA4 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v55 = this->fields.button;
  v56 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_31C7360 *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_object_(
                                       v56,
                                       (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v55 )
LABEL_39:
    sub_1C93D2C(pieceData, v6);
  v55->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v55->fields.tweenTargets,
    (int32_t)pieceData,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
}


void WarBoardPieceBaseComponent__UpdateUiByBuffChanged(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v4; // x1
  WarBoardPieceStatusLabel_o *v5; // x0

  if ( (byte_4D2E1C9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E1C9 = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0, 0) )
  {
    v5 = this->fields.pieceStatusLabelComponent;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    WarBoardPieceStatusLabel__SetupLabel(v5, this->fields.pieceData, 0);
  }
}


void WarBoardPieceBaseComponent__UpdateWidgetDepth(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t PieceDispPriority; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4D2E1DD & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E1DD = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C93D2C(Instance, v5);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v7);
}


void WarBoardPieceBaseComponent__WidgetDepthIncrement(
        WarBoardPieceBaseComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x21
  struct UIWidget_array *uiWidgets; // x8
  struct UIWidget_array **p_uiWidgets; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int max_length; // w21
  unsigned int i; // w22
  Il2CppClass **v23; // x0
  Il2CppClass *v24; // x8
  Il2CppClass *v25; // t1
  unsigned __int64 v26; // x22
  __int64 v27; // x24
  UnityEngine_Object_o *v28; // x21
  struct UIWidget_array *v29; // x8

  v4 = this;
  if ( (byte_4D2E1D6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
    this = (WarBoardPieceBaseComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E1D6 = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v4->fields.uiWidgets,
      (int32_t)ComponentsInChildren_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    uiWidgets = v4->fields.uiWidgets;
    if ( !uiWidgets )
      goto LABEL_26;
    max_length = uiWidgets->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; ++i )
      {
        if ( !uiWidgets )
          goto LABEL_26;
        if ( i >= LODWORD(uiWidgets->max_length) )
          goto LABEL_28;
        v23 = &uiWidgets->obj.klass + (int)i;
        v25 = v23[4];
        this = (WarBoardPieceBaseComponent_o *)(v23 + 4);
        v24 = v25;
        if ( !v25 )
          goto LABEL_26;
        if ( SLODWORD(v24->_1.interfaceOffsets) >= 1001 )
        {
          this->klass = 0;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)this, 0, v15, v16, v17, v18, v19, v20);
        }
        uiWidgets = *p_uiWidgets;
      }
      if ( !uiWidgets )
LABEL_26:
        sub_1C93D2C(this, v14);
    }
  }
  if ( (int)uiWidgets->max_length >= 1 )
  {
    v26 = 0;
    v27 = (unsigned int)uiWidgets->max_length - 1LL;
    while ( v26 < LODWORD(uiWidgets->max_length) )
    {
      v28 = (UnityEngine_Object_o *)uiWidgets->m_Items[v26];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_26;
        if ( v26 >= LODWORD(v29->max_length) )
          break;
        this = (WarBoardPieceBaseComponent_o *)v29->m_Items[v26];
        if ( !this )
          goto LABEL_26;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0);
      }
      if ( v27 == v26 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v26;
      if ( !*p_uiWidgets )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C93D34(this);
  }
}


WarBoardServantPieceBuffTurnComponent_o *WarBoardPieceBaseComponent__get_BuffTrunNotice(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


WarBoardPieceData_o *WarBoardPieceBaseComponent__get_PieceData(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pieceData;
}


WarBoardControlUiDataComponent_o *WarBoardPieceBaseComponent__get_UiDataComp(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.uiDataComp;
}


void WarBoardPieceBaseComponent_ScriptEffectData___ctor(
        WarBoardPieceBaseComponent_ScriptEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E1E0 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4D2E1E0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceBaseComponent___c___ctor(WarBoardPieceBaseComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *WarBoardPieceBaseComponent___c___GetParticipantVals_b__62_0(
        WarBoardPieceBaseComponent___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0);
}


void WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2E1E3 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2E1E3 = 1;
  }
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2E1E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2E1E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0, 0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2E1E2 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2E1E2 = 1;
  }
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll(0);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4D2E1E4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4D2E1E4 = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C93D2C(0, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4D2E1E5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4D2E1E5 = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C93D2C(0, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4D2E1E6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4D2E1E6 = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C93D2C(0, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4D2E1E7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4D2E1E7 = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C93D2C(0, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_1C93D2C(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4D2E1E8 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2E1E8 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4D2E1E9 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2E1E9 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_g__AddAfterTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v9; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4D2E1EA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E1EA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0);
  if ( !v3 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0);
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_1C93D2C(Instance, v5);
  v9 = WarBoardManager__GetEventTasks(Instance, 37, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v9,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0);
      return;
    }
    goto LABEL_13;
  }
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_1C93D2C(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_1C93D2C(0, method);
  WarBoardManager__TransitionBattle(warBoardManager, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_1___OnAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *CS___8__locals1; // x8
  WarBoardPieceBaseComponent___c__DisplayClass63_1_o *v3; // x19
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v4; // x8
  struct WarBoardManager_o *warBoardManager; // x8
  struct MapCamera_o *mapCamera; // x8
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v7; // x8
  struct WarBoardManager_o *v8; // x8
  struct MapCamera_o *v9; // x8
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v10; // x8
  struct WarBoardManager_o *v11; // x8
  struct MapCamera_o *v12; // x8
  struct UnityEngine_Vector2_o *mScrl; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  v3 = this;
  this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)CS___8__locals1->fields.warBoardManager;
  if ( !this )
    goto LABEL_16;
  WarBoardManager__ClearPartyBuff((WarBoardManager_o *)this, 0);
  v4 = v3->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_16;
  warBoardManager = v4->fields.warBoardManager;
  if ( !warBoardManager )
    goto LABEL_16;
  mapCamera = warBoardManager->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_16;
  this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)mapCamera->fields.mZoom;
  if ( !this )
    goto LABEL_16;
  MapZoom__SetZoomSize((MapZoom_o *)this, v3->fields.prevCameraSize, 1, 0, 0);
  v7 = v3->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7->fields.warBoardManager;
  if ( !v8
    || (v9 = v8->fields.mapCamera) == 0
    || (this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v9->fields.mScrl) == 0
    || (MapScroll__SetScrlPos((MapScroll_o *)this, v3->fields.prevCameraPos, 0), (v10 = v3->fields.CS___8__locals1) == 0)
    || (v11 = v10->fields.warBoardManager) == 0
    || (v12 = v11->fields.mapCamera) == 0
    || (mScrl = (struct UnityEngine_Vector2_o *)v12->fields.mScrl) == 0 )
  {
LABEL_16:
    sub_1C93D2C(this, method);
  }
  mScrl[3] = v3->fields.prevCameraPos;
}


void WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_4D2E1EC & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E1EC = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C93D2C(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0);
}


bool WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_1C93D2C(this, method);
  return this->fields.moveAfterActionCheck && targetPiece->fields._isDead_k__BackingField;
}


void WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  int32_t id; // w21
  struct WarBoardPieceData_o *v8; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v10; // x22
  int32_t v11; // w2
  bool v12; // w4
  WarBoardMessageMaster_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w3
  System_Int32_array *v16; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v18; // x0
  WarBoardManager_o *v19; // x19

  if ( (byte_4D2E1EB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_4D2E1EB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(targetPiece, 0);
  if ( ((unsigned __int8)targetPiece & 1) != 0 )
  {
    warBoardManager = this->fields.warBoardManager;
    if ( !warBoardManager )
      goto LABEL_25;
    targetPiece = (WarBoardPieceData_o *)warBoardManager->fields._warBoardData_k__BackingField;
    if ( !targetPiece )
      goto LABEL_25;
    id = WarBoardData__get_id((WarBoardData_o *)targetPiece, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v8 = this->fields.targetPiece;
    if ( !v8 )
      goto LABEL_25;
    breakPoint_k__BackingField = v8->fields._breakPoint_k__BackingField;
    v10 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0);
    if ( !v10 )
      goto LABEL_25;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v11 = 12;
      v12 = 1;
      v13 = v10;
      v14 = id;
      v15 = breakPoint_k__BackingField;
    }
    else
    {
      v11 = 10;
      v13 = v10;
      v14 = id;
      v15 = breakPoint_k__BackingField;
      v12 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v13, v14, v11, v15, v12, 0);
    if ( !v3 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  targetPiece = (WarBoardPieceData_o *)this->fields.__4__this;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceBaseComponent__GetParticipantVals(
                                         (WarBoardPieceBaseComponent_o *)targetPiece,
                                         this->fields.targetPiece,
                                         0);
  if ( !this->fields.warBoardManager )
    goto LABEL_25;
  v16 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0);
  if ( !v3 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v16, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  v18 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v16, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v18,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v19 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v19 )
    {
      WarBoardManager__InsertRunningTask(v19, (WarBoardTaskBase_array *)targetPiece, 0);
      return;
    }
LABEL_25:
    sub_1C93D2C(targetPiece, v4);
  }
}


void WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass66_0___OnWallAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_1C93D2C(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_4D2E1EE & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E1EE = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C93D2C(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0);
}


bool WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *targetWall; // x8

  targetWall = this->fields.targetWall;
  if ( targetWall )
    LOBYTE(targetWall) = targetWall->fields._isDestroy_k__BackingField;
  return (unsigned __int8)targetWall & this->fields.moveAfterActionCheck;
}


void WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4D2E1ED & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E1ED = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0, 0);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0);
      return;
    }
LABEL_9:
    sub_1C93D2C(Instance, v5);
  }
}


void WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardPieceBaseComponent___c__DisplayClass83_0___SetEffect_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        WarBoardPieceBaseComponent_ScriptEffectData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C93D2C(this, 0);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0);
}