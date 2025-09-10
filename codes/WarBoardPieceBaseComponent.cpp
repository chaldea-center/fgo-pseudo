void WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C24B22 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&StringLiteral_6855/*"Frame{0}"*/);
    byte_4C24B22 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.listEffectData, (int32_t)v3, v4, v5);
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_C09650;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_C0AD10;
  this->fields.lengthMoveAttack = 25.0;
  v6 = StringLiteral_6855/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6855/*"Frame{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseFrameName, v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.removeTweenTargetObjects, (int32_t)v9, v10, v11);
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
  float v16; // s11
  float v17; // s12
  float v18; // s14
  WarBoardMovePerformance_o *v19; // x0
  Il2CppObject *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v27; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v28; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_4C24B19 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardMovePerformance_TypeInfo);
    byte_4C24B19 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v16 = SquarePosition.fields.x;
  v17 = SquarePosition.fields.y;
  v18 = SquarePosition.fields.z;
  v19 = (WarBoardMovePerformance_o *)sub_1C2D6DC(WarBoardMovePerformance_TypeInfo);
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  v32.fields.x = v16;
  v32.fields.y = v17;
  v32.fields.z = v18;
  v20 = (Il2CppObject *)v19;
  WarBoardMovePerformance___ctor(v19, gameObject, v31, v32, pixelPerSecond, 0, 0);
  items = v9->fields._items;
  v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v20,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v20;
    sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v27 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v27,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v28 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v28,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v9,
                                             (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_1C2D6EC(pieceData, v10);
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

  if ( (byte_4C24B0A & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent_ClickIcon__);
    byte_4C24B0A = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v13 = (_QWORD *)sub_1C2D4A8(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C2D474(v13, v13[4]);
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
      sub_1C2D6EC(Instance, v4);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0) )
    {
      v7 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C2D4A8(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v16 = (_QWORD *)sub_1C2D4A8(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C2D474(v16, v16[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v20 = (_QWORD *)sub_1C2D4A8(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C2D474(v20, v20[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      v23 = (_QWORD *)sub_1C2D4A8(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v24 = (System_Reflection_MethodBase_o *)sub_1C2D474(v23, v23[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Nullable_Vector3__o v22; // 0:x3.16
  System_Nullable_Vector3__o v23; // 0:x5.16

  if ( (byte_4C24B1F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1C2D490(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_4C24B1F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_31B3A34 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
    v13 = UnityEngine_Object__Instantiate_object__51752420(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v12,
            (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    v14 = (WarBoardCommonEffectPerformance_o *)sub_1C2D6DC(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v22.fields.hasValue = 0;
    *(_QWORD *)&v22.fields.value.fields.y = 0;
    *(_QWORD *)&v23.fields.hasValue = 0;
    *(_QWORD *)&v23.fields.value.fields.y = 0;
    v15 = (Il2CppObject *)v14;
    WarBoardCommonEffectPerformance___ctor(
      v14,
      0,
      (UnityEngine_GameObject_o *)v13,
      v22,
      v23,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0);
    if ( v7 )
    {
      items = v7->fields._items;
      v19 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v15,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v21 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v15;
          sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v7,
              (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_37855764(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v7,
            0);
          return;
        }
      }
    }
LABEL_21:
    sub_1C2D6EC(Instance, v9);
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
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Nullable_Vector3__o v23; // 0:x3.16
  System_Nullable_Vector3__o v24; // 0:x5.16

  if ( (byte_4C24B20 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardCommonEffectPerformance_TypeInfo);
    byte_4C24B20 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0, effectDamageBaseObject, 0) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    v15 = (WarBoardCommonEffectPerformance_o *)sub_1C2D6DC(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v23.fields.hasValue = 0;
    *(_QWORD *)&v23.fields.value.fields.y = 0;
    *(_QWORD *)&v24.fields.hasValue = 0;
    *(_QWORD *)&v24.fields.value.fields.y = 0;
    v16 = (Il2CppObject *)v15;
    WarBoardCommonEffectPerformance___ctor(v15, 0, v14, v23, v24, (System_Nullable_Vector3__o)0, 0, 0, 0, 0);
    if ( v10 )
    {
      items = v10->fields._items;
      v20 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v10->fields._version;
      if ( items )
      {
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v16,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v16;
          sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v10,
              (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_37855764(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
            0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C2D6EC(Instance, v12);
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
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o WarBoardPieceBaseComponent__GetIconPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
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
  const MethodInfo *v20; // x3

  v4 = this;
  if ( (byte_4C24B13 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C2D490(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4C24B13 = 1;
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
             (const MethodInfo_30EB278 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v7,
               (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_1C2D6EC(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)this[1].fields.turnDarkUiWidgetsAroundActionCount;
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
      _9__62_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__62_0,
        v17,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v19, v20);
    }
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                m_CachedPtr,
                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                (const MethodInfo_3107D9C *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v7,
             (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1C7DC00(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C7DBA4(inited);
  return **(System_Int32_array ***)(v12 + 184);
}


WarBoardSimpleAnimationPerformance_o *WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4C24B1B & 1) == 0 )
  {
    sub_1C2D490(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4C24B1B = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1C2D6DC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0);
  return v6;
}


void WarBoardPieceBaseComponent__HideActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_4C24B0C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B0C = 1;
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
    sub_1C2D6EC(currentActionPointRoot, method);
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
    sub_1C2D6EC(0, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0);
}


void WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_4C24B0F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4C24B0F = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C7DBA4(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C7DBA4(v2);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_1C2D6EC(0, method);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *transform; // x21
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v14; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_c **v18; // x25
  unsigned __int64 v19; // x29
  float v20; // s8
  __int64 v21; // x23
  int v22; // w26
  float v23; // s9
  __int64 v24; // x27
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Object_c *v27; // x8
  UnityEngine_Object_c **v28; // x21
  UnityEngine_Transform_o *v29; // x25
  UnityEngine_GameObject_o *v30; // x25
  WarBoardBreakPointComponent_o *v31; // x24
  struct UIWidget_o *breakPointParent; // x8
  int32_t mDepth; // w28
  bool isMaster; // w25
  const MethodInfo *v35; // x6
  unsigned int *v36; // x25
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  struct WarBoardBreakPointComponent_array *v40; // x8
  float maxSpacing; // s0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UnityEngine_Transform_array *v44; // x21
  const MethodInfo *v45; // x3
  UnityEngine_Transform_o *v46; // x22
  const MethodInfo *v47; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v52; // x21
  UnityEngine_Object_o *v53; // x22
  Il2CppObject *v54; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  UnityEngine_Object_o *v58; // x21
  Il2CppObject *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  __int64 v62; // x0
  __int64 v63; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24B06 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&UnityEngine_Transform___TypeInfo);
    sub_1C2D490(&WarBoardBreakPointComponent___TypeInfo);
    sub_1C2D490(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C2D490(&StringLiteral_23126/*"root_text/type01/dm_base"*/);
    sub_1C2D490(&StringLiteral_18817/*"ef_dm_base"*/);
    byte_4C24B06 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.simpleAnimation, (int32_t)Component_object, v8, v9);
  this->fields.pieceData = pieceData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.pieceData, (int32_t)pieceData, v10, v11);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v14 = (struct WarBoardBreakPointComponent_array *)sub_1C2D538(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v14;
  p_breakPoints = &this->fields.breakPoints;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.breakPoints, (int32_t)v14, v16, v17);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_26;
  v18 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v19 = 0;
    v20 = 0.0;
    v21 = 1;
    v22 = 2 * breakPointMax_k__BackingField - 2;
    v23 = (float)*(int *)(gameObject + 168) / (float)(int)breakPointMax_k__BackingField;
    v24 = 8;
    v63 = breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      v27 = *v18;
      v28 = v18;
      v29 = v26;
      if ( !v27->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v27);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__51752420(
                              breakPointPrefab,
                              v29,
                              (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
      if ( !gameObject )
        goto LABEL_26;
      v30 = (UnityEngine_GameObject_o *)gameObject;
      v31 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v30, 0);
      if ( !gameObject )
        goto LABEL_26;
      v65.fields.y = 0.0;
      v65.fields.z = 0.0;
      v65.fields.x = v20;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v65, 0);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      mDepth = breakPointParent->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0);
      if ( !v31 )
        goto LABEL_26;
      WarBoardBreakPointComponent__Initialize(v31, v22 + mDepth, v21, isMaster, gameObject & 1, 0, v35);
      v36 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      gameObject = sub_1C2D5CC(v31, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
      if ( !gameObject )
        goto LABEL_57;
      if ( v19 >= v36[6] )
        goto LABEL_56;
      *(_QWORD *)&v36[v24] = v31;
      sub_1C2D434((CGThumbnailListItem_o *)&v36[v24], (int32_t)v31, v37, v38);
      v40 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      if ( v19 >= LODWORD(v40->max_length) )
        goto LABEL_56;
      v18 = v28;
      gameObject = *(__int64 *)((char *)&v40->obj.klass + v24 * 4);
      if ( !gameObject )
        goto LABEL_26;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v19 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v39);
      if ( v63 == v21 )
        break;
      maxSpacing = v31->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      ++v19;
      v22 -= 2;
      if ( maxSpacing >= v23 )
        maxSpacing = v23;
      ++v21;
      v20 = v20 + maxSpacing;
      v24 += 2;
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
  sub_1C2D434((CGThumbnailListItem_o *)&pieceData->fields.pieceComponent, (int32_t)this, v42, v43);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
LABEL_30:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    return;
  }
  v44 = (UnityEngine_Transform_array *)sub_1C2D538(UnityEngine_Transform___TypeInfo, 1);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v44 )
    goto LABEL_26;
  v46 = (UnityEngine_Transform_o *)gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C2D5CC(gameObject, v44->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_57:
      v62 = sub_1C2D710();
      sub_1C2D5B8(v62, 0);
    }
  }
  if ( !LODWORD(v44->max_length) )
LABEL_56:
    sub_1C2D6F4(gameObject, v6, v37);
  v44->m_Items[0] = v46;
  sub_1C2D434((CGThumbnailListItem_o *)v44->m_Items, (int32_t)v46, v37, v45);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v44, v47);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_26;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v49);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v50);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_18817/*"ef_dm_base"*/,
                               (const MethodInfo_31B3A34 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !(*v18)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v18);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v53 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !(*v18)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v18);
    if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
      v52 = (UnityEngine_Transform_o *)v53;
    if ( !(*v18)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v18);
    v54 = UnityEngine_Object__Instantiate_object__51752420(
            CommonEffectAsset_object,
            v52,
            (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v54;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effectDamageBaseObject, (int32_t)v54, v56, v57);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0, 0) )
    {
      v58 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_23126/*"root_text/type01/dm_base"*/,
                                      0);
      if ( !(*v18)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v18);
      gameObject = UnityEngine_Object__op_Inequality(v58, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v58 )
          goto LABEL_26;
        v59 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v58,
                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v59;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effectDamageBaseLabel, (int32_t)v59, v60, v61);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_26:
        sub_1C2D6EC(gameObject, v6);
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


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__OnAfterAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  WarBoardPieceData_o *Piece_37670316; // x0
  WarBoardData_o **v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x24
  WarBoardTaskBase_TaskCallback_o *v20; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  float32x2_t v30; // d9
  float v31; // s10
  float z; // s8
  float32x2_t v33; // d0 OVERLAPPED
  float32x2_t v34; // d9
  float v35; // s8
  float v36; // s10
  float32x2_t v37; // d9
  float v38; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v41; // s0
  unsigned __int64 v42; // d1
  float v43; // s0
  __int64 v44; // x24
  WarBoardTaskBase_TaskCallback_o *v45; // x25
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct WarBoardPieceData_o *v48; // x8
  UnityEngine_GameObject_o *v49; // x26
  float v50; // s8
  float v51; // s9
  float v52; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v56; // s14
  WarBoardMovePerformance_o *v57; // x0
  WarBoardTaskBase_o *v58; // x25
  bool IsEnabledMovedAfterDefend; // w0
  System_Func_bool__o *v60; // x23
  __int64 v61; // x21
  System_Delegate_o **v62; // x22
  System_Delegate_o *v63; // x23
  WarBoardPieceBaseComponent___c_c *v64; // x0
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v66; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_Delegate_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Delegate_o *v73; // x8
  WarBoardTaskBase_TaskCallback_c *v74; // x1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  unsigned __int64 v81; // [xsp+0h] [xbp-A0h]
  __int64 v82; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C24B16 & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__);
    sub_1C2D490(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
    sub_1C2D490(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C2D490(&WarBoardCallbackTask_TypeInfo);
    sub_1C2D490(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C2D490(&WarBoardMovePerformance_TypeInfo);
    byte_4C24B16 = 1;
  }
  v5 = sub_1C2D6DC(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_60;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 52) = squareIndex;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 24) = Instance;
  v12 = (WarBoardData_o **)(v5 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)Instance, v13, v14);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_37670316 = WarBoardData__GetPiece_37670316(gameObject, *(_DWORD *)(v5 + 52), 0);
  *(_QWORD *)(v5 + 16) = Piece_37670316;
  v16 = (WarBoardData_o **)(v5 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Piece_37670316, v17, v18);
  v19 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v19, 0, 0);
  v20 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v19 )
    goto LABEL_60;
  *(_QWORD *)(v19 + 32) = v20;
  sub_1C2D434((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v20, v21, v22);
  if ( !v10 )
    goto LABEL_60;
  items = v10->fields._items;
  v26 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v19,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v19;
    sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), v19, v23, v24);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v12;
  if ( !*v12 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)v33.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 52),
                                            0);
  v30.n64_u64[0] = *(unsigned __int64 *)(v5 + 40);
  v31 = *(float *)(v5 + 48);
  z = v84.fields.z;
  v33.n64_u32[1] = LODWORD(v84.fields.y);
  if ( !byte_4C20DA3 )
  {
    v81 = v33.n64_u64[0];
    sub_1C2D490(&System_Math_TypeInfo);
    v33.n64_u64[0] = v81;
    byte_4C20DA3 = 1;
  }
  v34.n64_u64[0] = vsub_f32(v33, v30).n64_u64[0];
  v35 = z - v31;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v36 = vaddv_f32(vmul_f32(v34, v34)) + (float)(v35 * v35);
  if ( !byte_4C20DA4 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA4 = 1;
  }
  v84.fields.y = sqrtf(v36);
  v82 = *(_QWORD *)&v84.fields.y;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    *(_QWORD *)&v84.fields.y = v82;
  }
  if ( v84.fields.y <= 0.00001 )
  {
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v37.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    v38 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v37.n64_u64[0] = vdiv_f32(v34, vdup_lane_s32(*(int32x2_t *)&v84.fields.y, 0)).n64_u64[0];
    v38 = v35 / v84.fields.y;
  }
  gameObject = *v16;
  if ( !*v16 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v41 = *(float *)&v82 - lengthOnAttack;
  if ( (float)(*(float *)&v82 - lengthOnAttack) > 0.0 )
  {
    v42 = vadd_f32(vmul_n_f32(v37, v41), *(float32x2_t *)(v5 + 40)).n64_u64[0];
    v43 = (float)(v38 * v41) + *(float *)(v5 + 48);
    *(_QWORD *)(v5 + 40) = v42;
    *(float *)(v5 + 48) = v43;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0);
  v44 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v44, 0, 0);
  v45 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v45,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0);
  if ( !v44 )
    goto LABEL_60;
  *(_QWORD *)(v44 + 32) = v45;
  sub_1C2D434((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v45, v46, v47);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v48 = this->fields.pieceData;
  if ( !v48 )
    goto LABEL_60;
  v49 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v50 = *(float *)(v5 + 40);
  v51 = *(float *)(v5 + 44);
  v52 = *(float *)(v5 + 48);
  v85 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v48->fields._nowSquareIndex_k__BackingField,
          0);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v85.fields.x;
  y = v85.fields.y;
  v56 = v85.fields.z;
  v57 = (WarBoardMovePerformance_o *)sub_1C2D6DC(WarBoardMovePerformance_TypeInfo);
  v86.fields.x = v50;
  v86.fields.y = v51;
  v86.fields.z = v52;
  v87.fields.x = x;
  v87.fields.y = y;
  v87.fields.z = v56;
  v58 = (WarBoardTaskBase_o *)v57;
  WarBoardMovePerformance___ctor(v57, v49, v86, v87, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0) )
  {
    gameObject = *v16;
    if ( !*v16 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  *(_BYTE *)(v5 + 56) = IsEnabledMovedAfterDefend;
  v60 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v60,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0);
  v61 = sub_1C2D6DC(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v61, v60, (WarBoardTaskBase_o *)v44, v58, 0);
  if ( !v61 )
LABEL_60:
    sub_1C2D6EC(gameObject, v7);
  v62 = (System_Delegate_o **)(v61 + 40);
  v63 = *(System_Delegate_o **)(v61 + 40);
  v64 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v64 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__65_3 = v64->static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v64->static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v66,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0);
    v67 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v67->__9__65_3 = _9__65_3;
    sub_1C2D434((CGThumbnailListItem_o *)&v67->__9__65_3, (int32_t)_9__65_3, v68, v69);
  }
  v70 = System_Delegate__Combine(v63, (System_Delegate_o *)_9__65_3, 0);
  v73 = v70;
  if ( v70 )
  {
    v74 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v70->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v62 = v70;
      if ( (WarBoardTaskBase_TaskCallback_c *)v70->klass == v74 )
        goto LABEL_54;
    }
    sub_1C2D9AC(v70);
  }
  *v62 = v73;
LABEL_54:
  sub_1C2D434((CGThumbnailListItem_o *)(v61 + 40), (int32_t)v73, v71, v72);
  v77 = v10->fields._items;
  v78 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v10->fields._version;
  if ( !v77 )
    goto LABEL_60;
  v79 = v10->fields._size;
  if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v61,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v80 = &v77->obj.klass + v79;
    v10->fields._size = v79 + 1;
    v80[4] = (Il2CppClass *)v61;
    sub_1C2D434((CGThumbnailListItem_o *)(v80 + 4), v61, v75, v76);
  }
  gameObject = *v12;
  if ( !*v12 )
    goto LABEL_60;
  WarBoardManager__AddTask_37855764(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
    0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  WarBoardWallData_o *Wall; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x23
  WarBoardTaskBase_TaskCallback_o *v19; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  int32x2_t v29; // d3
  float32x2_t v30; // d9
  float v31; // s10
  float v32; // s2
  float v33; // s8
  unsigned __int32 v34; // s1
  float32x2_t v35; // d0 OVERLAPPED
  float32x2_t v36; // d9
  float v37; // s8
  float v38; // s10
  float32x2_t v39; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v42; // s2
  float v43; // s1
  __int64 v44; // x23
  WarBoardTaskBase_TaskCallback_o *v45; // x24
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct WarBoardPieceData_o *v48; // x8
  UnityEngine_GameObject_o *v49; // x25
  float v50; // s8
  float v51; // s9
  float v52; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v56; // s14
  WarBoardMovePerformance_o *v57; // x0
  WarBoardTaskBase_o *v58; // x24
  System_Func_bool__o *v59; // x25
  WarBoardConditionalJumpTask_o *v60; // x19
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  unsigned __int64 v67; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v68; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v69; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C24B18 & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__);
    sub_1C2D490(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
    sub_1C2D490(&WarBoardCallbackTask_TypeInfo);
    sub_1C2D490(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C2D490(&WarBoardMovePerformance_TypeInfo);
    byte_4C24B18 = 1;
  }
  v5 = sub_1C2D6DC(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 44) = squareIndex;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 16) = Instance;
  v12 = (WarBoardData_o **)(v5 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Instance, v13, v14);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v5 + 44), 1, 0);
  *(_QWORD *)(v5 + 48) = Wall;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), (int32_t)Wall, v16, v17);
  v18 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v18, 0, 0);
  v19 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v18 )
    goto LABEL_40;
  *(_QWORD *)(v18 + 32) = v19;
  sub_1C2D434((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v19, v20, v21);
  if ( !v10 )
    goto LABEL_40;
  items = v10->fields._items;
  v25 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v18,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v18;
    sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), v18, v22, v23);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v12;
  if ( !*v12 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 16);
  *(UnityEngine_Vector3_o *)(v5 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)v35.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 44),
                                            0);
  v30.n64_u64[0] = *(unsigned __int64 *)(v5 + 32);
  v31 = *(float *)(v5 + 40);
  v33 = v32;
  v35.n64_u32[1] = v34;
  if ( !byte_4C20DA3 )
  {
    v67 = v35.n64_u64[0];
    sub_1C2D490(&System_Math_TypeInfo);
    v35.n64_u64[0] = v67;
    byte_4C20DA3 = 1;
  }
  v36.n64_u64[0] = vsub_f32(v35, v30).n64_u64[0];
  v37 = v33 - v31;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v38 = vaddv_f32(vmul_f32(v36, v36)) + (float)(v37 * v37);
  if ( !byte_4C20DA4 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA4 = 1;
  }
  v29.n64_f32[0] = sqrtf(v38);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    v68 = v29.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v29.n64_u64[0] = v68;
  }
  if ( v29.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4C20DA1 )
    {
      v69 = v29.n64_u32[0];
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      v29.n64_u32[0] = v69;
      byte_4C20DA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v39.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v39.n64_u64[0] = vdiv_f32(v36, vdup_lane_s32(v29, 0)).n64_u64[0];
    z = v37 / v29.n64_f32[0];
  }
  v42 = v29.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v42 > 0.0 )
  {
    v43 = (float)(z * v42) + *(float *)(v5 + 40);
    *(float32x2_t *)(v5 + 32) = vadd_f32(vmul_n_f32(v39, v42), *(float32x2_t *)(v5 + 32));
    *(float *)(v5 + 40) = v43;
  }
  v44 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v44, 0, 0);
  v45 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v45,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0);
  if ( !v44 )
    goto LABEL_40;
  *(_QWORD *)(v44 + 32) = v45;
  sub_1C2D434((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v45, v46, v47);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v48 = this->fields.pieceData;
  if ( !v48 )
    goto LABEL_40;
  v49 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v50 = *(float *)(v5 + 32);
  v51 = *(float *)(v5 + 36);
  v52 = *(float *)(v5 + 40);
  v71 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v48->fields._nowSquareIndex_k__BackingField,
          0);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v71.fields.x;
  y = v71.fields.y;
  v56 = v71.fields.z;
  v57 = (WarBoardMovePerformance_o *)sub_1C2D6DC(WarBoardMovePerformance_TypeInfo);
  v72.fields.x = v50;
  v72.fields.y = v51;
  v72.fields.z = v52;
  v73.fields.x = x;
  v73.fields.y = y;
  v73.fields.z = v56;
  v58 = (WarBoardTaskBase_o *)v57;
  WarBoardMovePerformance___ctor(v57, v49, v72, v73, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  *(_BYTE *)(v5 + 56) = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0);
  v59 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v59,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0);
  v60 = (WarBoardConditionalJumpTask_o *)sub_1C2D6DC(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor(v60, v59, (WarBoardTaskBase_o *)v44, v58, 0);
  v63 = v10->fields._items;
  v64 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v10->fields._version;
  if ( !v63 )
    goto LABEL_40;
  v65 = v10->fields._size;
  if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v60,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &v63->obj.klass + v65;
    v10->fields._size = v65 + 1;
    v66[4] = (Il2CppClass *)v60;
    sub_1C2D434((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v60, v61, v62);
  }
  gameObject = *v12;
  if ( !*v12 )
LABEL_40:
    sub_1C2D6EC(gameObject, v7);
  WarBoardManager__AddTask_37855764(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
    0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x23
  __int64 Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 *v10; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v12; // x22
  float x; // s11
  float y; // s9
  float z; // s10
  float v16; // s8
  float v17; // s12
  WarBoardSquareData_o *Square; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  const MethodInfo *v22; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v25; // x0
  __int64 v26; // x25
  WarBoardTaskBase_TaskCallback_c **v27; // x19
  System_Delegate_o **v28; // x26
  System_Delegate_o *v29; // x27
  WarBoardTaskBase_TaskCallback_o *v30; // x28
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  WarBoardPieceBaseComponent_c *v34; // x8
  WarBoardTaskBase_TaskCallback_c *v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  float v42; // s13
  float v43; // s14
  float v44; // s12
  float v45; // s8
  float v46; // s14
  float v47; // s13
  float v48; // s15
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  float v51; // s0
  float v52; // s3
  float v53; // s1
  float v54; // s2
  float v55; // s0
  float v56; // s15
  float v57; // s8
  float v58; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s12
  UnityEngine_GameObject_o *v61; // x26
  WarBoardMovePerformance_o *v62; // x0
  Il2CppObject *v63; // x25
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  System_Collections_Generic_List_object__o *v70; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v71; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v72; // x0
  float lengthMoveAttack; // s0
  float v74; // s8
  float v75; // s12
  float v76; // s13
  UnityEngine_GameObject_o *v77; // x0
  float v78; // s14
  UnityEngine_GameObject_o *v79; // x21
  WarBoardMovePerformance_o *v80; // x0
  WarBoardTaskBase_o *v81; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v82; // x21
  WarBoardMessageMaster_o *v83; // x23
  int32_t id; // w26
  System_Collections_Generic_List_object__o *v85; // x0
  int32_t breakPoint_k__BackingField; // w27
  int32_t v87; // w2
  bool v88; // w4
  WarBoardMessageMaster_o *v89; // x0
  int32_t v90; // w1
  int32_t v91; // w3
  __int64 v92; // x24
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  Il2CppObject **v95; // x22
  float lengthOnEncount; // s0
  float v97; // s1
  float v98; // s12
  float v99; // s2
  float v100; // s0
  float v101; // s8
  float v102; // s14
  float v103; // s9
  float v104; // s11
  float v105; // s15
  float v106; // s13
  float v107; // s14
  float v108; // s10
  float v109; // s12
  float v110; // s13
  float v111; // s14
  float v112; // s15
  struct UnityEngine_Vector3_StaticFields *v113; // x8
  float v114; // s1
  _QWORD *monitor; // x8
  __int64 v116; // x8
  float v117; // s10
  float ZoomSize; // s0
  __int64 v119; // x8
  __int64 v120; // x8
  __int64 v121; // x8
  const MethodInfo_38B3EC8 *v122; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v124; // x8
  WarBoardManager_o *v125; // x23
  float v126; // s8
  float v127; // s10
  float encountCameraSize; // s0
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v130; // x3
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  __int64 v136; // x1
  Il2CppClass **v137; // x0
  System_Collections_Generic_IEnumerable_T__o *v138; // x23
  __int64 v139; // x2
  const MethodInfo *v140; // x3
  WarBoardTaskBase_array *v141; // x23
  WarBoardManager_o *v142; // x24
  int v143; // s0 OVERLAPPED
  const MethodInfo *v146; // x3
  WarBoardTaskBase_o *v147; // x24
  const MethodInfo *v148; // x3
  WarBoardTaskBase_o *v149; // x24
  const MethodInfo *v150; // x2
  const MethodInfo *v151; // x3
  WarBoardTaskBase_o *v152; // x22
  WarBoardOrthostichySchedule_o *v153; // x22
  const MethodInfo *v154; // x3
  WarBoardParallelSchedule_o *v155; // x21
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  struct System_Object_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  Il2CppClass **v161; // x0
  CGThumbnailListItem_o *v162; // x0
  int32_t v163; // w1
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  WarBoardPieceBaseComponent___c_c *v166; // x8
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v168; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v169; // x0
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  WarBoardTaskBase_TaskCallback_o *v174; // x26
  System_Delegate_o *v175; // x0
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  WarBoardTaskBase_TaskCallback_c *v178; // x1
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  struct System_Object_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  Il2CppClass **v184; // x0
  System_Delegate_o *v185; // x23
  Il2CppObject *v186; // x22
  WarBoardTaskBase_TaskCallback_o *v187; // x24
  WarBoardPieceBaseComponent_c *v188; // x0
  WarBoardTaskBase_TaskCallback_c *v189; // x1
  System_Delegate_o *v190; // x22
  WarBoardPieceBaseComponent___c_c *v191; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v193; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v194; // x0
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  WarBoardPieceBaseComponent_c *v197; // x0
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  WarBoardTaskBase_TaskCallback_c *v200; // x1
  __int64 v201; // x0
  float v202; // [xsp+0h] [xbp-E0h]
  float v203; // [xsp+4h] [xbp-DCh]
  float v204; // [xsp+10h] [xbp-D0h]
  float v205; // [xsp+14h] [xbp-CCh]
  WarBoardManager_o **v206; // [xsp+18h] [xbp-C8h]
  float v207; // [xsp+24h] [xbp-BCh]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v209; // [xsp+30h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v210; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v212; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v213; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v214; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v215; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v216; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v217; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v218; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C24B14 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__);
    sub_1C2D490(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__);
    sub_1C2D490(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    sub_1C2D490(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C2D490(&WarBoardCallbackTask_TypeInfo);
    sub_1C2D490(&WarBoardMovePerformance_TypeInfo);
    sub_1C2D490(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C2D490(&WarBoardParallelSchedule_TypeInfo);
    sub_1C2D490(&WarBoardTaskBase___TypeInfo);
    sub_1C2D490(&StringLiteral_8933/*"MasterDamage"*/);
    byte_4C24B14 = 1;
  }
  v5 = sub_1C2D6DC(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v5, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v5 )
    goto LABEL_157;
  *(_QWORD *)(v5 + 24) = Instance;
  v10 = (__int64 *)(v5 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), Instance, v8, v9);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardData__GetPiece_37670316((WarBoardData_o *)Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_157;
  v12 = (WarBoardPieceData_o *)Instance;
  Instance = *v10;
  if ( !*v10 )
    goto LABEL_157;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = *v10;
  if ( !*v10 )
    goto LABEL_157;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v212 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0);
  v207 = v212.fields.x;
  if ( !*v10 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v10 + 440);
  if ( !Instance )
    goto LABEL_157;
  v16 = v212.fields.y;
  v17 = v212.fields.z;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0);
  *(_QWORD *)(v5 + 16) = Square;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Square, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v12, v22);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0);
  if ( !v21 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v206 = (WarBoardManager_o **)(v5 + 24);
  v25 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)v25,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v26 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v26, 0, 0);
  if ( !v26 )
    goto LABEL_157;
  v27 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v28 = (System_Delegate_o **)(v26 + 32);
  v29 = *(System_Delegate_o **)(v26 + 32);
  v30 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0);
  v31 = System_Delegate__Combine(v29, (System_Delegate_o *)v30, 0);
  v34 = (WarBoardPieceBaseComponent_c *)v31;
  if ( v31 )
  {
    v35 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_152;
    *v28 = v31;
    if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass != v35 )
      goto LABEL_152;
  }
  else
  {
    *v28 = 0;
  }
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v31, v32, v33);
  items = v21->fields._items;
  v39 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_157;
  v40 = v21->fields._size;
  if ( (unsigned int)v40 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v26,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &items->obj.klass + v40;
    v21->fields._size = v40 + 1;
    v41[4] = (Il2CppClass *)v26;
    sub_1C2D434((CGThumbnailListItem_o *)(v41 + 4), v26, v36, v37);
  }
  if ( !byte_4C20DA3 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA3 = 1;
  }
  v204 = v17;
  v205 = v16;
  v42 = v16 - y;
  v43 = v207 - x;
  v44 = v17 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C20DA4 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA4 = 1;
  }
  Instance = (__int64)System_Math_TypeInfo;
  v45 = sqrtf((float)(v44 * v44) + (float)((float)(v43 * v43) + (float)(v42 * v42)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v45 <= 0.00001 )
  {
    if ( !byte_4C20DA1 )
    {
      Instance = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v46 = static_fields->zeroVector.fields.x;
    v47 = static_fields->zeroVector.fields.y;
    v48 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v46 = v43 / v45;
    v47 = v42 / v45;
    v48 = v44 / v45;
  }
  if ( !v12 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v12, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v51 = v45 - lengthOnAttack;
  if ( (float)(v45 - lengthOnAttack) > 0.0 )
  {
    v52 = v48;
    v203 = v47;
    v53 = v46 * v51;
    v54 = v47 * v51;
    v55 = v48 * v51;
    v56 = y;
    v57 = x;
    v202 = v52;
    x = x + v53;
    y = y + v54;
    v58 = z + v55;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v61 = gameObject;
    v62 = (WarBoardMovePerformance_o *)sub_1C2D6DC(WarBoardMovePerformance_TypeInfo);
    v213.fields.x = v57;
    v213.fields.y = v56;
    v213.fields.z = z;
    v217.fields.x = x;
    v217.fields.y = y;
    v217.fields.z = v58;
    v63 = (Il2CppObject *)v62;
    z = v58;
    WarBoardMovePerformance___ctor(v62, v61, v213, v217, pixelPerSecond, 5, 0);
    v66 = v21->fields._items;
    v67 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !v66 )
      goto LABEL_157;
    v68 = v21->fields._size;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        v63,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v21->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v63;
      sub_1C2D434((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v63, v64, v65);
    }
    v47 = v203;
    v48 = v202;
  }
  v70 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0);
  if ( !v70 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v70,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v71 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v70,
    (System_Collections_Generic_IEnumerable_T__o *)v71,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v72 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v70,
    (System_Collections_Generic_IEnumerable_T__o *)v72,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v12, 0) )
  {
    v92 = sub_1C2D6DC(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v92,
      0);
    if ( v92 )
    {
      *(_QWORD *)(v92 + 32) = v5;
      v95 = (Il2CppObject **)(v92 + 32);
      sub_1C2D434((CGThumbnailListItem_o *)(v92 + 32), v5, v93, v94);
      System_Collections_Generic_List_object___AddRange(
        v21,
        (System_Collections_Generic_IEnumerable_T__o *)v70,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v97 = v46 * lengthOnEncount;
      v98 = v207 - (float)(v46 * lengthOnEncount);
      v99 = v47 * lengthOnEncount;
      v100 = v48 * lengthOnEncount;
      v101 = x + v97;
      v102 = v205 - v99;
      v103 = y + v99;
      v104 = z + v100;
      v105 = v204 - v100;
      if ( !byte_4C20DA4 )
      {
        sub_1C2D490(&System_Math_TypeInfo);
        byte_4C20DA4 = 1;
      }
      v106 = v98 - v101;
      v107 = v102 - v103;
      v108 = v105 - v104;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v109 = sqrtf((float)(v108 * v108) + (float)((float)(v106 * v106) + (float)(v107 * v107)));
      if ( v109 <= 0.00001 )
      {
        if ( !byte_4C20DA1 )
        {
          sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        v113 = UnityEngine_Vector3_TypeInfo->static_fields;
        v110 = v113->zeroVector.fields.x;
        v111 = v113->zeroVector.fields.y;
        v112 = v113->zeroVector.fields.z;
      }
      else
      {
        v110 = v106 / v109;
        v111 = v107 / v109;
        v112 = v108 / v109;
      }
      if ( !byte_4C20DA3 )
      {
        sub_1C2D490(&System_Math_TypeInfo);
        byte_4C20DA3 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._35_GetIconLocalPosition.methodPtr)(
                   this,
                   this->klass->vtable._35_GetIconLocalPosition.method);
      v27 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
      if ( *v95 )
      {
        monitor = (*v95)[1].monitor;
        if ( monitor )
        {
          v116 = monitor[6];
          if ( v116 )
          {
            Instance = *(_QWORD *)(v116 + 80);
            if ( Instance )
            {
              v117 = v114;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0);
              v119 = *(_QWORD *)(v92 + 32);
              *(float *)(v92 + 16) = ZoomSize;
              if ( v119 )
              {
                v120 = *(_QWORD *)(v119 + 24);
                if ( v120 )
                {
                  v121 = *(_QWORD *)(v120 + 48);
                  if ( v121 )
                  {
                    Instance = *(_QWORD *)(v121 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0);
                      v124 = *(_QWORD *)(v92 + 32);
                      *(UnityEngine_Vector2_o *)(v92 + 20) = ScrlPos;
                      if ( v124 )
                      {
                        v125 = *(WarBoardManager_o **)(v124 + 24);
                        *(_QWORD *)&v210.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v126 = v101 + (float)((float)(v109 * v110) * 0.5);
                        v127 = (float)(v103 + (float)((float)(v109 * v111) * 0.5)) + v117;
                        *(_QWORD *)&v210.fields.hasValue = &v209;
                        v215.fields.x = v126;
                        v215.fields.y = v127;
                        v215.fields.z = v104 + (float)((float)(v109 * v112) * 0.5);
                        *(_QWORD *)&v209.fields.hasValue = 0;
                        *(_QWORD *)&v209.fields.value.fields.y = 0;
                        System_Nullable_Vector3____ctor(v210, v215, v122);
                        encountCameraSize = this->fields.encountCameraSize;
                        p_size = (System_Nullable_float__o)&size;
                        size = 0;
                        System_Nullable_float____ctor(
                          p_size,
                          encountCameraSize,
                          (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
                        if ( v125 )
                        {
                          v130 = size;
                          Instance = (__int64)WarBoardManager__GetCameraPerformanceTask(v125, v209, v130, 1, 0, 1, 0);
                          v133 = v21->fields._items;
                          v134 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v21->fields._version;
                          if ( v133 )
                          {
                            v135 = v21->fields._size;
                            v136 = Instance;
                            if ( (unsigned int)v135 >= LODWORD(v133->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v21,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v137 = &v133->obj.klass + v135;
                              v21->fields._size = v135 + 1;
                              v137[4] = (Il2CppClass *)v136;
                              sub_1C2D434((CGThumbnailListItem_o *)(v137 + 4), v136, v131, v132);
                            }
                            if ( *v95 )
                            {
                              Instance = (__int64)(*v95)[1].monitor;
                              if ( Instance )
                              {
                                v216.fields.x = v126;
                                v216.fields.y = v127;
                                v216.fields.z = v104 + (float)((float)(v109 * v112) * 0.5);
                                Instance = (__int64)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v216,
                                                      1,
                                                      0);
                                v166 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
                                  v166 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                _9__63_1 = v166->static_fields->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !v166->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v166);
                                    v166 = WarBoardPieceBaseComponent___c_TypeInfo;
                                  }
                                  v168 = (Il2CppObject *)v166->static_fields->__9;
                                  _9__63_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v168,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0);
                                  v169 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v169->__9__63_1 = _9__63_1;
                                  sub_1C2D434((CGThumbnailListItem_o *)&v169->__9__63_1, (int32_t)_9__63_1, v170, v171);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_1C2D434(
                                    (CGThumbnailListItem_o *)&this->fields.currentActionPointLabel,
                                    (int32_t)_9__63_1,
                                    v164,
                                    v165);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v174 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v174,
                                    (Il2CppObject *)v92,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0);
                                  v175 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v174, 0);
                                  v34 = (WarBoardPieceBaseComponent_c *)v175;
                                  if ( v175 )
                                  {
                                    v178 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v175->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v175;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v175->klass != v178 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0;
                                  }
                                  sub_1C2D434(
                                    (CGThumbnailListItem_o *)&this->fields.breakPointParent,
                                    (int32_t)v175,
                                    v176,
                                    v177);
                                  v181 = v21->fields._items;
                                  v182 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v21->fields._version;
                                  if ( v181 )
                                  {
                                    v183 = v21->fields._size;
                                    if ( (unsigned int)v183 >= LODWORD(v181->max_length) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v21,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v184 = &v181->obj.klass + v183;
                                      v21->fields._size = v183 + 1;
                                      v184[4] = (Il2CppClass *)this;
                                      sub_1C2D434((CGThumbnailListItem_o *)(v184 + 4), (int32_t)this, v179, v180);
                                    }
                                    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                                          v21,
                                                          0,
                                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v185 = *(System_Delegate_o **)(Instance + 32);
                                      v186 = *v95;
                                      v187 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v187,
                                        v186,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0);
                                      v188 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v185,
                                                                               (System_Delegate_o *)v187,
                                                                               0);
                                      v34 = v188;
                                      if ( v188 )
                                      {
                                        v189 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v188->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v188;
                                        if ( v188->_1.image != v189 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0;
                                      }
                                      v162 = (CGThumbnailListItem_o *)this;
                                      v163 = (int)v34;
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
    sub_1C2D6EC(Instance, v7);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v74 = x + (float)(v46 * lengthMoveAttack);
  v75 = y + (float)(v47 * lengthMoveAttack);
  v76 = z + (float)(v48 * lengthMoveAttack);
  v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v78 = this->fields.pixelPerSecond;
  v79 = v77;
  v80 = (WarBoardMovePerformance_o *)sub_1C2D6DC(WarBoardMovePerformance_TypeInfo);
  v214.fields.x = v74;
  v214.fields.y = v75;
  v214.fields.z = v76;
  v218.fields.x = x;
  v218.fields.y = y;
  v218.fields.z = z;
  v81 = (WarBoardTaskBase_o *)v80;
  WarBoardMovePerformance___ctor(v80, v79, v214, v218, v78, 4, 0);
  v82 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(v12, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v27 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
  if ( !*v206 )
    goto LABEL_157;
  v83 = (WarBoardMessageMaster_o *)Instance;
  Instance = (__int64)(*v206)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0);
  v85 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v85,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v12->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v12, 0);
  if ( !v83 )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
  {
    v87 = 11;
    v88 = 1;
    v89 = v83;
    v90 = id;
    v91 = breakPoint_k__BackingField;
  }
  else
  {
    v87 = 9;
    v89 = v83;
    v90 = id;
    v91 = breakPoint_k__BackingField;
    v88 = 0;
  }
  Instance = (__int64)WarBoardMessageMaster__GetMessageTasks(v89, v90, v87, v91, v88, 0);
  v138 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v70,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v138,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v21,
      v138,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_1C2D538(WarBoardTaskBase___TypeInfo, 5);
  if ( !Instance )
    goto LABEL_157;
  v141 = (WarBoardTaskBase_array *)Instance;
  if ( v81 )
  {
    Instance = sub_1C2D5CC(v81, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !LODWORD(v141->max_length) )
    goto LABEL_158;
  v141->m_Items[0] = v81;
  sub_1C2D434((CGThumbnailListItem_o *)v141->m_Items, (int32_t)v81, v139, v140);
  Instance = (__int64)v12->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v142 = *v206;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v142 )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__CreateAttackEffectTask(v142, *(UnityEngine_Vector3_o *)&v143, 0, 0);
  v147 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C2D5CC(Instance, v141->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v141->max_length) <= 1 )
    goto LABEL_158;
  v141->m_Items[1] = v147;
  sub_1C2D434((CGThumbnailListItem_o *)&v141->m_Items[1], (int32_t)v147, v139, v146);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v149 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C2D5CC(Instance, v141->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v141->max_length) <= 2 )
    goto LABEL_158;
  v141->m_Items[2] = v149;
  sub_1C2D434((CGThumbnailListItem_o *)&v141->m_Items[2], (int32_t)v149, v139, v148);
  Instance = (__int64)v12->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_8933/*"MasterDamage"*/,
                        v150);
  v152 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C2D5CC(Instance, v141->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v141->max_length) <= 3 )
    goto LABEL_158;
  v141->m_Items[3] = v152;
  sub_1C2D434((CGThumbnailListItem_o *)&v141->m_Items[3], (int32_t)v152, v139, v151);
  v153 = (WarBoardOrthostichySchedule_o *)sub_1C2D6DC(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_38056676(v153, v82, 0);
  if ( v153 )
  {
    Instance = sub_1C2D5CC(v153, v141->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v201 = sub_1C2D710();
      sub_1C2D5B8(v201, 0);
    }
  }
  if ( LODWORD(v141->max_length) <= 4 )
LABEL_158:
    sub_1C2D6F4(Instance, v7, v139);
  v141->m_Items[4] = (WarBoardTaskBase_o *)v153;
  sub_1C2D434((CGThumbnailListItem_o *)&v141->m_Items[4], (int32_t)v153, v139, v154);
  v155 = (WarBoardParallelSchedule_o *)sub_1C2D6DC(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v155, v141, 0);
  v158 = v21->fields._items;
  v159 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !v158 )
    goto LABEL_157;
  v160 = v21->fields._size;
  if ( (unsigned int)v160 >= LODWORD(v158->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v155,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v161 = &v158->obj.klass + v160;
  v21->fields._size = v160 + 1;
  v161[4] = (Il2CppClass *)v155;
  v162 = (CGThumbnailListItem_o *)(v161 + 4);
  v163 = (int)v155;
LABEL_140:
  sub_1C2D434(v162, v163, v156, v157);
LABEL_141:
  if ( v21->fields._size < 1 )
    return;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v21,
                        0,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
  v190 = *(System_Delegate_o **)(Instance + 32);
  v191 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v191 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__63_4 = v191->static_fields->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !v191->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v191);
      v191 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v193 = (Il2CppObject *)v191->static_fields->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v193, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0);
    v194 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v194->__9__63_4 = _9__63_4;
    sub_1C2D434((CGThumbnailListItem_o *)&v194->__9__63_4, (int32_t)_9__63_4, v195, v196);
  }
  v197 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v190, (System_Delegate_o *)_9__63_4, 0);
  v34 = v197;
  if ( !v197 )
    goto LABEL_153;
  v200 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v197->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v197, v197->_1.image != v200) )
  {
LABEL_152:
    sub_1C2D9AC(v34);
LABEL_153:
    this->klass = v34;
  }
  sub_1C2D434((CGThumbnailListItem_o *)this, (int32_t)v34, v198, v199);
  Instance = (__int64)*v27;
  if ( !*v27 )
    goto LABEL_157;
  WarBoardManager__AddTask_37855764(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v21,
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
  float x; // s8
  float y; // s9
  float z; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  float v16; // s8
  float v17; // s15
  float v18; // s14
  float v19; // s11
  float v20; // s12
  float v21; // s13
  float v22; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s8
  WarBoardControlUiDataComponent_c *v25; // x0
  float v26; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24B15 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C24B15 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_37670316(Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v9 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v28 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0);
  v13 = v28.fields.x;
  v14 = v28.fields.y;
  v15 = v28.fields.z;
  if ( !byte_4C20DA3 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA3 = 1;
  }
  v26 = x;
  v16 = v13 - x;
  v17 = v14 - y;
  v18 = v15 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C20DA4 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA4 = 1;
  }
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  v19 = sqrtf((float)(v18 * v18) + (float)((float)(v16 * v16) + (float)(v17 * v17)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v19 <= 0.00001 )
  {
    if ( !byte_4C20DA1 )
    {
      Instance = (WarBoardData_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v20 = static_fields->zeroVector.fields.x;
    v21 = static_fields->zeroVector.fields.y;
    v22 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v20 = v16 / v19;
    v21 = v17 / v19;
    v22 = v18 / v19;
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
    sub_1C2D6EC(Instance, v6);
  }
  v29.fields.x = v26 + (float)(v20 * (float)(v19 - lengthOnAttack));
  v29.fields.y = y + (float)(v21 * (float)(v19 - lengthOnAttack));
  v29.fields.z = z + (float)(v22 * (float)(v19 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v29, 0);
  v25 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v25);
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
  const MethodInfo_38B3EC8 *v16; // x2
  System_Nullable_float__o v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v23; // x1
  Il2CppClass **v24; // x0
  WarBoardTaskBase_array *v25; // x26
  Il2CppObject *v26; // x27
  const MethodInfo_38B3EC8 *v27; // x2
  System_Nullable_float__o v28; // x3
  const MethodInfo *v29; // x3
  WarBoardPieceBaseComponent_o *v30; // x24
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v32; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v34; // x0
  System_Nullable_Vector3__o v35; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v36; // 0:x0.16
  System_Nullable_Vector3__o v37; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_4C24B1C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C2D490(&WarBoardTaskBase___TypeInfo);
    byte_4C24B1C = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v36.fields.hasValue = &v35;
          *(_QWORD *)&v35.fields.hasValue = 0;
          *(_QWORD *)&v35.fields.value.fields.y = 0;
          *(_QWORD *)&v36.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v36, localPosition, v16);
          if ( Instance )
          {
            v17 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v35,
                                                     v17,
                                                     1,
                                                     0,
                                                     1,
                                                     0);
            items = taskList->fields._items;
            v21 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              v23 = this;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)this,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v23;
                sub_1C2D434((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v25 = (WarBoardTaskBase_array *)sub_1C2D538(WarBoardTaskBase___TypeInfo, 1);
        v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          v39 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v37.fields.hasValue = &v35;
          v35 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v37.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v37, v39, v27);
          if ( v26 )
          {
            v28 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v26,
                                                     v35,
                                                     v28,
                                                     1,
                                                     0,
                                                     1,
                                                     0);
            if ( v25 )
            {
              v30 = this;
              if ( this )
              {
                this = (WarBoardPieceBaseComponent_o *)sub_1C2D5CC(this, v25->obj.klass->_1.element_class);
                if ( !this )
                {
                  v34 = sub_1C2D710();
                  sub_1C2D5B8(v34, 0);
                }
              }
              if ( !LODWORD(v25->max_length) )
LABEL_34:
                sub_1C2D6F4(this, *(_QWORD *)&oldBreakPoint, cameraSize);
              v25->m_Items[0] = (WarBoardTaskBase_o *)v30;
              sub_1C2D434(
                (CGThumbnailListItem_o *)v25->m_Items,
                (int32_t)v30,
                *(int32_t *)&cameraSize.fields.hasValue,
                v29);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v25, 0);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_32:
      sub_1C2D6EC(this, *(_QWORD *)&oldBreakPoint);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_32;
  v32 = 0;
  if ( dummyPoint < 0 )
    dummyPoint = pieceData->fields._breakPoint_k__BackingField;
  while ( (int)v32 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( !breakPoints )
      goto LABEL_32;
    if ( (unsigned int)v32 >= LODWORD(breakPoints->max_length) )
      goto LABEL_34;
    this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v32];
    if ( this )
    {
      if ( (int)v32 >= oldBreakPoint || dummyPoint > (int)v32 )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          dummyPoint > (int)v32,
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
      ++v32;
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
    sub_1C2D6EC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  const MethodInfo *v7; // x2

  if ( (byte_4C24B11 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24B11 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C2D6EC(Instance, v5);
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
  const MethodInfo *v10; // x3
  WarBoardPieceData_o **v11; // x20
  WarBoardPieceData_o *Piece_37670316; // x0
  WarBoardPieceData_o **v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x25
  System_Collections_Generic_List_object__o *v21; // x24
  System_Delegate_o *p_EndCallback; // x26
  WarBoardTaskBase_TaskCallback_o *v23; // x27
  System_Delegate_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Delegate_c *v27; // x8
  WarBoardTaskBase_TaskCallback_c *v28; // x1
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v33; // x29
  struct WarBoardPieceData_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  float pixelPerSecond; // s13
  float v40; // s11
  float v41; // s12
  float v42; // s14
  WarBoardMovePerformance_o *v43; // x0
  WarBoardMovePerformance_o *v44; // x27
  const MethodInfo *v45; // x3
  WarBoardTaskBase_array *v46; // x26
  UnityEngine_GameObject_o *v47; // x27
  struct WarBoardPieceData_o *v48; // x8
  float v49; // s8
  float v50; // s9
  float v51; // s10
  float v52; // s13
  float v53; // s11
  float v54; // s12
  float v55; // s14
  WarBoardMovePerformance_o *v56; // x0
  WarBoardTaskBase_o *v57; // x28
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  System_Delegate_o *v60; // x27
  WarBoardTaskBase_TaskCallback_o *v61; // x28
  System_Delegate_o *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  WarBoardTaskBase_TaskCallback_c *v65; // x1
  System_Delegate_o *EndCallback; // x28
  System_Delegate_o *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  WarBoardTaskBase_TaskCallback_c *v70; // x1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  struct WarBoardPieceData_o *v77; // x8
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  System_Collections_Generic_List_object__o *v90; // x22
  System_Int32_array *PieceEventVals; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  System_Int32_array *v94; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v96; // x0
  WarBoardManager_o *v97; // x20
  WarBoardTaskBase_array *v98; // x21
  __int64 v99; // x22
  WarBoardTaskBase_TaskCallback_o *v100; // x23
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  const MethodInfo *v103; // x3
  __int64 v104; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v112; // 0:s3.4,4:s4.4,8:s5.4

  LODWORD(v4) = squareIndex;
  if ( (byte_4C24B12 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__);
    sub_1C2D490(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C2D490(&WarBoardCallbackTask_TypeInfo);
    sub_1C2D490(&WarBoardMovePerformance_TypeInfo);
    sub_1C2D490(&WarBoardParallelSchedule_TypeInfo);
    sub_1C2D490(&WarBoardTaskBase___TypeInfo);
    byte_4C24B12 = 1;
  }
  v6 = sub_1C2D6DC(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v6, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v6 )
    goto LABEL_83;
  *(_QWORD *)(v6 + 48) = Instance;
  v11 = (WarBoardPieceData_o **)(v6 + 48);
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 48), (int32_t)Instance, v9, v10);
  if ( !*(_QWORD *)(v6 + 48) )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v6 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_83;
  Piece_37670316 = WarBoardData__GetPiece_37670316((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 40) = Piece_37670316;
  v13 = (WarBoardPieceData_o **)(v6 + 40);
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 40), (int32_t)Piece_37670316, v14, v15);
  v16 = *(_QWORD *)(v6 + 48);
  if ( !v16 )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(v16 + 440);
  if ( !Instance )
    goto LABEL_83;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 16) = Square;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 16), (int32_t)Square, v18, v19);
  v20 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v20, 0, 0);
  if ( !v20 )
    goto LABEL_83;
  v21 = (System_Collections_Generic_List_object__o *)(v20 + 32);
  p_EndCallback = *(System_Delegate_o **)(v20 + 32);
  v23 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v23,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0);
  v24 = System_Delegate__Combine(p_EndCallback, (System_Delegate_o *)v23, 0);
  v27 = (System_Delegate_c *)v24;
  if ( v24 )
  {
    v28 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v24->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v21->klass = (System_Collections_Generic_List_object__c *)v24;
    if ( (WarBoardTaskBase_TaskCallback_c *)v24->klass != v28 )
      goto LABEL_44;
  }
  else
  {
    v21->klass = 0;
  }
  sub_1C2D434((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v24, v25, v26);
  Instance = (WarBoardPieceData_o *)sub_1C2D538(int___TypeInfo, 2);
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
    sub_1C2D6F4(Instance, v8, v29);
  }
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  *(_QWORD *)(v6 + 24) = Instance;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 24), (int32_t)Instance, v29, v30);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v33 = *(_QWORD *)(v6 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v34 = this->fields.pieceData;
  if ( !v34 )
    goto LABEL_83;
  v35 = (UnityEngine_GameObject_o *)Instance;
  Instance = *(WarBoardPieceData_o **)(v6 + 48);
  if ( !Instance )
    goto LABEL_83;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v34->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_83;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v106 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v40 = v106.fields.x;
  v41 = v106.fields.y;
  v42 = v106.fields.z;
  v43 = (WarBoardMovePerformance_o *)sub_1C2D6DC(WarBoardMovePerformance_TypeInfo);
  v107.fields.x = x;
  v107.fields.y = y;
  v107.fields.z = z;
  v111.fields.x = v40;
  v111.fields.y = v41;
  v111.fields.z = v42;
  v44 = v43;
  WarBoardMovePerformance___ctor(v43, v35, v107, v111, pixelPerSecond, 0, 0);
  if ( v33 )
  {
    Instance = (WarBoardPieceData_o *)sub_1C2D538(WarBoardTaskBase___TypeInfo, 3);
    if ( !Instance )
      goto LABEL_83;
    v46 = (WarBoardTaskBase_array *)Instance;
    if ( v44 )
    {
      Instance = (WarBoardPieceData_o *)sub_1C2D5CC(v44, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_85;
    }
    if ( !LODWORD(v46->max_length) )
      goto LABEL_84;
    v46->m_Items[0] = (WarBoardTaskBase_o *)v44;
    sub_1C2D434((CGThumbnailListItem_o *)v46->m_Items, (int32_t)v44, v29, v45);
    Instance = *v13;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( *v13 )
    {
      Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0);
      if ( *v11 )
      {
        v47 = (UnityEngine_GameObject_o *)Instance;
        v108 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v11, (int32_t)v4, 0);
        v48 = this->fields.pieceData;
        if ( v48 )
        {
          Instance = *v11;
          if ( *v11 )
          {
            v49 = v108.fields.x;
            v50 = v108.fields.y;
            v51 = v108.fields.z;
            v109 = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v48->fields._nowSquareIndex_k__BackingField,
                     0);
            v52 = this->fields.pixelPerSecond;
            v53 = v109.fields.x;
            v54 = v109.fields.y;
            v55 = v109.fields.z;
            v56 = (WarBoardMovePerformance_o *)sub_1C2D6DC(WarBoardMovePerformance_TypeInfo);
            v110.fields.x = v49;
            v110.fields.y = v50;
            v110.fields.z = v51;
            v112.fields.x = v53;
            v112.fields.y = v54;
            v112.fields.z = v55;
            v57 = (WarBoardTaskBase_o *)v56;
            WarBoardMovePerformance___ctor(v56, v47, v110, v112, v52, 0, 0);
            if ( !v57 || (Instance = (WarBoardPieceData_o *)sub_1C2D5CC(v57, v46->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v46->max_length) <= 1 )
                goto LABEL_84;
              v46->m_Items[1] = v57;
              sub_1C2D434((CGThumbnailListItem_o *)&v46->m_Items[1], (int32_t)v57, v29, v58);
              Instance = (WarBoardPieceData_o *)sub_1C2D5CC(v20, v46->obj.klass->_1.element_class);
              if ( Instance )
              {
                if ( LODWORD(v46->max_length) <= 2 )
                  goto LABEL_84;
                v46->m_Items[2] = (WarBoardTaskBase_o *)v20;
                sub_1C2D434((CGThumbnailListItem_o *)&v46->m_Items[2], v20, v29, v59);
                v20 = sub_1C2D6DC(WarBoardParallelSchedule_TypeInfo);
                WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v20, v46, 0);
                if ( !v20 )
                  goto LABEL_83;
                p_EndCallback = (System_Delegate_o *)(v20 + 40);
                v60 = *(System_Delegate_o **)(v20 + 40);
                v61 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
                WarBoardTaskBase_TaskCallback___ctor(
                  v61,
                  (Il2CppObject *)v6,
                  Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
                  0);
                v62 = System_Delegate__Combine(v60, (System_Delegate_o *)v61, 0);
                v27 = (System_Delegate_c *)v62;
                if ( !v62 )
                  goto LABEL_45;
                v65 = WarBoardTaskBase_TaskCallback_TypeInfo;
                if ( (WarBoardTaskBase_TaskCallback_c *)v62->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
                {
                  p_EndCallback->klass = (System_Delegate_c *)v62;
                  if ( (WarBoardTaskBase_TaskCallback_c *)v62->klass == v65 )
                  {
LABEL_46:
                    sub_1C2D434((CGThumbnailListItem_o *)p_EndCallback, (int32_t)v27, v63, v64);
                    if ( !v21 )
                      goto LABEL_83;
                    items = v21->fields._items;
                    v74 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                    ++v21->fields._version;
                    if ( !items )
                      goto LABEL_83;
                    size = v21->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v21,
                        (Il2CppObject *)v20,
                        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v76 = &items->obj.klass + size;
                      v21->fields._size = size + 1;
                      v76[4] = (Il2CppClass *)v20;
                      sub_1C2D434((CGThumbnailListItem_o *)(v76 + 4), v20, v71, v72);
                    }
                    v77 = this->fields.pieceData;
                    if ( !v77 )
                      goto LABEL_83;
                    Instance = *v13;
                    if ( !*v13 )
                      goto LABEL_83;
                    WarBoardPieceData__SetSquareIndex(Instance, v77->fields._nowSquareIndex_k__BackingField, 0);
                    goto LABEL_64;
                  }
                }
LABEL_44:
                sub_1C2D9AC(v27);
LABEL_45:
                p_EndCallback->klass = v27;
                goto LABEL_46;
              }
            }
LABEL_85:
            v104 = sub_1C2D710();
            sub_1C2D5B8(v104, 0);
          }
        }
      }
    }
LABEL_83:
    sub_1C2D6EC(Instance, v8);
  }
  if ( !v44 )
    goto LABEL_83;
  v13 = (WarBoardPieceData_o **)(unsigned int)v4;
  p_EndCallback = (System_Delegate_o *)&v44->fields.EndCallback;
  EndCallback = (System_Delegate_o *)v44->fields.EndCallback;
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0);
  v67 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v3, 0);
  v27 = (System_Delegate_c *)v67;
  if ( v67 )
  {
    v70 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v67->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    p_EndCallback->klass = (System_Delegate_c *)v67;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v13;
    if ( (WarBoardTaskBase_TaskCallback_c *)v67->klass != v70 )
      goto LABEL_44;
  }
  else
  {
    p_EndCallback->klass = 0;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v13;
  }
  sub_1C2D434((CGThumbnailListItem_o *)&v44->fields.EndCallback, (int32_t)v67, v68, v69);
  v13 = (WarBoardPieceData_o **)(v6 + 40);
  if ( !v21 )
    goto LABEL_83;
  v80 = v21->fields._items;
  v81 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !v80 )
    goto LABEL_83;
  v82 = v21->fields._size;
  if ( (unsigned int)v82 >= LODWORD(v80->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v44,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
  }
  else
  {
    v83 = &v80->obj.klass + v82;
    v21->fields._size = v82 + 1;
    v83[4] = (Il2CppClass *)v44;
    sub_1C2D434((CGThumbnailListItem_o *)(v83 + 4), (int32_t)v44, v78, v79);
  }
  v86 = v21->fields._items;
  v87 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !v86 )
    goto LABEL_83;
  v88 = v21->fields._size;
  if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v20,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = &v86->obj.klass + v88;
    v21->fields._size = v88 + 1;
    v89[4] = (Il2CppClass *)v20;
    sub_1C2D434((CGThumbnailListItem_o *)(v89 + 4), v20, v84, v85);
  }
LABEL_64:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0);
  v90 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v90,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0);
  *(_QWORD *)(v6 + 32) = PieceEventVals;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)PieceEventVals, v92, v93);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v6 + 32),
                                      0);
  if ( !v90 )
    goto LABEL_83;
  System_Collections_Generic_List_object___AddRange(
    v90,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v13 )
  {
    v94 = WarBoardPieceData__CreatePieceEventVals(*v13, 0);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v94, 0);
    System_Collections_Generic_List_object___AddRange(
      v90,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v96 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v90,
    (System_Collections_Generic_IEnumerable_T__o *)v96,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v90,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v11;
    if ( !*v11 )
      goto LABEL_83;
    WarBoardManager__AddTask_37855764(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v90,
      0);
  }
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_83;
  WarBoardManager__AddTask_37855764(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v21,
    0);
  v97 = *(WarBoardManager_o **)(v6 + 48);
  v98 = (WarBoardTaskBase_array *)sub_1C2D538(WarBoardTaskBase___TypeInfo, 1);
  v99 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v99, 0, 0);
  v100 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(v3->klass);
  WarBoardTaskBase_TaskCallback___ctor(
    v100,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0);
  if ( !v99 )
    goto LABEL_83;
  *(_QWORD *)(v99 + 32) = v100;
  sub_1C2D434((CGThumbnailListItem_o *)(v99 + 32), (int32_t)v100, v101, v102);
  if ( !v98 )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)sub_1C2D5CC(v99, v98->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_85;
  if ( !LODWORD(v98->max_length) )
    goto LABEL_84;
  v98->m_Items[0] = (WarBoardTaskBase_o *)v99;
  sub_1C2D434((CGThumbnailListItem_o *)v98->m_Items, v99, v29, v103);
  if ( !v97 )
    goto LABEL_83;
  WarBoardManager__AddTask(v97, 0, v98, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_4C24B10 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24B10 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C24B1E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18817/*"ef_dm_base"*/);
    byte_4C24B1E = 1;
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
  float x; // s8
  float y; // s10
  float z; // s15
  float v14; // s11
  float v15; // s9
  float v16; // s13
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x24
  System_Delegate_o **v21; // x25
  System_Delegate_o *v22; // x26
  WarBoardTaskBase_TaskCallback_o *v23; // x27
  System_Delegate_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Delegate_o *v27; // x8
  WarBoardTaskBase_TaskCallback_c *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  float v35; // s12
  float v36; // s14
  float v37; // s8
  float v38; // s9
  float v39; // s11
  float v40; // s13
  float v41; // s1
  float v42; // s2
  float v43; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v45; // s0
  float v46; // s8
  float v47; // s11
  float v48; // s12
  float v49; // s15
  float v50; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s14
  UnityEngine_GameObject_o *v53; // x24
  WarBoardMovePerformance_o *v54; // x0
  Il2CppObject *v55; // x23
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  float lengthMoveAttack; // s0
  float v63; // s1
  float v64; // s2
  float v65; // s0
  float v66; // s8
  float v67; // s9
  float v68; // s10
  UnityEngine_GameObject_o *v69; // x0
  float v70; // s14
  UnityEngine_GameObject_o *v71; // x22
  WarBoardMovePerformance_o *v72; // x0
  WarBoardTaskBase_o *v73; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v74; // x22
  System_Collections_Generic_List_object__o *v75; // x23
  __int64 v76; // x2
  const MethodInfo *v77; // x3
  WarBoardTaskBase_array *v78; // x23
  const MethodInfo *v79; // x3
  WarBoardData_o *v80; // x21
  const MethodInfo *v81; // x3
  WarBoardData_o *v82; // x21
  WarBoardOrthostichySchedule_o *v83; // x21
  const MethodInfo *v84; // x3
  WarBoardParallelSchedule_o *v85; // x21
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  __int64 v92; // x0
  float v93; // [xsp+8h] [xbp-A8h]
  float v94; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v101; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C24B17 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__);
    sub_1C2D490(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
    sub_1C2D490(&WarBoardCallbackTask_TypeInfo);
    sub_1C2D490(&WarBoardMovePerformance_TypeInfo);
    sub_1C2D490(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C2D490(&WarBoardParallelSchedule_TypeInfo);
    sub_1C2D490(&WarBoardTaskBase___TypeInfo);
    byte_4C24B17 = 1;
  }
  v5 = sub_1C2D6DC(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v5, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v96 = WarBoardManager__GetSquarePosition(v8, squareIndex, 0);
  Instance = v8->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  v14 = v96.fields.x;
  v15 = v96.fields.y;
  v16 = v96.fields.z;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = Instance;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Instance, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v20 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v20, 0, 0);
  if ( !v20 )
    goto LABEL_64;
  v21 = (System_Delegate_o **)(v20 + 32);
  v22 = *(System_Delegate_o **)(v20 + 32);
  v23 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0);
  v24 = System_Delegate__Combine(v22, (System_Delegate_o *)v23, 0);
  v27 = v24;
  if ( v24 )
  {
    v28 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v24->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v21 = v24;
      if ( (WarBoardTaskBase_TaskCallback_c *)v24->klass == v28 )
        goto LABEL_14;
    }
    sub_1C2D9AC(v24);
  }
  *v21 = v27;
LABEL_14:
  sub_1C2D434((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v27, v25, v26);
  if ( !v19 )
    goto LABEL_64;
  items = v19->fields._items;
  v32 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v19->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      (Il2CppObject *)v20,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v20;
    sub_1C2D434((CGThumbnailListItem_o *)(v34 + 4), v20, v29, v30);
  }
  if ( !byte_4C20DA3 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA3 = 1;
  }
  v35 = x;
  v36 = v14 - x;
  v37 = v15 - y;
  v38 = v16 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C20DA4 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA4 = 1;
  }
  v39 = sqrtf((float)(v38 * v38) + (float)((float)(v36 * v36) + (float)(v37 * v37)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v40 = z;
  if ( v39 <= 0.00001 )
  {
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v41 = static_fields->zeroVector.fields.x;
    v42 = static_fields->zeroVector.fields.y;
    v43 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v41 = v36 / v39;
    v42 = v37 / v39;
    v43 = v38 / v39;
  }
  v45 = v39 - this->fields.lengthOnAttack;
  if ( v45 <= 0.0 )
  {
    v47 = v35;
    v48 = y;
  }
  else
  {
    v93 = v42;
    v94 = v41;
    v46 = v35;
    v47 = v35 + (float)(v41 * v45);
    v48 = y + (float)(v42 * v45);
    v49 = y;
    v50 = v40;
    v40 = v40 + (float)(v43 * v45);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v53 = gameObject;
    v54 = (WarBoardMovePerformance_o *)sub_1C2D6DC(WarBoardMovePerformance_TypeInfo);
    v97.fields.x = v46;
    v97.fields.y = v49;
    v97.fields.z = v50;
    v100.fields.x = v47;
    v100.fields.y = v48;
    v100.fields.z = v40;
    v55 = (Il2CppObject *)v54;
    WarBoardMovePerformance___ctor(v54, v53, v97, v100, pixelPerSecond, 5, 0);
    v58 = v19->fields._items;
    v59 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v19->fields._version;
    if ( !v58 )
      goto LABEL_64;
    v60 = v19->fields._size;
    if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        v55,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->obj.klass + v60;
      v19->fields._size = v60 + 1;
      v61[4] = (Il2CppClass *)v55;
      sub_1C2D434((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v55, v56, v57);
    }
    v42 = v93;
    v41 = v94;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v63 = v41 * lengthMoveAttack;
  v64 = v42 * lengthMoveAttack;
  v65 = v43 * lengthMoveAttack;
  v66 = v47 + v63;
  v67 = v48 + v64;
  v68 = v40 + v65;
  v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v70 = this->fields.pixelPerSecond;
  v71 = v69;
  v72 = (WarBoardMovePerformance_o *)sub_1C2D6DC(WarBoardMovePerformance_TypeInfo);
  v98.fields.x = v66;
  v98.fields.y = v67;
  v98.fields.z = v68;
  v101.fields.x = v47;
  v101.fields.y = v48;
  v101.fields.z = v40;
  v73 = (WarBoardTaskBase_o *)v72;
  WarBoardMovePerformance___ctor(v72, v71, v98, v101, v70, 4, 0);
  if ( !v10 )
    goto LABEL_64;
  v74 = WarBoardWallData__DecrementBreakPointPerformance(v10, 1, 0);
  v75 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0, 0), !v75)
    || (System_Collections_Generic_List_object___AddRange(
          v75,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v19,
          (System_Collections_Generic_IEnumerable_T__o *)v75,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_1C2D538(WarBoardTaskBase___TypeInfo, 4)) == 0) )
  {
LABEL_64:
    sub_1C2D6EC(Instance, v7);
  }
  v78 = (WarBoardTaskBase_array *)Instance;
  if ( v73 )
  {
    Instance = (WarBoardData_o *)sub_1C2D5CC(v73, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !LODWORD(v78->max_length) )
    goto LABEL_65;
  v78->m_Items[0] = v73;
  sub_1C2D434((CGThumbnailListItem_o *)v78->m_Items, (int32_t)v73, v76, v77);
  Instance = (WarBoardData_o *)v10->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v8, IconPosition, 0, 0);
  v80 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C2D5CC(Instance, v78->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v78->max_length) <= 1 )
    goto LABEL_65;
  v78->m_Items[1] = (WarBoardTaskBase_o *)v80;
  sub_1C2D434((CGThumbnailListItem_o *)&v78->m_Items[1], (int32_t)v80, v76, v79);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v82 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C2D5CC(Instance, v78->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v78->max_length) <= 2 )
    goto LABEL_65;
  v78->m_Items[2] = (WarBoardTaskBase_o *)v82;
  sub_1C2D434((CGThumbnailListItem_o *)&v78->m_Items[2], (int32_t)v82, v76, v81);
  v83 = (WarBoardOrthostichySchedule_o *)sub_1C2D6DC(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_38056676(v83, v74, 0);
  if ( v83 )
  {
    Instance = (WarBoardData_o *)sub_1C2D5CC(v83, v78->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v92 = sub_1C2D710();
      sub_1C2D5B8(v92, 0);
    }
  }
  if ( LODWORD(v78->max_length) <= 3 )
LABEL_65:
    sub_1C2D6F4(Instance, v7, v76);
  v78->m_Items[3] = (WarBoardTaskBase_o *)v83;
  sub_1C2D434((CGThumbnailListItem_o *)&v78->m_Items[3], (int32_t)v83, v76, v84);
  v85 = (WarBoardParallelSchedule_o *)sub_1C2D6DC(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v85, v78, 0);
  v88 = v19->fields._items;
  v89 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v19->fields._version;
  if ( !v88 )
    goto LABEL_64;
  v90 = v19->fields._size;
  if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      (Il2CppObject *)v85,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = &v88->obj.klass + v90;
    v19->fields._size = v90 + 1;
    v91[4] = (Il2CppClass *)v85;
    sub_1C2D434((CGThumbnailListItem_o *)(v91 + 4), (int32_t)v85, v86, v87);
  }
  if ( v19->fields._size >= 1 )
    WarBoardManager__AddTask_37855764(v8, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v19, 0);
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
    sub_1C2D6EC(simpleAnimation, animationName);
  SimpleAnimation__Play_66404364(simpleAnimation, animationName, 0);
}


void WarBoardPieceBaseComponent__RepareBreakPointByPiece(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  struct WarBoardPieceData_o *pieceData; // x8
  int breakPoint_k__BackingField; // w20
  WarBoardPieceBaseComponent_o *v6; // x19
  __int64 v7; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_8:
    sub_1C2D6EC(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v6 = this;
  v7 = 0;
  while ( (int)v7 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v6->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v7 >= LODWORD(breakPoints->max_length) )
        sub_1C2D6F4(this, method, v2);
      this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v7];
      if ( this )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          breakPoint_k__BackingField > (int)v7,
          0,
          v3);
        pieceData = v6->fields.pieceData;
        ++v7;
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
  __int64 v7; // x2
  int max_length; // w8
  unsigned int v9; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v11; // x22
  unsigned __int64 v12; // x29
  UnityEngine_Object_o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v19; // x1
  Il2CppClass **v20; // x0
  struct UICommonButton_o *button; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C24B07 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B07 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v9];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v11 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_24;
      }
      v12 = 0;
      while ( v12 < (unsigned int)klass )
      {
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11[1].monitor + v12);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v13,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v13,
                                                                       0);
            items = v4->fields._items;
            v17 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v19 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v19;
              sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
            }
          }
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C2D6F4(ComponentsInChildren_object, v6, v7);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C2D6EC(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C2D434((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v22, v23);
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

  if ( (byte_4C24B09 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B09 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
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
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *listEffectData; // x20
  System_Predicate_object__o *v13; // x21
  __int64 v14; // x2
  Il2CppObject *v15; // x20
  _QWORD *monitor; // x22
  __int64 v17; // x8
  unsigned __int64 v18; // x23
  bool v19; // w19
  UnityEngine_Object_o *v20; // x21

  if ( (byte_4C24B1D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__);
    sub_1C2D490(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
    byte_4C24B1D = 1;
  }
  v7 = sub_1C2D6DC(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = effectKey;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)effectKey, v10, v11);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v13 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    0);
  if ( !listEffectData )
    goto LABEL_18;
  v8 = System_Collections_Generic_List_object___Find(
         listEffectData,
         (System_Predicate_T__o *)v13,
         (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v15 = v8;
  if ( !v8 )
    return v15 != 0;
  monitor = v8[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_1C2D6EC(v8, v9);
  v17 = monitor[3];
  if ( (int)v17 >= 1 )
  {
    v18 = 0;
    v19 = isDisp;
    do
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1C2D6F4(v8, v9, v14);
      v20 = (UnityEngine_Object_o *)monitor[v18 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(v20, 0, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v20 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, v19, 0);
      }
      LODWORD(v17) = *((_DWORD *)monitor + 6);
      ++v18;
    }
    while ( (__int64)v18 < (int)v17 );
  }
  return v15 != 0;
}


void WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4C24B08 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B08 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
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

  if ( (byte_4C24B0B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B0B = 1;
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
    sub_1C2D6EC(pieceData, method);
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
    sub_1C2D6EC(0, method);
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
      SimpleAnimation__Stop_66401880(simpleAnimation, animationName, 0);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0);
        return;
      }
    }
LABEL_7:
    sub_1C2D6EC(simpleAnimation, animationName);
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
    sub_1C2D6EC(pieceData, method);
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
  const MethodInfo *v8; // x3
  System_Collections_Generic_HashSet_T__o **v9; // x21
  System_Collections_Generic_HashSet_T__o *v10; // x23
  __int64 v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v15; // w23
  System_Action_object__o *v16; // x25
  System_Collections_Generic_IEnumerable_T__o *v17; // x24
  System_Action_object__o *v18; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_object__o *v20; // x25
  System_Collections_Generic_IEnumerable_T__o *v21; // x23
  System_Action_object__o *v22; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_object__o *v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *removeTweenTargetObjects; // x23
  Il2CppObject *gameObject; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *v32; // x0
  Il2CppObject *v33; // x1
  UnityEngine_GameObject_o *v34; // x0
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  struct UICommonButton_o *v43; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v48; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C24B0E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_UIWidget__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_UIWidget___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Distinct_GameObject___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__);
    sub_1C2D490(&System_Collections_Generic_HashSet_UIWidget__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor___77943072);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__);
    sub_1C2D490(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__);
    sub_1C2D490(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
    byte_4C24B0E = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v3 = sub_1C2D6DC(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v3, 0);
  v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_3640D88 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v3 )
    goto LABEL_39;
  *(_QWORD *)(v3 + 24) = v4;
  v9 = (System_Collections_Generic_HashSet_T__o **)(v3 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v4, v7, v8);
  v10 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v10,
    (const MethodInfo_3640D88 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v3 + 16) = v10;
  v11 = v3 + 16;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v10, v12, v13);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_39;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v15 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v16 = (System_Action_object__o *)sub_1C2D6DC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v16,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v16,
      (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_39;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, 0);
    if ( v15 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v17 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v18 = (System_Action_object__o *)sub_1C2D6DC(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v18,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0);
      BasicHelper__ForEach_object_(
        v17,
        (System_Action_T__o *)v18,
        (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v20 = (System_Action_object__o *)sub_1C2D6DC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v20,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v20,
      (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v15 & 1) != 0 )
    {
      v21 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v22 = (System_Action_object__o *)sub_1C2D6DC(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v22,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0);
      BasicHelper__ForEach_object_(
        v21,
        (System_Action_T__o *)v22,
        (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v11 )
    goto LABEL_39;
  if ( *(int *)(*(_QWORD *)v11 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_39;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v25,
    tweenTargets,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_GameObject___ctor___77943072);
  pieceData = *(WarBoardPieceData_o **)v11;
  if ( !*(_QWORD *)v11 )
    goto LABEL_39;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v47,
    (System_Collections_Generic_HashSet_T__o *)pieceData,
    (const MethodInfo_36418F0 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v26 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3513F98 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v26 )
      break;
    current = v48.fields._current;
    if ( !v48.fields._current )
      sub_1C2D6EC(v26, v27);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v48.fields._current,
                                   0);
    if ( !removeTweenTargetObjects )
      sub_1C2D6EC(gameObject, gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v33 = (Il2CppObject *)v32;
      if ( !v25 )
        sub_1C2D6EC(v32, v32);
      goto LABEL_22;
    }
    if ( !*v9 )
      sub_1C2D6EC(0, v31);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v9,
           current,
           (const MethodInfo_364147C *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v49.fields.r = 0.5;
      v49.fields.g = 0.5;
      v49.fields.b = 0.5;
      v49.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v49, 0);
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v33 = (Il2CppObject *)v34;
      if ( !v25 )
        sub_1C2D6EC(v34, v34);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v25,
        v33,
        (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      v50.fields.r = 1.0;
      v50.fields.g = 1.0;
      v50.fields.b = 1.0;
      v50.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v50, 0);
      v35 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v38 = v35;
      if ( !v25 )
        sub_1C2D6EC(v35, v35);
      items = v25->fields._items;
      v40 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v25->fields._version;
      if ( !items )
        sub_1C2D6EC(v35, v35);
      size = v25->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          v35,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v38;
        sub_1C2D434((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v38, v36, v37);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3513F94 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v43 = this->fields.button;
  v44 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v25,
          (const MethodInfo_30F1BF4 *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_object_(
                                       v44,
                                       (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v43 )
LABEL_39:
    sub_1C2D6EC(pieceData, v6);
  v43->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.tweenTargets, (int32_t)pieceData, v45, v46);
}


void WarBoardPieceBaseComponent__UpdateUiByBuffChanged(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v4; // x1
  WarBoardPieceStatusLabel_o *v5; // x0

  if ( (byte_4C24B0D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B0D = 1;
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
      sub_1C2D6EC(0, v4);
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

  if ( (byte_4C24B21 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24B21 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C2D6EC(Instance, v5);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v7);
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  int max_length; // w21
  unsigned int i; // w22
  Il2CppClass **v13; // x0
  Il2CppClass *v14; // x8
  Il2CppClass *v15; // t1
  unsigned __int64 v16; // x22
  __int64 v17; // x24
  UnityEngine_Object_o *v18; // x21
  struct UIWidget_array *v19; // x8

  v4 = this;
  if ( (byte_4C24B1A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    this = (WarBoardPieceBaseComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B1A = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.uiWidgets, (int32_t)ComponentsInChildren_object, v8, v9);
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
        v13 = &uiWidgets->obj.klass + (int)i;
        v15 = v13[4];
        this = (WarBoardPieceBaseComponent_o *)(v13 + 4);
        v14 = v15;
        if ( !v15 )
          goto LABEL_26;
        if ( SLODWORD(v14->_1.interfaceOffsets) >= 1001 )
        {
          this->klass = 0;
          sub_1C2D434((CGThumbnailListItem_o *)this, 0, (int32_t)method, v10);
        }
        uiWidgets = *p_uiWidgets;
      }
      if ( !uiWidgets )
LABEL_26:
        sub_1C2D6EC(this, *(_QWORD *)&value);
    }
  }
  if ( (int)uiWidgets->max_length >= 1 )
  {
    v16 = 0;
    v17 = (unsigned int)uiWidgets->max_length - 1LL;
    while ( v16 < LODWORD(uiWidgets->max_length) )
    {
      v18 = (UnityEngine_Object_o *)uiWidgets->m_Items[v16];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v19 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_26;
        if ( v16 >= LODWORD(v19->max_length) )
          break;
        this = (WarBoardPieceBaseComponent_o *)v19->m_Items[v16];
        if ( !this )
          goto LABEL_26;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0);
      }
      if ( v17 == v16 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v16;
      if ( !*p_uiWidgets )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C2D6F4(this, *(_QWORD *)&value, method);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C24BC6 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4C24BC6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0);
}


void WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C24BC9 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C24BC9 = 1;
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

  if ( (byte_4C24BC7 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C24BC7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0, 0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C24BC8 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C24BC8 = 1;
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

  if ( (byte_4C24BCA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4C24BCA = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C2D6EC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4C24BCB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4C24BCB = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C2D6EC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4C24BCC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4C24BCC = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C2D6EC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4C24BCD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4C24BCD = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C2D6EC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_1C2D6EC(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4C24BCE & 1) == 0 )
  {
    sub_1C2D490(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C24BCE = 1;
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

  if ( (byte_4C24BCF & 1) == 0 )
  {
    sub_1C2D490(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C24BCF = 1;
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

  if ( (byte_4C24BD0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24BD0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0);
  if ( !v3 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0);
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_1C2D6EC(Instance, v5);
  v9 = WarBoardManager__GetEventTasks(Instance, 37, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v9,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_1C2D6EC(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C24BD2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24BD2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(_4__this, method);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C24BD1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_4C24BD1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
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
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
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
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v16, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  v18 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v16, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v18,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v19 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v19 )
    {
      WarBoardManager__InsertRunningTask(v19, (WarBoardTaskBase_array *)targetPiece, 0);
      return;
    }
LABEL_25:
    sub_1C2D6EC(targetPiece, v4);
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
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C24BD4 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24BD4 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(_4__this, method);
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

  if ( (byte_4C24BD3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24BD3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0, 0);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0);
      return;
    }
LABEL_9:
    sub_1C2D6EC(Instance, v5);
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
    sub_1C2D6EC(this, 0);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0);
}