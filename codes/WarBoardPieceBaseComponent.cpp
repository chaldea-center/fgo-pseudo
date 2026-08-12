void WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_String_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596DF55 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&StringLiteral_7151/*"Frame{0}"*/);
    byte_596DF55 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.listEffectData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_String_o *)StringLiteral_7151/*"Frame{0}"*/;
  this->fields.lengthMoveAttack = 25.0;
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_E9D010;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_E9C740;
  this->fields.baseFrameName = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseFrameName,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.removeTweenTargetObjects,
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
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
  if ( (byte_596DF4C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardMovePerformance_TypeInfo);
    byte_596DF4C = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v16 = (WarBoardMovePerformance_o *)sub_2213CCC(WarBoardMovePerformance_TypeInfo);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v17;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v28 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v28,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v29 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v29,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v9,
                                             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_2213CDC(pieceData, v10);
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
  const MethodInfo *v10; // x1
  Il2CppMethodPointer methodPtr; // x2
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

  if ( (byte_596DF3D & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent_ClickIcon__);
    byte_596DF3D = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v13 = (_QWORD *)sub_2213A78(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      v15 = this->fields.pieceData;
      if ( v15 )
      {
        WarBoardManager__SquareSelect(v6, v15->fields._nowSquareIndex_k__BackingField, 0);
        v10 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
        goto LABEL_33;
      }
LABEL_41:
      sub_2213CDC(Instance, v4);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0) )
    {
      v7 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v8, seSetting->fields.DeselectSe, 0, 0);
          WarBoardManager__DeselectPiece(v6, 1, 0, 0);
          v10 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
LABEL_33:
          ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))methodPtr)(this, v10);
          return;
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__get_isSelectedPiece(v6, 0) && this->fields.isSelectable )
    {
      v16 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_2213A78(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v20 = (_QWORD *)sub_2213A78(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v22 = Instance->fields.seSetting;
        if ( v22 )
        {
          OverwriteAssetSoundName__PlaySe(v21, v22->fields.SelectSe, 0, 0);
          WarBoardManager__SelectPiece(v6, this->fields.pieceData, 0);
          methodPtr = this->klass->vtable._12_ShowStatus.methodPtr;
          v10 = this->klass->vtable._12_ShowStatus.method;
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
      v23 = (_QWORD *)sub_2213A78(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v24 = (System_Reflection_MethodBase_o *)sub_2213A44(v23, v23[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x22
  WarBoardCommonEffectPerformance_o *v20; // x0
  Il2CppObject *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Nullable_Vector3__o v32; // 0:x3.16
  System_Nullable_Vector3__o v33; // 0:x5.16

  if ( (byte_596DF52 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_2213A60(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_596DF52 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_3A15E70 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    if ( !UnityEngine_Object__op_Inequality(v16, 0, 0) )
      v16 = (UnityEngine_Object_o *)transform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    v19 = UnityEngine_Object__Instantiate_object__59717116(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v16,
            (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    v20 = (WarBoardCommonEffectPerformance_o *)sub_2213CCC(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v32.fields.hasValue = 0;
    *(_QWORD *)&v32.fields.value.fields.y = 0;
    *(_QWORD *)&v33.fields.hasValue = 0;
    *(_QWORD *)&v33.fields.value.fields.y = 0;
    v21 = (Il2CppObject *)v20;
    WarBoardCommonEffectPerformance___ctor(
      v20,
      0,
      (UnityEngine_GameObject_o *)v19,
      v32,
      v33,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0);
    if ( v7 )
    {
      items = v7->fields._items;
      v29 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v21,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v31 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v21, v22, v23, v24, v25, v26, v27);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v7,
              (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_44971780(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v7,
            0);
          return;
        }
      }
    }
LABEL_21:
    sub_2213CDC(Instance, v9);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v14; // x1
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v16; // x22
  WarBoardCommonEffectPerformance_o *v17; // x0
  Il2CppObject *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Nullable_Vector3__o v29; // 0:x3.16
  System_Nullable_Vector3__o v30; // 0:x5.16

  if ( (byte_596DF53 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardCommonEffectPerformance_TypeInfo);
    byte_596DF53 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName, popText);
  if ( !UnityEngine_Object__op_Equality(0, effectDamageBaseObject, 0) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    effectDamageBaseLabel = (UnityEngine_Object_o *)this->fields.effectDamageBaseLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Inequality(effectDamageBaseLabel, 0, 0) )
    {
      Instance = this->fields.effectDamageBaseLabel;
      if ( !Instance )
        goto LABEL_19;
      UILabel__set_text(Instance, popText, 0);
    }
    v16 = this->fields.effectDamageBaseObject;
    v17 = (WarBoardCommonEffectPerformance_o *)sub_2213CCC(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v29.fields.hasValue = 0;
    *(_QWORD *)&v29.fields.value.fields.y = 0;
    *(_QWORD *)&v30.fields.hasValue = 0;
    *(_QWORD *)&v30.fields.value.fields.y = 0;
    v18 = (Il2CppObject *)v17;
    WarBoardCommonEffectPerformance___ctor(v17, 0, v16, v29, v30, (System_Nullable_Vector3__o)0, 0, 0, 0, 0);
    if ( v10 )
    {
      items = v10->fields._items;
      v26 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v10->fields._version;
      if ( items )
      {
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v18,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v28 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v18;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v10,
              (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_44971780(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
            0);
          return;
        }
      }
    }
LABEL_19:
    sub_2213CDC(Instance, v14);
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

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
  __int64 v8; // x2
  long double v9; // q0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *m_CachedPtr; // x19
  WarBoardPieceBaseComponent___c_c *v16; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v19; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v4 = this;
  if ( (byte_596DF46 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__);
    this = (WarBoardPieceBaseComponent_o *)sub_2213A60(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_596DF46 = 1;
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
             (const MethodInfo_3875F9C *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v7,
               (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_2213CDC(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v16 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( !*(&WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, targetPiece, v8);
      v16 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__62_0 = (System_Func_object__object__o *)static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, targetPiece, v8);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__62_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__62_0,
        v19,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0);
      v20 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v20->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__62_0, (int32_t)_9__62_0, v21, v22, v23, v24, v25, v26);
    }
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                m_CachedPtr,
                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                (const MethodInfo_3893C3C *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v7,
             (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908(v9);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(v12, targetPiece, v8);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v9);
  return **(System_Int32_array ***)(v13 + 184);
}


WarBoardSimpleAnimationPerformance_o *WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_596DF4E & 1) == 0 )
  {
    sub_2213A60(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_596DF4E = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_2213CCC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0);
  return v6;
}


void WarBoardPieceBaseComponent__HideActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_596DF3F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF3F = 1;
  }
  currentActionPointRoot = this->fields.currentActionPointRoot;
  if ( !currentActionPointRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0);
  currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0, 0) )
  {
    currentActionPointRoot = this->fields.currentPieceActionPointRoot;
    if ( currentActionPointRoot )
    {
      UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0);
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(currentActionPointRoot, method);
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
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0);
}


void WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_596DF42 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_596DF42 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_2213CDC(0, method);
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
  UnityEngine_Transform_o *transform; // x21
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct UIWidget_o *breakPointParent; // x8
  UnityEngine_Object_c **v30; // x25
  float v31; // s8
  unsigned __int64 v32; // x27
  __int64 v33; // x26
  int v34; // w28
  float v35; // s9
  Il2CppObject *breakPointPrefab; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Transform_o *v39; // x24
  UnityEngine_GameObject_o *v40; // x24
  __int64 v41; // x22
  WarBoardBreakPointComponent_o *v42; // x23
  UnityEngine_Object_c **v43; // x21
  struct UIWidget_o *v44; // x8
  WarBoardPieceBaseComponent_o *v45; // x20
  int32_t mDepth; // w29
  bool isMaster; // w25
  const MethodInfo *v48; // x6
  unsigned __int64 v49; // x24
  unsigned int *v50; // x25
  __int64 v51; // x1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  const MethodInfo *v58; // x3
  struct WarBoardBreakPointComponent_array *v59; // x8
  float maxSpacing; // s0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  UnityEngine_Transform_array *v67; // x21
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  UnityEngine_Transform_o *v74; // x22
  const MethodInfo *v75; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  __int64 v79; // x1
  __int64 v80; // x2
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  UnityEngine_Object_o *v85; // x22
  __int64 v86; // x1
  __int64 v87; // x2
  Il2CppObject *v88; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  __int64 v96; // x1
  __int64 v97; // x2
  UnityEngine_Object_o *v98; // x21
  Il2CppObject *v99; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  __int64 v106; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF39 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&UnityEngine_Transform___TypeInfo);
    sub_2213A60(&WarBoardBreakPointComponent___TypeInfo);
    sub_2213A60(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_2213A60(&StringLiteral_24356/*"root_text/type01/dm_base"*/);
    sub_2213A60(&StringLiteral_19694/*"ef_dm_base"*/);
    byte_596DF39 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_53;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.pieceData = pieceData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pieceData,
    (int32_t)pieceData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_53;
  if ( !gameObject )
    goto LABEL_53;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  breakPointMax_k__BackingField = (unsigned int)pieceData->fields._breakPointMax_k__BackingField;
  v22 = (struct WarBoardBreakPointComponent_array *)sub_2213B20(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.breakPoints, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  breakPointParent = this->fields.breakPointParent;
  p_breakPoints = &this->fields.breakPoints;
  if ( !breakPointParent )
    goto LABEL_53;
  v30 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v31 = 0.0;
    v32 = 0;
    v33 = 8;
    v34 = 2 * breakPointMax_k__BackingField - 2;
    v35 = (float)breakPointParent->fields.mWidth / (float)(int)breakPointMax_k__BackingField;
    do
    {
      gameObject = (__int64)this->fields.breakPointParent;
      if ( !gameObject )
        goto LABEL_53;
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !*(&(*v30)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v30, v37, v38);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__59717116(
                              breakPointPrefab,
                              v39,
                              (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
      if ( !gameObject )
        goto LABEL_53;
      v40 = (UnityEngine_GameObject_o *)gameObject;
      v41 = breakPointMax_k__BackingField;
      v42 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v40, 0);
      if ( !gameObject )
        goto LABEL_53;
      v108.fields.y = 0.0;
      v108.fields.z = 0.0;
      v108.fields.x = v31;
      v43 = v30;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v108, 0);
      v44 = this->fields.breakPointParent;
      if ( !v44 )
        goto LABEL_53;
      v45 = this;
      mDepth = v44->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0);
      if ( !v42 )
        goto LABEL_53;
      v49 = v32 + 1;
      WarBoardBreakPointComponent__Initialize(v42, v34 + mDepth, v32 + 1, isMaster, gameObject & 1, 0, v48);
      v50 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_53;
      gameObject = sub_2213BB4(v42, *(_QWORD *)(*(_QWORD *)v50 + 64LL));
      if ( !gameObject )
        goto LABEL_56;
      if ( v32 >= v50[6] )
        goto LABEL_55;
      this = v45;
      *(_QWORD *)&v50[v33] = v42;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50[v33], (int32_t)v42, v52, v53, v54, v55, v56, v57);
      v59 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_53;
      if ( v32 >= LODWORD(v59->max_length) )
        goto LABEL_55;
      gameObject = (__int64)v59->m_Items[v32];
      if ( !gameObject )
        goto LABEL_53;
      v30 = v43;
      breakPointMax_k__BackingField = v41;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v32 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v58);
      maxSpacing = v42->fields.maxSpacing;
      v34 -= 2;
      v33 += 2;
      ++v32;
      if ( maxSpacing >= v35 )
        maxSpacing = v35;
      v31 = v31 + maxSpacing;
    }
    while ( v41 != v49 );
  }
  gameObject = (__int64)this->fields.selectObject;
  if ( !gameObject )
    goto LABEL_53;
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&pieceData->fields.pieceComponent,
    (int32_t)this,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_53;
LABEL_29:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    return;
  }
  v67 = (UnityEngine_Transform_array *)sub_2213B20(UnityEngine_Transform___TypeInfo, 1);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v67 )
    goto LABEL_53;
  v74 = (UnityEngine_Transform_o *)gameObject;
  if ( gameObject )
  {
    gameObject = sub_2213BB4(gameObject, v67->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_56:
      v106 = sub_2213D00(gameObject, v51);
      sub_2213BA0(v106, 0);
    }
  }
  if ( !LODWORD(v67->max_length) )
LABEL_55:
    sub_2213CE4(gameObject);
  v67->m_Items[0] = v74;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v67->m_Items, (int32_t)v74, v68, v69, v70, v71, v72, v73);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v67, v75);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_53;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_53;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v77);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v78);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_53;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_19694/*"ef_dm_base"*/,
                               (const MethodInfo_3A15E70 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !*(&(*v30)->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(*v30, v79, v80);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    v82 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v85 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !*(&(*v30)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v30, v83, v84);
    if ( UnityEngine_Object__op_Inequality(v85, 0, 0) )
      v82 = (UnityEngine_Transform_o *)v85;
    if ( !*(&(*v30)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v30, v86, v87);
    v88 = UnityEngine_Object__Instantiate_object__59717116(
            CommonEffectAsset_object,
            v82,
            (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v88;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectDamageBaseObject,
      (int32_t)v88,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0, 0) )
    {
      v98 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_24356/*"root_text/type01/dm_base"*/,
                                      0);
      if ( !*(&(*v30)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v30, v96, v97);
      gameObject = UnityEngine_Object__op_Inequality(v98, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v98 )
          goto LABEL_53;
        v99 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v98,
                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v99;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.effectDamageBaseLabel,
          (int32_t)v99,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_53:
        sub_2213CDC(gameObject, v6);
      goto LABEL_29;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_WarBoardTaskBase__c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  WarBoardPieceData_o *Piece_44788124; // x0
  WarBoardData_o **v25; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x24
  WarBoardTaskBase_TaskCallback_o *v33; // x25
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v51; // x2
  int32x2_t v52; // d1
  float32x2_t v53; // d9
  float v54; // s10
  float32x2_t v55; // d9
  float v56; // s8
  float v57; // s10
  float z; // s8
  float32x2_t v59; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v62; // s0
  unsigned __int64 v63; // d1
  float v64; // s0
  __int64 v65; // x24
  WarBoardTaskBase_TaskCallback_o *v66; // x25
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct WarBoardPieceData_o *v73; // x8
  UnityEngine_GameObject_o *v74; // x26
  float v75; // s8
  float v76; // s9
  float v77; // s10
  float pixelPerSecond; // s13
  WarBoardMovePerformance_o *v79; // x0
  WarBoardTaskBase_o *v80; // x25
  bool IsEnabledMovedAfterDefend; // w0
  bool v82; // w9
  System_Func_bool__c *v83; // x0
  System_Func_bool__o *v84; // x23
  __int64 v85; // x21
  __int64 v86; // x2
  System_Delegate_o **v87; // x22
  System_Delegate_o *v88; // x23
  WarBoardPieceBaseComponent___c_c *v89; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *v90; // x8
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v92; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  System_Delegate_o *v100; // x0
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  int32_t v107; // w8
  WarBoardTaskBase_TaskCallback_c *v108; // x1
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  float32x2_t v119; // d0
  unsigned __int64 v120; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v122; // 0:kr14_12.12
  UnityEngine_Vector3_o v123; // 0:kr20_12.12
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF49 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__);
    sub_2213A60(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
    sub_2213A60(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_2213A60(&WarBoardCallbackTask_TypeInfo);
    sub_2213A60(&WarBoardConditionalJumpTask_TypeInfo);
    sub_2213A60(&WarBoardMovePerformance_TypeInfo);
    byte_596DF49 = 1;
  }
  v5 = sub_2213CCC(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_60;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Collections_Generic_List_WarBoardTaskBase__TypeInfo;
  *(_DWORD *)(v5 + 52) = squareIndex;
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 24) = Instance;
  v17 = (WarBoardData_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Instance, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_44788124 = WarBoardData__GetPiece_44788124(gameObject, *(_DWORD *)(v5 + 52), 0);
  *(_QWORD *)(v5 + 16) = Piece_44788124;
  v25 = (WarBoardData_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Piece_44788124, v26, v27, v28, v29, v30, v31);
  v32 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0, 0);
  v33 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v32 )
    goto LABEL_60;
  *(_QWORD *)(v32 + 32) = v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
  if ( !v15 )
    goto LABEL_60;
  items = v15->fields._items;
  v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v15->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v32,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), v32, v40, v41, v42, v43, v44, v45);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v17;
  if ( !*v17 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  v122 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v5 + 52), 0);
  v119.n64_u64[0] = *(unsigned __int64 *)&v122.fields.x;
  v53.n64_u64[0] = *(unsigned __int64 *)(v5 + 40);
  v54 = *(float *)(v5 + 48);
  if ( !byte_5969AE2 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    v119.n64_u64[0] = *(unsigned __int64 *)&v122.fields.x;
    byte_5969AE2 = 1;
  }
  v55.n64_u64[0] = vsub_f32(v119, v53).n64_u64[0];
  v56 = v122.fields.z - v54;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v51);
  v57 = vaddv_f32(vmul_f32(v55, v55)) + (float)(v56 * v56);
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  v52.n64_f32[0] = sqrtf(v57);
  v120 = v52.n64_u64[0];
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v51);
    v52.n64_u64[0] = v120;
  }
  if ( v52.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v59.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    z = v56 / v52.n64_f32[0];
    v59.n64_u64[0] = vdiv_f32(v55, vdup_lane_s32(v52, 0)).n64_u64[0];
  }
  gameObject = *v25;
  if ( !*v25 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v62 = *(float *)&v120 - lengthOnAttack;
  if ( (float)(*(float *)&v120 - lengthOnAttack) > 0.0 )
  {
    v63 = vadd_f32(vmul_n_f32(v59, v62), *(float32x2_t *)(v5 + 40)).n64_u64[0];
    v64 = (float)(z * v62) + *(float *)(v5 + 48);
    *(_QWORD *)(v5 + 40) = v63;
    *(float *)(v5 + 48) = v64;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0);
  v65 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v65, 0, 0);
  v66 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v66,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0);
  if ( !v65 )
    goto LABEL_60;
  *(_QWORD *)(v65 + 32) = v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 32), (int32_t)v66, v67, v68, v69, v70, v71, v72);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v73 = this->fields.pieceData;
  if ( !v73 )
    goto LABEL_60;
  v74 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v75 = *(float *)(v5 + 40);
  v76 = *(float *)(v5 + 44);
  v77 = *(float *)(v5 + 48);
  v123 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v73->fields._nowSquareIndex_k__BackingField,
           0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v79 = (WarBoardMovePerformance_o *)sub_2213CCC(WarBoardMovePerformance_TypeInfo);
  v124.fields.x = v75;
  v124.fields.y = v76;
  v124.fields.z = v77;
  v80 = (WarBoardTaskBase_o *)v79;
  WarBoardMovePerformance___ctor(v79, v74, v124, v123, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0) )
  {
    gameObject = *v25;
    if ( !*v25 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  v82 = IsEnabledMovedAfterDefend;
  v83 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v5 + 56) = v82;
  v84 = (System_Func_bool__o *)sub_2213CCC(v83);
  System_Func_bool____ctor(
    v84,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0);
  v85 = sub_2213CCC(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v85, v84, (WarBoardTaskBase_o *)v65, v80, 0);
  if ( !v85 )
LABEL_60:
    sub_2213CDC(gameObject, v7);
  v87 = (System_Delegate_o **)(v85 + 40);
  v88 = *(System_Delegate_o **)(v85 + 40);
  v89 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !*(&WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, v7, v86);
    v89 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  v90 = v89->static_fields;
  _9__65_3 = v90->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !*(&v89->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v89, v7, v86);
      v90 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v92 = (Il2CppObject *)v90->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v92,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0);
    v93 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v93->__9__65_3 = _9__65_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v93->__9__65_3, (int32_t)_9__65_3, v94, v95, v96, v97, v98, v99);
  }
  v100 = System_Delegate__Combine(v88, (System_Delegate_o *)_9__65_3, 0);
  v107 = (int)v100;
  if ( v100 )
  {
    v108 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v100->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v87 = v100;
      if ( (WarBoardTaskBase_TaskCallback_c *)v100->klass == v108 )
        goto LABEL_54;
    }
    sub_221405C(v100, v108, v101, v102);
  }
  *v87 = 0;
LABEL_54:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v85 + 40), v107, v101, v102, v103, v104, v105, v106);
  v115 = v15->fields._items;
  v116 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !v115 )
    goto LABEL_60;
  v117 = v15->fields._size;
  if ( (unsigned int)v117 >= LODWORD(v115->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v85,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
  }
  else
  {
    v118 = &v115->obj.klass + v117;
    v15->fields._size = v117 + 1;
    v118[4] = (Il2CppClass *)v85;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v118 + 4), v85, v109, v110, v111, v112, v113, v114);
  }
  gameObject = *v17;
  if ( !*v17 )
    goto LABEL_60;
  WarBoardManager__AddTask_44971780(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_WarBoardTaskBase__c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  WarBoardWallData_o *Wall; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x23
  WarBoardTaskBase_TaskCallback_o *v32; // x24
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v50; // x1
  __int64 v51; // x2
  int32x2_t v52; // d3
  float32x2_t v53; // d9
  float v54; // s10
  float32x2_t v55; // d9
  float v56; // s8
  float v57; // s10
  float z; // s1
  float32x2_t v59; // d0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v61; // s2
  float v62; // s1
  __int64 v63; // x23
  WarBoardTaskBase_TaskCallback_o *v64; // x24
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct WarBoardPieceData_o *v71; // x8
  UnityEngine_GameObject_o *v72; // x25
  float v73; // s8
  float v74; // s9
  float v75; // s10
  float pixelPerSecond; // s13
  WarBoardMovePerformance_o *v77; // x0
  WarBoardTaskBase_o *v78; // x24
  bool IsEnabledMoveAfterAttack; // w0
  System_Func_bool__c *v80; // x8
  System_Func_bool__o *v81; // x25
  WarBoardConditionalJumpTask_o *v82; // x19
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  float32x2_t v93; // d0
  unsigned __int64 v94; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v95; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v97; // 0:kr14_12.12
  UnityEngine_Vector3_o v98; // 0:kr20_12.12
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF4B & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__);
    sub_2213A60(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
    sub_2213A60(&WarBoardCallbackTask_TypeInfo);
    sub_2213A60(&WarBoardConditionalJumpTask_TypeInfo);
    sub_2213A60(&WarBoardMovePerformance_TypeInfo);
    byte_596DF4B = 1;
  }
  v5 = sub_2213CCC(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Collections_Generic_List_WarBoardTaskBase__TypeInfo;
  *(_DWORD *)(v5 + 44) = squareIndex;
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 16) = Instance;
  v17 = (WarBoardData_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Instance, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v5 + 44), 1, 0);
  *(_QWORD *)(v5 + 48) = Wall;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)Wall, v25, v26, v27, v28, v29, v30);
  v31 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v31, 0, 0);
  v32 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v31 )
    goto LABEL_40;
  *(_QWORD *)(v31 + 32) = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  if ( !v15 )
    goto LABEL_40;
  items = v15->fields._items;
  v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v15->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v31,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v31;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 4), v31, v39, v40, v41, v42, v43, v44);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v17;
  if ( !*v17 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 16);
  *(UnityEngine_Vector3_o *)(v5 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  v97 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v5 + 44), 0);
  v93.n64_u64[0] = *(unsigned __int64 *)&v97.fields.x;
  v53.n64_u64[0] = *(unsigned __int64 *)(v5 + 32);
  v54 = *(float *)(v5 + 40);
  if ( !byte_5969AE2 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    v93.n64_u64[0] = *(unsigned __int64 *)&v97.fields.x;
    byte_5969AE2 = 1;
  }
  v55.n64_u64[0] = vsub_f32(v93, v53).n64_u64[0];
  v56 = v97.fields.z - v54;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v50, v51);
  v57 = vaddv_f32(vmul_f32(v55, v55)) + (float)(v56 * v56);
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  v52.n64_f32[0] = sqrtf(v57);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v94 = v52.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v50, v51);
    v52.n64_u64[0] = v94;
  }
  if ( v52.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      v95 = v52.n64_u32[0];
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      v52.n64_u32[0] = v95;
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v59.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    z = v56 / v52.n64_f32[0];
    v59.n64_u64[0] = vdiv_f32(v55, vdup_lane_s32(v52, 0)).n64_u64[0];
  }
  v61 = v52.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v61 > 0.0 )
  {
    v62 = (float)(z * v61) + *(float *)(v5 + 40);
    *(float32x2_t *)(v5 + 32) = vadd_f32(vmul_n_f32(v59, v61), *(float32x2_t *)(v5 + 32));
    *(float *)(v5 + 40) = v62;
  }
  v63 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v63, 0, 0);
  v64 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v64,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0);
  if ( !v63 )
    goto LABEL_40;
  *(_QWORD *)(v63 + 32) = v64;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 32), (int32_t)v64, v65, v66, v67, v68, v69, v70);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v71 = this->fields.pieceData;
  if ( !v71 )
    goto LABEL_40;
  v72 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v73 = *(float *)(v5 + 32);
  v74 = *(float *)(v5 + 36);
  v75 = *(float *)(v5 + 40);
  v98 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v71->fields._nowSquareIndex_k__BackingField,
          0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v77 = (WarBoardMovePerformance_o *)sub_2213CCC(WarBoardMovePerformance_TypeInfo);
  v99.fields.x = v73;
  v99.fields.y = v74;
  v99.fields.z = v75;
  v78 = (WarBoardTaskBase_o *)v77;
  WarBoardMovePerformance___ctor(v77, v72, v99, v98, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  IsEnabledMoveAfterAttack = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0);
  v80 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v5 + 56) = IsEnabledMoveAfterAttack;
  v81 = (System_Func_bool__o *)sub_2213CCC(v80);
  System_Func_bool____ctor(
    v81,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0);
  v82 = (WarBoardConditionalJumpTask_o *)sub_2213CCC(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor(v82, v81, (WarBoardTaskBase_o *)v63, v78, 0);
  v89 = v15->fields._items;
  v90 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !v89 )
    goto LABEL_40;
  v91 = v15->fields._size;
  if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v82,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = &v89->obj.klass + v91;
    v15->fields._size = v91 + 1;
    v92[4] = (Il2CppClass *)v82;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v92 + 4), (int32_t)v82, v83, v84, v85, v86, v87, v88);
  }
  gameObject = *v17;
  if ( !*v17 )
LABEL_40:
    sub_2213CDC(gameObject, v7);
  WarBoardManager__AddTask_44971780(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 *v14; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v16; // x22
  float x; // s11
  float y; // s15
  float z; // s14
  WarBoardSquareData_o *Square; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
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
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  void *v44; // x8
  WarBoardTaskBase_TaskCallback_c *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  __int64 v56; // x2
  float v57; // s8
  float v58; // s10
  float v59; // s12
  float v60; // s9
  float v61; // s13
  float v62; // s8
  float v63; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  float v66; // s0
  UnityEngine_GameObject_o *gameObject; // x26
  float pixelPerSecond; // s12
  WarBoardMovePerformance_o *v69; // x0
  Il2CppObject *v70; // x25
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  System_Collections_Generic_List_object__o *v81; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v82; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v83; // x0
  float lengthMoveAttack; // s0
  float v85; // s9
  float v86; // s12
  float v87; // s13
  UnityEngine_GameObject_o *v88; // x0
  float v89; // s8
  float v90; // s14
  UnityEngine_GameObject_o *v91; // x21
  WarBoardMovePerformance_o *v92; // x0
  WarBoardTaskBase_o *v93; // x24
  __int64 v94; // x1
  __int64 v95; // x2
  System_Collections_Generic_List_WarBoardTaskBase__o *v96; // x21
  WarBoardMessageMaster_o *v97; // x23
  int32_t id; // w26
  System_Collections_Generic_List_object__o *v99; // x0
  int32_t breakPoint_k__BackingField; // w27
  WarBoardMessageMaster_o *v101; // x0
  int32_t v102; // w1
  int32_t v103; // w2
  int32_t v104; // w3
  bool v105; // w4
  __int64 v106; // x24
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  Il2CppObject **v113; // x22
  __int64 v114; // x1
  __int64 v115; // x2
  float lengthOnEncount; // s0
  float v117; // s2
  float v118; // s1
  float v119; // s0
  float v120; // s12
  float v121; // s10
  float v122; // s8
  float v123; // s9
  float v124; // s11
  float v125; // s13
  float v126; // s10
  float v127; // s14
  float v128; // s13
  float v129; // s12
  float v130; // s15
  float v131; // s14
  float v132; // s13
  struct UnityEngine_Vector3_StaticFields *v133; // x8
  float v134; // s1
  _QWORD *monitor; // x8
  __int64 v136; // x8
  float v137; // s10
  float ZoomSize; // s0
  __int64 v139; // x8
  __int64 v140; // x8
  __int64 v141; // x8
  const MethodInfo_45E9150 *v142; // x2
  UnityEngine_Vector2_o ScrlPos; // kr20_8
  __int64 v144; // x8
  WarBoardManager_o *v145; // x23
  float v146; // s10
  float encountCameraSize; // s0
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  struct System_Object_array *v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  __int64 v157; // x1
  Il2CppClass **v158; // x0
  System_Collections_Generic_IEnumerable_T__o *v159; // x23
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  WarBoardTaskBase_array *v166; // x23
  __int64 v167; // x1
  WarBoardManager_o *v168; // x24
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  WarBoardTaskBase_o *v177; // x24
  System_String_o *v178; // x2
  System_String_o *v179; // x3
  int32_t v180; // w4
  int32_t v181; // w5
  bool v182; // w6
  bool v183; // w7
  WarBoardTaskBase_o *v184; // x24
  const MethodInfo *v185; // x2
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  WarBoardTaskBase_o *v192; // x22
  WarBoardOrthostichySchedule_o *v193; // x22
  System_String_o *v194; // x2
  System_String_o *v195; // x3
  int32_t v196; // w4
  int32_t v197; // w5
  bool v198; // w6
  bool v199; // w7
  WarBoardParallelSchedule_o *v200; // x21
  int32_t v201; // w4
  int32_t v202; // w5
  bool v203; // w6
  bool v204; // w7
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  Il2CppClass **v208; // x0
  int32_t v209; // w1
  MissionNaviTransitionBoardItem_o *v210; // x0
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  WarBoardPieceBaseComponent___c_c *v217; // x8
  struct WarBoardPieceBaseComponent___c_StaticFields *v218; // x9
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v220; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v221; // x0
  System_String_o *v222; // x2
  System_String_o *v223; // x3
  int32_t v224; // w4
  int32_t v225; // w5
  bool v226; // w6
  bool v227; // w7
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  WarBoardTaskBase_TaskCallback_o *v230; // x26
  System_Delegate_o *v231; // x0
  int32_t v232; // w4
  int32_t v233; // w5
  bool v234; // w6
  bool v235; // w7
  System_String_o *v236; // x2
  System_String_o *v237; // x3
  int32_t v238; // w4
  int32_t v239; // w5
  bool v240; // w6
  bool v241; // w7
  struct System_Object_array *v242; // x8
  _QWORD *v243; // x9
  __int64 v244; // x10
  Il2CppClass **v245; // x0
  Il2CppObject *v246; // x22
  System_Delegate_o *v247; // x23
  WarBoardTaskBase_TaskCallback_o *v248; // x24
  WarBoardPieceBaseComponent_c *v249; // x0
  __int64 v250; // x2
  __int64 v251; // x21
  WarBoardPieceBaseComponent___c_c *v252; // x0
  System_Delegate_o *v253; // x22
  System_Delegate_o *v254; // t1
  struct WarBoardPieceBaseComponent___c_StaticFields *v255; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v257; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v258; // x0
  System_String_o *v259; // x2
  System_String_o *v260; // x3
  int32_t v261; // w4
  int32_t v262; // w5
  bool v263; // w6
  bool v264; // w7
  WarBoardPieceBaseComponent_c *v265; // x0
  int32_t v266; // w4
  int32_t v267; // w5
  bool v268; // w6
  bool v269; // w7
  __int64 v270; // x0
  WarBoardManager_o **v271; // [xsp+20h] [xbp-C0h]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v273; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v275; // 0:kr14_12.12
  System_Nullable_Vector3__o v276; // 0:x0.16
  UnityEngine_Vector3_o v277; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v278; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v279; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v280; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v281; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v282; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_596DF47 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__);
    sub_2213A60(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__);
    sub_2213A60(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    sub_2213A60(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_2213A60(&WarBoardCallbackTask_TypeInfo);
    sub_2213A60(&WarBoardMovePerformance_TypeInfo);
    sub_2213A60(&WarBoardOrthostichySchedule_TypeInfo);
    sub_2213A60(&WarBoardParallelSchedule_TypeInfo);
    sub_2213A60(&WarBoardTaskBase___TypeInfo);
    sub_2213A60(&StringLiteral_9308/*"MasterDamage"*/);
    byte_596DF47 = 1;
  }
  v5 = sub_2213CCC(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v5, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v5 )
    goto LABEL_157;
  *(_QWORD *)(v5 + 24) = Instance;
  v14 = (__int64 *)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), Instance, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardData__GetPiece_44788124((WarBoardData_o *)Instance, squareIndex, 0);
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
  v275 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0);
  if ( !*v14 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v14 + 440);
  if ( !Instance )
    goto LABEL_157;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0);
  *(_QWORD *)(v5 + 16) = Square;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Square, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v16, v28);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0);
  if ( !v27 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v271 = (WarBoardManager_o **)(v5 + 24);
  v31 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)v31,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v32 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0, 0);
  if ( !v32 )
    goto LABEL_157;
  v33 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v34 = (System_Delegate_o **)(v32 + 32);
  v35 = *(System_Delegate_o **)(v32 + 32);
  v36 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v36,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0);
  v37 = System_Delegate__Combine(v35, (System_Delegate_o *)v36, 0);
  v44 = v37;
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v37, v38, v39, v40, v41, v42, v43);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &items->obj.klass + v54;
    v27->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 4), v32, v46, v47, v48, v49, v50, v51);
  }
  if ( !byte_5969AE2 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE2 = 1;
  }
  v57 = v275.fields.x - SquarePosition.fields.x;
  v58 = v275.fields.y - SquarePosition.fields.y;
  v59 = v275.fields.z - SquarePosition.fields.z;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v56);
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  v60 = sqrtf((float)(v59 * v59) + (float)((float)(v57 * v57) + (float)(v58 * v58)));
  Instance = (__int64)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v56);
  if ( v60 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      Instance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v61 = static_fields->zeroVector.fields.x;
    v62 = static_fields->zeroVector.fields.y;
    v63 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v61 = v57 / v60;
    v62 = v58 / v60;
    v63 = v59 / v60;
  }
  if ( !v16 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v16, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v66 = v60 - lengthOnAttack;
  if ( (float)(v60 - lengthOnAttack) > 0.0 )
  {
    x = SquarePosition.fields.x + (float)(v61 * v66);
    y = SquarePosition.fields.y + (float)(v62 * v66);
    z = SquarePosition.fields.z + (float)(v63 * v66);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v69 = (WarBoardMovePerformance_o *)sub_2213CCC(WarBoardMovePerformance_TypeInfo);
    v281.fields.x = x;
    v281.fields.y = y;
    v281.fields.z = z;
    v70 = (Il2CppObject *)v69;
    WarBoardMovePerformance___ctor(v69, gameObject, SquarePosition, v281, pixelPerSecond, 5, 0);
    v77 = v27->fields._items;
    v78 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v27->fields._version;
    if ( !v77 )
      goto LABEL_157;
    v79 = v27->fields._size;
    if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        v70,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
    }
    else
    {
      v80 = &v77->obj.klass + v79;
      v27->fields._size = v79 + 1;
      v80[4] = (Il2CppClass *)v70;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v80 + 4), (int32_t)v70, v71, v72, v73, v74, v75, v76);
    }
  }
  v81 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0);
  if ( !v81 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v81,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v82 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v81,
    (System_Collections_Generic_IEnumerable_T__o *)v82,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v83 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v81,
    (System_Collections_Generic_IEnumerable_T__o *)v83,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v16, 0) )
  {
    v106 = sub_2213CCC(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v106,
      0);
    if ( v106 )
    {
      *(_QWORD *)(v106 + 32) = v5;
      v113 = (Il2CppObject **)(v106 + 32);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v106 + 32), v5, v107, v108, v109, v110, v111, v112);
      System_Collections_Generic_List_object___AddRange(
        v27,
        (System_Collections_Generic_IEnumerable_T__o *)v81,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v117 = v62 * lengthOnEncount;
      v118 = v61 * lengthOnEncount;
      v119 = v63 * lengthOnEncount;
      v120 = v275.fields.y - v117;
      v121 = v275.fields.x - v118;
      v122 = x + v118;
      v123 = y + v117;
      v124 = z + v119;
      v125 = v275.fields.z - v119;
      if ( !byte_5969AE3 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE3 = 1;
      }
      v126 = v121 - v122;
      v127 = v120 - v123;
      v128 = v125 - v124;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v114, v115);
      v129 = sqrtf((float)(v128 * v128) + (float)((float)(v126 * v126) + (float)(v127 * v127)));
      if ( v129 <= 0.00001 )
      {
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        v133 = UnityEngine_Vector3_TypeInfo->static_fields;
        v132 = v133->zeroVector.fields.x;
        v130 = v133->zeroVector.fields.y;
        v131 = v133->zeroVector.fields.z;
      }
      else
      {
        v130 = v127 / v129;
        v131 = v128 / v129;
        v132 = v126 / v129;
      }
      if ( !byte_5969AE2 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE2 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v114, v115);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._35_GetIconLocalPosition.methodPtr)(
                   this,
                   this->klass->vtable._35_GetIconLocalPosition.method);
      v33 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
      if ( *v113 )
      {
        monitor = (*v113)[1].monitor;
        if ( monitor )
        {
          v136 = monitor[6];
          if ( v136 )
          {
            Instance = *(_QWORD *)(v136 + 80);
            if ( Instance )
            {
              v137 = v134;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0);
              v139 = *(_QWORD *)(v106 + 32);
              *(float *)(v106 + 16) = ZoomSize;
              if ( v139 )
              {
                v140 = *(_QWORD *)(v139 + 24);
                if ( v140 )
                {
                  v141 = *(_QWORD *)(v140 + 48);
                  if ( v141 )
                  {
                    Instance = *(_QWORD *)(v141 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0);
                      v144 = *(_QWORD *)(v106 + 32);
                      *(UnityEngine_Vector2_o *)(v106 + 20) = ScrlPos;
                      if ( v144 )
                      {
                        *(_QWORD *)&v276.fields.hasValue = &v273;
                        v145 = *(WarBoardManager_o **)(v144 + 24);
                        *(_QWORD *)&v273.fields.hasValue = 0;
                        *(_QWORD *)&v273.fields.value.fields.y = 0;
                        *(_QWORD *)&v276.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v146 = (float)(v123 + (float)((float)(v129 * v130) * 0.5)) + v137;
                        v278.fields.x = v122 + (float)((float)(v129 * v132) * 0.5);
                        v278.fields.z = v124 + (float)((float)(v129 * v131) * 0.5);
                        v278.fields.y = v146;
                        System_Nullable_Vector3____ctor(v276, v278, v142);
                        encountCameraSize = this->fields.encountCameraSize;
                        size = 0;
                        System_Nullable_float____ctor(
                          (System_Nullable_float__o)&size,
                          encountCameraSize,
                          (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
                        if ( v145 )
                        {
                          Instance = (__int64)WarBoardManager__GetCameraPerformanceTask(v145, v273, size, 1, 0, 1, 0);
                          v154 = v27->fields._items;
                          v155 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v27->fields._version;
                          if ( v154 )
                          {
                            v156 = v27->fields._size;
                            v157 = Instance;
                            if ( (unsigned int)v156 >= LODWORD(v154->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v27,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v158 = &v154->obj.klass + v156;
                              v27->fields._size = v156 + 1;
                              v158[4] = (Il2CppClass *)v157;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)(v158 + 4),
                                v157,
                                v148,
                                v149,
                                v150,
                                v151,
                                v152,
                                v153);
                            }
                            if ( *v113 )
                            {
                              Instance = (__int64)(*v113)[1].monitor;
                              if ( Instance )
                              {
                                v280.fields.x = v122 + (float)((float)(v129 * v132) * 0.5);
                                v280.fields.y = v146;
                                v280.fields.z = v124 + (float)((float)(v129 * v131) * 0.5);
                                Instance = (__int64)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v280,
                                                      1,
                                                      0);
                                v217 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !*(&WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished + 1) )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, v7, v211);
                                  v217 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                v218 = v217->static_fields;
                                _9__63_1 = v218->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !*(&v217->_2.cctor_finished + 1) )
                                  {
                                    j_il2cpp_runtime_class_init_0(v217, v7, v211);
                                    v218 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  }
                                  v220 = (Il2CppObject *)v218->__9;
                                  _9__63_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v220,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0);
                                  v221 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v221->__9__63_1 = _9__63_1;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)&v221->__9__63_1,
                                    (int32_t)_9__63_1,
                                    v222,
                                    v223,
                                    v224,
                                    v225,
                                    v226,
                                    v227);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)&this->fields.currentActionPointLabel,
                                    (int32_t)_9__63_1,
                                    v211,
                                    v212,
                                    v213,
                                    v214,
                                    v215,
                                    v216);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v230 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v230,
                                    (Il2CppObject *)v106,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0);
                                  v231 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v230, 0);
                                  v44 = v231;
                                  if ( v231 )
                                  {
                                    v45 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v231->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v231;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v231->klass != v45 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0;
                                  }
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)&this->fields.breakPointParent,
                                    (int32_t)v231,
                                    v38,
                                    v39,
                                    v232,
                                    v233,
                                    v234,
                                    v235);
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
                                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v245 = &v242->obj.klass + v244;
                                      v27->fields._size = v244 + 1;
                                      v245[4] = (Il2CppClass *)this;
                                      sub_2213A04(
                                        (MissionNaviTransitionBoardItem_o *)(v245 + 4),
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
                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      v246 = *v113;
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v247 = *(System_Delegate_o **)(Instance + 32);
                                      v248 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v248,
                                        v246,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0);
                                      v249 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v247,
                                                                               (System_Delegate_o *)v248,
                                                                               0);
                                      v44 = v249;
                                      if ( v249 )
                                      {
                                        v45 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v249->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v249;
                                        if ( v249->_1.image != v45 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0;
                                      }
                                      v210 = (MissionNaviTransitionBoardItem_o *)this;
                                      v209 = (int)v44;
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
    sub_2213CDC(Instance, v7);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v85 = x + (float)(v61 * lengthMoveAttack);
  v86 = y + (float)(v62 * lengthMoveAttack);
  v87 = z + (float)(v63 * lengthMoveAttack);
  v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v89 = z;
  v90 = this->fields.pixelPerSecond;
  v91 = v88;
  v92 = (WarBoardMovePerformance_o *)sub_2213CCC(WarBoardMovePerformance_TypeInfo);
  v277.fields.x = v85;
  v277.fields.y = v86;
  v277.fields.z = v87;
  v282.fields.x = x;
  v282.fields.y = y;
  v282.fields.z = v89;
  v93 = (WarBoardTaskBase_o *)v92;
  WarBoardMovePerformance___ctor(v92, v91, v277, v282, v90, 4, 0);
  v96 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(v16, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v94, v95);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v33 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
  if ( !*v271 )
    goto LABEL_157;
  v97 = (WarBoardMessageMaster_o *)Instance;
  Instance = (__int64)(*v271)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0);
  v99 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v99,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v16->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v16, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !v97 )
      goto LABEL_157;
    v101 = v97;
    v102 = id;
    v103 = 11;
    v104 = breakPoint_k__BackingField;
    v105 = 1;
  }
  else
  {
    if ( !v97 )
      goto LABEL_157;
    v101 = v97;
    v102 = id;
    v103 = 9;
    v104 = breakPoint_k__BackingField;
    v105 = 0;
  }
  Instance = (__int64)WarBoardMessageMaster__GetMessageTasks(v101, v102, v103, v104, v105, 0);
  v159 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v81,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v159,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v27,
      v159,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_2213B20(WarBoardTaskBase___TypeInfo, 5);
  if ( !Instance )
    goto LABEL_157;
  v166 = (WarBoardTaskBase_array *)Instance;
  if ( v93 )
  {
    Instance = sub_2213BB4(v93, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !LODWORD(v166->max_length) )
    goto LABEL_158;
  v166->m_Items[0] = v93;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v166->m_Items, (int32_t)v93, v160, v161, v162, v163, v164, v165);
  Instance = (__int64)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v168 = *v271;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v168 )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__CreateAttackEffectTask(v168, v279, 0, 0);
  v177 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_2213BB4(Instance, v166->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( (v166->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_158;
  v166->m_Items[1] = v177;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v166->m_Items[1], (int32_t)v177, v171, v172, v173, v174, v175, v176);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v184 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_2213BB4(Instance, v166->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v166->max_length) <= 2 )
    goto LABEL_158;
  v166->m_Items[2] = v184;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v166->m_Items[2], (int32_t)v184, v178, v179, v180, v181, v182, v183);
  Instance = (__int64)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_9308/*"MasterDamage"*/,
                        v185);
  v192 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_2213BB4(Instance, v166->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( (v166->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_158;
  v166->m_Items[3] = v192;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v166->m_Items[3], (int32_t)v192, v186, v187, v188, v189, v190, v191);
  v193 = (WarBoardOrthostichySchedule_o *)sub_2213CCC(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_45171212(v193, v96, 0);
  if ( v193 )
  {
    Instance = sub_2213BB4(v193, v166->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v270 = sub_2213D00(Instance, v167);
      sub_2213BA0(v270, 0);
    }
  }
  if ( LODWORD(v166->max_length) <= 4 )
LABEL_158:
    sub_2213CE4(Instance);
  v166->m_Items[4] = (WarBoardTaskBase_o *)v193;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v166->m_Items[4], (int32_t)v193, v194, v195, v196, v197, v198, v199);
  v200 = (WarBoardParallelSchedule_o *)sub_2213CCC(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v200, v166, 0);
  v205 = v27->fields._items;
  v206 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v27->fields._version;
  if ( !v205 )
    goto LABEL_157;
  v207 = v27->fields._size;
  if ( (unsigned int)v207 >= LODWORD(v205->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)v200,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v208 = &v205->obj.klass + v207;
  v209 = (int)v200;
  v27->fields._size = v207 + 1;
  v208[4] = (Il2CppClass *)v200;
  v210 = (MissionNaviTransitionBoardItem_o *)(v208 + 4);
LABEL_140:
  sub_2213A04(v210, v209, v38, v39, v201, v202, v203, v204);
LABEL_141:
  if ( v27->fields._size < 1 )
    return;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v27,
                        0,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  v251 = Instance;
  v252 = WarBoardPieceBaseComponent___c_TypeInfo;
  v254 = *(System_Delegate_o **)(v251 + 32);
  this = (WarBoardPieceBaseComponent_o *)(v251 + 32);
  v253 = v254;
  if ( !*(&WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, v7, v250);
    v252 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  v255 = v252->static_fields;
  _9__63_4 = v255->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !*(&v252->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v252, v7, v250);
      v255 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v257 = (Il2CppObject *)v255->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v257, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0);
    v258 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v258->__9__63_4 = _9__63_4;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v258->__9__63_4,
      (int32_t)_9__63_4,
      v259,
      v260,
      v261,
      v262,
      v263,
      v264);
  }
  v265 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v253, (System_Delegate_o *)_9__63_4, 0);
  v44 = v265;
  if ( !v265 )
    goto LABEL_153;
  v45 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v265->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v265, v265->_1.image != v45) )
  {
LABEL_152:
    sub_221405C(v44, v45, v38, v39);
LABEL_153:
    this->klass = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)this, (int32_t)v44, v38, v39, v266, v267, v268, v269);
  Instance = (__int64)*v33;
  if ( !*v33 )
    goto LABEL_157;
  WarBoardManager__AddTask_44971780(
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
  __int64 v10; // x2
  float v11; // s14
  float v12; // s15
  float v13; // s8
  float v14; // s11
  float x; // s12
  float y; // s13
  float z; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s8
  __int64 v20; // x1
  __int64 v21; // x2
  WarBoardControlUiDataComponent_c *v22; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v24; // 0:kr14_12.12
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF48 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardControlUiDataComponent_TypeInfo);
    byte_596DF48 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_44788124(Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v9 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  v24 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0);
  if ( !byte_5969AE2 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE2 = 1;
  }
  v11 = v24.fields.x - SquarePosition.fields.x;
  v12 = v24.fields.y - SquarePosition.fields.y;
  v13 = v24.fields.z - SquarePosition.fields.z;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v10);
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  v14 = sqrtf((float)(v13 * v13) + (float)((float)(v11 * v11) + (float)(v12 * v12)));
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v10);
  if ( v14 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      Instance = (WarBoardData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v11 / v14;
    y = v12 / v14;
    z = v13 / v14;
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
    sub_2213CDC(Instance, v6);
  }
  v25.fields.x = SquarePosition.fields.x + (float)(x * (float)(v14 - lengthOnAttack));
  v25.fields.y = SquarePosition.fields.y + (float)(y * (float)(v14 - lengthOnAttack));
  v25.fields.z = SquarePosition.fields.z + (float)(z * (float)(v14 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v25, 0);
  v22 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v20, v21);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v22);
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
  WarBoardPieceBaseComponent_o *v14; // x21
  Il2CppObject *Instance; // x25
  const MethodInfo_45E9150 *v16; // x2
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v26; // x1
  Il2CppClass **v27; // x0
  WarBoardTaskBase_array *v28; // x26
  Il2CppObject *v29; // x27
  const MethodInfo_45E9150 *v30; // x2
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  WarBoardPieceBaseComponent_o *v37; // x24
  __int64 v38; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t breakPoint_k__BackingField; // w9
  signed __int64 v41; // x24
  signed __int64 v42; // x23
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  __int64 v44; // x0
  System_Nullable_Vector3__o v45; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v46; // 0:x0.16
  System_Nullable_Vector3__o v47; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_596DF4F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardPieceBaseComponent_o *)sub_2213A60(&WarBoardTaskBase___TypeInfo);
    byte_596DF4F = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_37;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v46.fields.hasValue = &v45;
          *(_QWORD *)&v45.fields.hasValue = 0;
          *(_QWORD *)&v45.fields.value.fields.y = 0;
          *(_QWORD *)&v46.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v46, localPosition, v16);
          if ( Instance )
          {
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v45,
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
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v27[4] = (Il2CppClass *)v26;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v26, v17, v18, v19, v20, v21, v22);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v28 = (WarBoardTaskBase_array *)sub_2213B20(WarBoardTaskBase___TypeInfo, 1);
        v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          v49 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v47.fields.hasValue = &v45;
          v45 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v47.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v47, v49, v30);
          if ( v29 )
          {
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v29,
                                                     v45,
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
                this = (WarBoardPieceBaseComponent_o *)sub_2213BB4(this, v28->obj.klass->_1.element_class);
                if ( !this )
                {
                  v44 = sub_2213D00(0, v38);
                  sub_2213BA0(v44, 0);
                }
              }
              if ( !LODWORD(v28->max_length) )
LABEL_39:
                sub_2213CE4(this);
              v28->m_Items[0] = (WarBoardTaskBase_o *)v37;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)v28->m_Items, (int32_t)v37, v31, v32, v33, v34, v35, v36);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v28, 0);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_37:
      sub_2213CDC(this, *(_QWORD *)&oldBreakPoint);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_37;
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v41 = 0;
  if ( dummyPoint >= 0 )
    breakPoint_k__BackingField = dummyPoint;
  v42 = breakPoint_k__BackingField;
  while ( v41 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( v41 >= oldBreakPoint || v41 < v42 )
    {
      if ( !breakPoints )
        goto LABEL_37;
      if ( v41 >= (unsigned __int64)LODWORD(breakPoints->max_length) )
        goto LABEL_39;
      this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v41];
      if ( !this )
        goto LABEL_37;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)this,
        v41 < v42,
        0,
        (const MethodInfo *)taskList);
    }
    else
    {
      if ( !breakPoints )
        goto LABEL_37;
      if ( v41 >= (unsigned __int64)LODWORD(breakPoints->max_length) )
        goto LABEL_39;
      this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v41];
      if ( !this )
        goto LABEL_37;
      WarBoardBreakPointComponent__OnBreak(
        (WarBoardBreakPointComponent_o *)this,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)taskList,
        startCallback,
        (const MethodInfo *)taskList);
      startCallback = 0;
    }
    pieceData = v14->fields.pieceData;
    ++v41;
    if ( !pieceData )
      goto LABEL_37;
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
    sub_2213CDC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t PieceMaxDispPriotiry; // w8
  const MethodInfo *v7; // x2

  if ( (byte_596DF44 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596DF44 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_2213CDC(Instance, v5);
  PieceMaxDispPriotiry = WarBoardData__GetPieceMaxDispPriotiry(Instance, 0);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * (dispPriotiry - PieceMaxDispPriotiry), v7);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  WarBoardPieceData_o **v15; // x20
  WarBoardPieceData_o *Piece_44788124; // x0
  WarBoardPieceData_o **v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x8
  WarBoardSquareData_o *Square; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x25
  System_Collections_Generic_List_object__o *v33; // x24
  __int64 v34; // x26
  WarBoardTaskBase_TaskCallback_o *v35; // x27
  System_Delegate_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Delegate_o *v43; // x8
  WarBoardTaskBase_TaskCallback_c *v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v53; // x28
  __int64 v54; // x8
  struct WarBoardPieceData_o *v55; // x9
  UnityEngine_GameObject_o *v56; // x27
  float pixelPerSecond; // s13
  WarBoardMovePerformance_o *v58; // x28
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  WarBoardTaskBase_array *v65; // x26
  __int64 v66; // x1
  UnityEngine_GameObject_o *v67; // x27
  struct WarBoardPieceData_o *v68; // x8
  float v69; // s13
  WarBoardMovePerformance_o *v70; // x28
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_Delegate_o *v83; // x27
  WarBoardTaskBase_TaskCallback_o *v84; // x28
  System_Delegate_o *v85; // x0
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  float v90; // s13
  System_Delegate_o **v91; // x27
  System_Delegate_o *v92; // x28
  System_Delegate_o *v93; // x0
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  struct System_Object_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  Il2CppClass **v107; // x0
  struct WarBoardPieceData_o *v108; // x8
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x0
  System_Collections_Generic_List_object__o *v129; // x22
  System_Int32_array *PieceEventVals; // x0
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  System_Int32_array *v137; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v139; // x0
  WarBoardManager_o *v140; // x20
  WarBoardTaskBase_array *v141; // x21
  __int64 v142; // x22
  WarBoardTaskBase_TaskCallback_o *v143; // x23
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  __int64 v156; // x0
  int v157; // [xsp+Ch] [xbp-94h]
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v159; // 0:kr14_12.12
  UnityEngine_Vector3_o v160; // 0:kr20_12.12
  UnityEngine_Vector3_o v161; // 0:kr34_12.12
  UnityEngine_Vector3_o v162; // 0:kr40_12.12
  UnityEngine_Vector3_o v163; // 0:kr54_12.12

  LODWORD(v4) = squareIndex;
  if ( (byte_596DF45 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__);
    sub_2213A60(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
    sub_2213A60(&WarBoardCallbackTask_TypeInfo);
    sub_2213A60(&WarBoardMovePerformance_TypeInfo);
    sub_2213A60(&WarBoardParallelSchedule_TypeInfo);
    sub_2213A60(&WarBoardTaskBase___TypeInfo);
    byte_596DF45 = 1;
  }
  v6 = sub_2213CCC(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v6, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v6 )
    goto LABEL_86;
  *(_QWORD *)(v6 + 48) = Instance;
  v15 = (WarBoardPieceData_o **)(v6 + 48);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 48), (int32_t)Instance, v9, v10, v11, v12, v13, v14);
  if ( !*(_QWORD *)(v6 + 48) )
    goto LABEL_86;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v6 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_86;
  Piece_44788124 = WarBoardData__GetPiece_44788124((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 40) = Piece_44788124;
  v17 = (WarBoardPieceData_o **)(v6 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)Piece_44788124, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v6 + 48);
  if ( !v24 )
    goto LABEL_86;
  Instance = *(WarBoardPieceData_o **)(v24 + 440);
  if ( !Instance )
    goto LABEL_86;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 16) = Square;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)Square, v26, v27, v28, v29, v30, v31);
  v32 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0, 0);
  if ( !v32 )
    goto LABEL_86;
  v33 = (System_Collections_Generic_List_object__o *)(v32 + 32);
  v34 = *(_QWORD *)(v32 + 32);
  v35 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0);
  v36 = System_Delegate__Combine((System_Delegate_o *)v34, (System_Delegate_o *)v35, 0);
  v43 = v36;
  if ( v36 )
  {
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_47;
    v33->klass = (System_Collections_Generic_List_object__c *)v36;
    if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != v44 )
      goto LABEL_47;
  }
  else
  {
    v33->klass = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  Instance = (WarBoardPieceData_o *)sub_2213B20(int___TypeInfo, 2);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_86;
  v8 = Instance;
  if ( !Instance )
    goto LABEL_86;
  groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
  if ( !groupId_k__BackingField
    || (Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField,
        groupId_k__BackingField == 1) )
  {
LABEL_87:
    sub_2213CE4(Instance);
  }
  *(_QWORD *)(v6 + 24) = Instance;
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)Instance, v45, v46, v47, v48, v49, v50);
  v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v53 = *(_QWORD *)(v6 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v54 = *(_QWORD *)(v6 + 48);
  v55 = this->fields.pieceData;
  v56 = (UnityEngine_GameObject_o *)Instance;
  if ( v53 )
  {
    if ( !v55 )
      goto LABEL_86;
    if ( !v54 )
      goto LABEL_86;
    SquarePosition = WarBoardManager__GetSquarePosition(
                       (WarBoardManager_o *)*(_QWORD *)(v6 + 48),
                       v55->fields._nowSquareIndex_k__BackingField,
                       0);
    Instance = *v15;
    if ( !*v15 )
      goto LABEL_86;
    v159 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v58 = (WarBoardMovePerformance_o *)sub_2213CCC(WarBoardMovePerformance_TypeInfo);
    WarBoardMovePerformance___ctor(v58, v56, SquarePosition, v159, pixelPerSecond, 0, 0);
    Instance = (WarBoardPieceData_o *)sub_2213B20(WarBoardTaskBase___TypeInfo, 3);
    if ( !Instance )
      goto LABEL_86;
    v65 = (WarBoardTaskBase_array *)Instance;
    if ( v58 )
    {
      Instance = (WarBoardPieceData_o *)sub_2213BB4(v58, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_88;
    }
    if ( !LODWORD(v65->max_length) )
      goto LABEL_87;
    v65->m_Items[0] = (WarBoardTaskBase_o *)v58;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v65->m_Items, (int32_t)v58, v59, v60, v61, v62, v63, v64);
    Instance = *v17;
    if ( !*v17
      || (Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0), !*v15)
      || (v67 = (UnityEngine_GameObject_o *)Instance,
          v160 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v15, (int32_t)v4, 0),
          (v68 = this->fields.pieceData) == 0)
      || (Instance = *v15) == 0 )
    {
LABEL_86:
      sub_2213CDC(Instance, v8);
    }
    v161 = WarBoardManager__GetSquarePosition(
             (WarBoardManager_o *)Instance,
             v68->fields._nowSquareIndex_k__BackingField,
             0);
    v69 = this->fields.pixelPerSecond;
    v70 = (WarBoardMovePerformance_o *)sub_2213CCC(WarBoardMovePerformance_TypeInfo);
    WarBoardMovePerformance___ctor(v70, v67, v160, v161, v69, 0, 0);
    if ( v70 )
    {
      Instance = (WarBoardPieceData_o *)sub_2213BB4(v70, v65->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_88;
    }
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (v65->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_87;
    v65->m_Items[1] = (WarBoardTaskBase_o *)v70;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->m_Items[1], (int32_t)v70, v71, v72, v73, v74, v75, v76);
    Instance = (WarBoardPieceData_o *)sub_2213BB4(v32, v65->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_88:
      v156 = sub_2213D00(Instance, v66);
      sub_2213BA0(v156, 0);
    }
    if ( LODWORD(v65->max_length) <= 2 )
      goto LABEL_87;
    v65->m_Items[2] = (WarBoardTaskBase_o *)v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->m_Items[2], v32, v77, v78, v79, v80, v81, v82);
    v32 = sub_2213CCC(WarBoardParallelSchedule_TypeInfo);
    WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v32, v65, 0);
    if ( !v32 )
      goto LABEL_86;
    v34 = v32 + 40;
    v83 = *(System_Delegate_o **)(v32 + 40);
    v84 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v84,
      (Il2CppObject *)v6,
      Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
      0);
    v85 = System_Delegate__Combine(v83, (System_Delegate_o *)v84, 0);
    v43 = v85;
    if ( !v85 )
      goto LABEL_48;
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v85->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)v34 = v85;
      if ( (WarBoardTaskBase_TaskCallback_c *)v85->klass == v44 )
      {
LABEL_49:
        sub_2213A04((MissionNaviTransitionBoardItem_o *)v34, (int32_t)v43, v37, v38, v86, v87, v88, v89);
        if ( !v33 )
          goto LABEL_86;
        items = v33->fields._items;
        v105 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v33->fields._version;
        if ( !items )
          goto LABEL_86;
        size = v33->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)v32,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
        }
        else
        {
          v107 = &items->obj.klass + size;
          v33->fields._size = size + 1;
          v107[4] = (Il2CppClass *)v32;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v107 + 4), v32, v98, v99, v100, v101, v102, v103);
        }
        v108 = this->fields.pieceData;
        if ( !v108 )
          goto LABEL_86;
        Instance = *v17;
        if ( !*v17 )
          goto LABEL_86;
        WarBoardPieceData__SetSquareIndex(Instance, v108->fields._nowSquareIndex_k__BackingField, 0);
        goto LABEL_67;
      }
    }
LABEL_47:
    sub_221405C(v43, v44, v37, v38);
LABEL_48:
    *(_QWORD *)v34 = 0;
    goto LABEL_49;
  }
  if ( !v55 )
    goto LABEL_86;
  if ( !v54 )
    goto LABEL_86;
  v162 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)*(_QWORD *)(v6 + 48),
           v55->fields._nowSquareIndex_k__BackingField,
           0);
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_86;
  v157 = (int)v4;
  v163 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0);
  v90 = this->fields.pixelPerSecond;
  v34 = sub_2213CCC(WarBoardMovePerformance_TypeInfo);
  WarBoardMovePerformance___ctor((WarBoardMovePerformance_o *)v34, v56, v162, v163, v90, 0, 0);
  if ( !v34 )
    goto LABEL_86;
  v91 = (System_Delegate_o **)(v34 + 40);
  v92 = *(System_Delegate_o **)(v34 + 40);
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0);
  v93 = System_Delegate__Combine(v92, (System_Delegate_o *)v3, 0);
  v43 = v93;
  if ( v93 )
  {
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v93->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_47;
    *v91 = v93;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = v157;
    if ( (WarBoardTaskBase_TaskCallback_c *)v93->klass != v44 )
      goto LABEL_47;
  }
  else
  {
    *v91 = 0;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = v157;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 40), (int32_t)v93, v37, v38, v94, v95, v96, v97);
  if ( !v33 )
    goto LABEL_86;
  v115 = v33->fields._items;
  v116 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v115 )
    goto LABEL_86;
  v117 = v33->fields._size;
  if ( (unsigned int)v117 >= LODWORD(v115->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v34,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
  }
  else
  {
    v118 = &v115->obj.klass + v117;
    v33->fields._size = v117 + 1;
    v118[4] = (Il2CppClass *)v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v118 + 4), v34, v109, v110, v111, v112, v113, v114);
  }
  v125 = v33->fields._items;
  v126 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v125 )
    goto LABEL_86;
  v127 = v33->fields._size;
  if ( (unsigned int)v127 >= LODWORD(v125->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v32,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
  }
  else
  {
    v128 = &v125->obj.klass + v127;
    v33->fields._size = v127 + 1;
    v128[4] = (Il2CppClass *)v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v128 + 4), v32, v119, v120, v121, v122, v123, v124);
  }
LABEL_67:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_86;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0);
  v129 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v129,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_86;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0);
  *(_QWORD *)(v6 + 32) = PieceEventVals;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v6 + 32),
    (int32_t)PieceEventVals,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v6 + 32),
                                      0);
  if ( !v129 )
    goto LABEL_86;
  System_Collections_Generic_List_object___AddRange(
    v129,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v17 )
  {
    v137 = WarBoardPieceData__CreatePieceEventVals(*v17, 0);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v137, 0);
    System_Collections_Generic_List_object___AddRange(
      v129,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v139 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v129,
    (System_Collections_Generic_IEnumerable_T__o *)v139,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v129,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v15;
    if ( !*v15 )
      goto LABEL_86;
    WarBoardManager__AddTask_44971780(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v129,
      0);
  }
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_86;
  WarBoardManager__AddTask_44971780(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v33,
    0);
  v140 = *(WarBoardManager_o **)(v6 + 48);
  v141 = (WarBoardTaskBase_array *)sub_2213B20(WarBoardTaskBase___TypeInfo, 1);
  v142 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v142, 0, 0);
  v143 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(v3->klass);
  WarBoardTaskBase_TaskCallback___ctor(
    v143,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0);
  if ( !v142 )
    goto LABEL_86;
  *(_QWORD *)(v142 + 32) = v143;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v142 + 32), (int32_t)v143, v144, v145, v146, v147, v148, v149);
  if ( !v141 )
    goto LABEL_86;
  Instance = (WarBoardPieceData_o *)sub_2213BB4(v142, v141->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_88;
  if ( !LODWORD(v141->max_length) )
    goto LABEL_87;
  v141->m_Items[0] = (WarBoardTaskBase_o *)v142;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v141->m_Items, v142, v150, v151, v152, v153, v154, v155);
  if ( !v140 )
    goto LABEL_86;
  WarBoardManager__AddTask(v140, 0, v141, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
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
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_596DF43 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596DF43 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_2213CDC(Instance, v4);
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

  if ( (byte_596DF51 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19694/*"ef_dm_base"*/);
    byte_596DF51 = 1;
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x24
  System_Delegate_o **v19; // x25
  System_Delegate_o *v20; // x26
  WarBoardTaskBase_TaskCallback_o *v21; // x27
  System_Delegate_o *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w8
  WarBoardTaskBase_TaskCallback_c *v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  float v43; // s8
  float v44; // s9
  float v45; // s12
  float v46; // s11
  float x; // s1
  float y; // s2
  float z; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v51; // s0
  float v52; // s11
  float v53; // s12
  float v54; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s8
  UnityEngine_GameObject_o *v57; // x24
  WarBoardMovePerformance_o *v58; // x0
  Il2CppObject *v59; // x23
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  float lengthMoveAttack; // s0
  float v71; // s1
  float v72; // s2
  float v73; // s0
  float v74; // s8
  float v75; // s9
  float v76; // s10
  UnityEngine_GameObject_o *v77; // x0
  float v78; // s14
  UnityEngine_GameObject_o *v79; // x22
  WarBoardMovePerformance_o *v80; // x0
  WarBoardTaskBase_o *v81; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v82; // x22
  System_Collections_Generic_List_object__o *v83; // x23
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  WarBoardTaskBase_array *v90; // x23
  __int64 v91; // x1
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  WarBoardData_o *v98; // x21
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  WarBoardData_o *v105; // x21
  WarBoardOrthostichySchedule_o *v106; // x21
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  WarBoardParallelSchedule_o *v113; // x21
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x0
  __int64 v124; // x0
  float v125; // [xsp+8h] [xbp-A8h]
  float v126; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v128; // 0:kr14_12.12
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v132; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_596DF4A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__);
    sub_2213A60(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
    sub_2213A60(&WarBoardCallbackTask_TypeInfo);
    sub_2213A60(&WarBoardMovePerformance_TypeInfo);
    sub_2213A60(&WarBoardOrthostichySchedule_TypeInfo);
    sub_2213A60(&WarBoardParallelSchedule_TypeInfo);
    sub_2213A60(&WarBoardTaskBase___TypeInfo);
    byte_596DF4A = 1;
  }
  v5 = sub_2213CCC(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v5, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v128 = WarBoardManager__GetSquarePosition(v8, squareIndex, 0);
  Instance = v8->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Instance, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v18 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v18, 0, 0);
  if ( !v18 )
    goto LABEL_64;
  v19 = (System_Delegate_o **)(v18 + 32);
  v20 = *(System_Delegate_o **)(v18 + 32);
  v21 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0);
  v22 = System_Delegate__Combine(v20, (System_Delegate_o *)v21, 0);
  v29 = (int)v22;
  if ( v22 )
  {
    v30 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v22->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v19 = v22;
      if ( (WarBoardTaskBase_TaskCallback_c *)v22->klass == v30 )
        goto LABEL_14;
    }
    sub_221405C(v22, v30, v23, v24);
  }
  *v19 = 0;
LABEL_14:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 32), v29, v23, v24, v25, v26, v27, v28);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), v18, v31, v32, v33, v34, v35, v36);
  }
  if ( !byte_5969AE2 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE2 = 1;
  }
  v43 = v128.fields.x - SquarePosition.fields.x;
  v44 = v128.fields.y - SquarePosition.fields.y;
  v45 = v128.fields.z - SquarePosition.fields.z;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v41, v42);
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  v46 = sqrtf((float)(v45 * v45) + (float)((float)(v43 * v43) + (float)(v44 * v44)));
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v41, v42);
  if ( v46 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v43 / v46;
    y = v44 / v46;
    z = v45 / v46;
  }
  v51 = v46 - this->fields.lengthOnAttack;
  if ( v51 <= 0.0 )
  {
    v52 = SquarePosition.fields.x;
    v53 = SquarePosition.fields.y;
    v54 = SquarePosition.fields.z;
  }
  else
  {
    v125 = y;
    v126 = x;
    v52 = SquarePosition.fields.x + (float)(x * v51);
    v53 = SquarePosition.fields.y + (float)(y * v51);
    v54 = SquarePosition.fields.z + (float)(z * v51);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v57 = gameObject;
    v58 = (WarBoardMovePerformance_o *)sub_2213CCC(WarBoardMovePerformance_TypeInfo);
    v131.fields.x = v52;
    v131.fields.y = v53;
    v131.fields.z = v54;
    v59 = (Il2CppObject *)v58;
    WarBoardMovePerformance___ctor(v58, v57, SquarePosition, v131, pixelPerSecond, 5, 0);
    v66 = v17->fields._items;
    v67 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v17->fields._version;
    if ( !v66 )
      goto LABEL_64;
    v68 = v17->fields._size;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        v59,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v17->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v59;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 4), (int32_t)v59, v60, v61, v62, v63, v64, v65);
    }
    y = v125;
    x = v126;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v71 = x * lengthMoveAttack;
  v72 = y * lengthMoveAttack;
  v73 = z * lengthMoveAttack;
  v74 = v52 + v71;
  v75 = v53 + v72;
  v76 = v54 + v73;
  v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v78 = this->fields.pixelPerSecond;
  v79 = v77;
  v80 = (WarBoardMovePerformance_o *)sub_2213CCC(WarBoardMovePerformance_TypeInfo);
  v129.fields.x = v74;
  v129.fields.y = v75;
  v129.fields.z = v76;
  v132.fields.x = v52;
  v132.fields.y = v53;
  v132.fields.z = v54;
  v81 = (WarBoardTaskBase_o *)v80;
  WarBoardMovePerformance___ctor(v80, v79, v129, v132, v78, 4, 0);
  if ( !v10 )
    goto LABEL_64;
  v82 = WarBoardWallData__DecrementBreakPointPerformance(v10, 1, 0);
  v83 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0, 0), !v83)
    || (System_Collections_Generic_List_object___AddRange(
          v83,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v17,
          (System_Collections_Generic_IEnumerable_T__o *)v83,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_2213B20(WarBoardTaskBase___TypeInfo, 4)) == 0) )
  {
LABEL_64:
    sub_2213CDC(Instance, v7);
  }
  v90 = (WarBoardTaskBase_array *)Instance;
  if ( v81 )
  {
    Instance = (WarBoardData_o *)sub_2213BB4(v81, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !LODWORD(v90->max_length) )
    goto LABEL_65;
  v90->m_Items[0] = v81;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v90->m_Items, (int32_t)v81, v84, v85, v86, v87, v88, v89);
  Instance = (WarBoardData_o *)v10->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v8, IconPosition, 0, 0);
  v98 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_2213BB4(Instance, v90->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( (v90->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_65;
  v90->m_Items[1] = (WarBoardTaskBase_o *)v98;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v90->m_Items[1], (int32_t)v98, v92, v93, v94, v95, v96, v97);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v105 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_2213BB4(Instance, v90->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v90->max_length) <= 2 )
    goto LABEL_65;
  v90->m_Items[2] = (WarBoardTaskBase_o *)v105;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v90->m_Items[2], (int32_t)v105, v99, v100, v101, v102, v103, v104);
  v106 = (WarBoardOrthostichySchedule_o *)sub_2213CCC(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_45171212(v106, v82, 0);
  if ( v106 )
  {
    Instance = (WarBoardData_o *)sub_2213BB4(v106, v90->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v124 = sub_2213D00(Instance, v91);
      sub_2213BA0(v124, 0);
    }
  }
  if ( (v90->max_length & 0xFFFFFFFC) == 0 )
LABEL_65:
    sub_2213CE4(Instance);
  v90->m_Items[3] = (WarBoardTaskBase_o *)v106;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v90->m_Items[3], (int32_t)v106, v107, v108, v109, v110, v111, v112);
  v113 = (WarBoardParallelSchedule_o *)sub_2213CCC(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v113, v90, 0);
  v120 = v17->fields._items;
  v121 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v17->fields._version;
  if ( !v120 )
    goto LABEL_64;
  v122 = v17->fields._size;
  if ( (unsigned int)v122 >= LODWORD(v120->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v113,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
  }
  else
  {
    v123 = &v120->obj.klass + v122;
    v17->fields._size = v122 + 1;
    v123[4] = (Il2CppClass *)v113;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v123 + 4), (int32_t)v113, v114, v115, v116, v117, v118, v119);
  }
  if ( v17->fields._size >= 1 )
    WarBoardManager__AddTask_44971780(v8, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v17, 0);
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
    sub_2213CDC(simpleAnimation, animationName);
  SimpleAnimation__Play_78552168(simpleAnimation, animationName, 0);
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
    sub_2213CDC(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= LODWORD(breakPoints->max_length) )
        sub_2213CE4(this);
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
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v8; // x28
  __int64 v9; // x2
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v11; // x22
  unsigned __int64 v12; // x29
  UnityEngine_Object_o *v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v23; // x1
  Il2CppClass **v24; // x0
  struct UICommonButton_o *button; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596DF3A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF3A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length_low = LODWORD(parents->max_length);
    if ( (int)max_length_low >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length_low )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v11 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length_low = LODWORD(parents->max_length);
        if ( (int)++v8 >= (int)max_length_low )
          goto LABEL_24;
      }
      v12 = 0;
      while ( v12 < (unsigned int)klass )
      {
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11[1].monitor + v12);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v9);
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
                                                                     (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v13,
                                                                       0);
            items = v4->fields._items;
            v21 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v23 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v23;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
            }
          }
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_2213CE4(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_2213CDC(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_596DF3C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF3C = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( enable )
    {
      if ( v7 )
      {
        v8 = 1;
LABEL_12:
        UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(v7, v6);
    }
    if ( !v7 )
      goto LABEL_14;
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_12;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *listEffectData; // x20
  System_Predicate_object__o *v17; // x21
  __int64 v18; // x2
  Il2CppObject *v19; // x20
  _QWORD *monitor; // x22
  __int64 v21; // x8
  unsigned __int64 v22; // x23
  UnityEngine_Object_o *v23; // x21

  if ( (byte_596DF50 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__);
    sub_2213A60(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
    byte_596DF50 = 1;
  }
  v7 = sub_2213CCC(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = effectKey;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)effectKey, v10, v11, v12, v13, v14, v15);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
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
         (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v19 = v8;
  if ( !v8 )
    return v19 != 0;
  monitor = v8[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_2213CDC(v8, v9);
  v21 = monitor[3];
  if ( (int)v21 >= 1 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= (unsigned int)v21 )
        sub_2213CE4(v8);
      v23 = (UnityEngine_Object_o *)monitor[v22 + 4];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v18);
      v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(v23, 0, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, isDisp, 0);
      }
      LODWORD(v21) = *((_DWORD *)monitor + 6);
      ++v22;
    }
    while ( (__int64)v22 < (int)v21 );
  }
  return v19 != 0;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_596DF3B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF3B = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardPieceBaseComponent__ShowActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  struct WarBoardPieceData_o *v4; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20
  UnityEngine_GameObject_o *v8; // x20
  bool activeSelf; // w0
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF3E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF3E = 1;
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
    sub_2213CDC(pieceData, method);
  if ( WarBoardCost__get_HasCost((WarBoardCost_o *)pieceData, 0) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0, 0) )
    {
      pieceData = (WarBoardPieceData_o *)this->fields.currentPieceActionPointRoot;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0);
        pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
        if ( pieceData )
        {
          v8 = this->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pieceData, 0);
          v10 = 112;
          if ( activeSelf )
          {
            v10 = 124;
            v11 = 120;
          }
          else
          {
            v11 = 108;
          }
          if ( activeSelf )
            v12 = 116;
          else
            v12 = 104;
          v13.fields.y = *(float *)((char *)&this->klass + v11);
          v13.fields.z = *(float *)((char *)&this->klass + v10);
          v13.fields.x = *(float *)((char *)&this->klass + v12);
          GameObjectExtensions__SetLocalPosition(v8, v13, 0);
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
    sub_2213CDC(0, method);
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
      SimpleAnimation__Stop_78549736(simpleAnimation, animationName, 0);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0);
        return;
      }
    }
LABEL_7:
    sub_2213CDC(simpleAnimation, animationName);
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

  pieceData = this->fields.pieceData;
  currentActionCount_k__BackingField = 0;
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
    sub_2213CDC(pieceData, method);
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
  System_Collections_Generic_HashSet_object__o *v4; // x22
  WarBoardPieceData_o *pieceData; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_HashSet_object__o **v13; // x21
  System_Collections_Generic_HashSet_object__o *v14; // x23
  __int64 v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
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
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  Il2CppObject *v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  struct UICommonButton_o *v55; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_HashSet_Enumerator_T__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v64; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596DF41 & 1) == 0 )
  {
    sub_2213A60(&System_Action_UIWidget__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_UIWidget___);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_GameObject___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__);
    sub_2213A60(&System_Collections_Generic_HashSet_UIWidget__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor___91651512);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__);
    sub_2213A60(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__);
    sub_2213A60(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
    byte_596DF41 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v3 = sub_2213CCC(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v3, 0);
  v4 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v3 )
    goto LABEL_40;
  *(_QWORD *)(v3 + 24) = v4;
  v13 = (System_Collections_Generic_HashSet_object__o **)(v3 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  v14 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v14,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v3 + 16) = v14;
  v15 = v3 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v14, v16, v17, v18, v19, v20, v21);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v23 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v24 = (System_Action_object__o *)sub_2213CCC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v24,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v24,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_40;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, 0);
    if ( v23 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v25 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v26 = (System_Action_object__o *)sub_2213CCC(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v26,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0);
      BasicHelper__ForEach_object_(
        v25,
        (System_Action_T__o *)v26,
        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v28 = (System_Action_object__o *)sub_2213CCC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v28,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v28,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v23 & 1) != 0 )
    {
      v29 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v30 = (System_Action_object__o *)sub_2213CCC(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v30,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0);
      BasicHelper__ForEach_object_(
        v29,
        (System_Action_T__o *)v30,
        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  if ( *(int *)(*(_QWORD *)v15 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_40;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v33,
    tweenTargets,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_GameObject___ctor___91651512);
  pieceData = *(WarBoardPieceData_o **)v15;
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v63,
    (System_Collections_Generic_HashSet_object__o *)pieceData,
    (const MethodInfo_42BAE44 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v64 = v63;
  v63.fields._set = 0;
  *(_QWORD *)&v63.fields._index = &v64;
  while ( 1 )
  {
    v34 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_40FB544 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v34 )
      break;
    current = v64.fields._current;
    if ( !v64.fields._current )
      sub_2213CDC(v34, v35);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v64.fields._current,
                                   0);
    if ( !removeTweenTargetObjects )
      sub_2213CDC(gameObject, gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v41 = (Il2CppObject *)v40;
      if ( !v33 )
        sub_2213CDC(v40, v40);
      goto LABEL_22;
    }
    if ( !*v13 )
      sub_2213CDC(0, v39);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v13,
           current,
           (const MethodInfo_42BA9D0 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v65.fields.r = 0.5;
      v65.fields.g = 0.5;
      v65.fields.b = 0.5;
      v65.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v65, 0);
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v41 = (Il2CppObject *)v42;
      if ( !v33 )
        sub_2213CDC(v42, v42);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v33,
        v41,
        (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_GameObject__Remove__);
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
      if ( !v33
        || (items = v33->fields._items,
            v52 = Method_System_Collections_Generic_List_GameObject__Add__,
            ++v33->fields._version,
            !items) )
      {
        sub_2213CDC(v43, v43);
      }
      size = v33->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v43,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v50, v44, v45, v46, v47, v48, v49);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_40FB540 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v55 = this->fields.button;
  v56 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_387C6A4 *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_object_(
                                       v56,
                                       (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v55 )
LABEL_40:
    sub_2213CDC(pieceData, v6);
  v55->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v55->fields.tweenTargets,
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
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v6; // x1
  WarBoardPieceStatusLabel_o *v7; // x0

  if ( (byte_596DF40 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF40 = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0, 0) )
  {
    v7 = this->fields.pieceStatusLabelComponent;
    if ( !v7 )
      sub_2213CDC(0, v6);
    WarBoardPieceStatusLabel__SetupLabel(v7, this->fields.pieceData, 0);
  }
}


void WarBoardPieceBaseComponent__UpdateWidgetDepth(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t PieceDispPriority; // w8
  const MethodInfo *v7; // x2

  if ( (byte_596DF54 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596DF54 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_2213CDC(Instance, v5);
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
  WarBoardPieceBaseComponent_o *v4; // x20
  struct UIWidget_array *uiWidgets; // x8
  System_Object_array *ComponentsInChildren_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int max_length; // w21
  unsigned int v19; // w22
  __int64 v20; // x23
  struct UIWidget_array *v21; // x8
  __int64 v22; // x9
  il2cpp_array_size_t v23; // x8
  unsigned __int64 v24; // x22
  __int64 v25; // x24
  struct UIWidget_array *v26; // x8
  UnityEngine_Object_o *v27; // x21
  struct UIWidget_array *v28; // x8

  v4 = this;
  if ( (byte_596DF4D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
    this = (WarBoardPieceBaseComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF4D = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.uiWidgets,
      (int32_t)ComponentsInChildren_object,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    uiWidgets = v4->fields.uiWidgets;
    if ( !uiWidgets )
      goto LABEL_27;
    max_length = uiWidgets->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0;
      v20 = 32;
      do
      {
        v21 = v4->fields.uiWidgets;
        if ( !v21 )
          goto LABEL_27;
        if ( v19 >= LODWORD(v21->max_length) )
LABEL_28:
          sub_2213CE4(this);
        v22 = *(__int64 *)((char *)&v21->obj.klass + v20);
        if ( !v22 )
          goto LABEL_27;
        if ( *(int *)(v22 + 176) >= 1001 )
        {
          *(Il2CppClass **)((char *)&v21->obj.klass + v20) = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v21 + v20),
            0,
            (System_String_o *)method,
            v13,
            v14,
            v15,
            v16,
            v17);
        }
        ++v19;
        v20 += 8;
      }
      while ( max_length != v19 );
      uiWidgets = v4->fields.uiWidgets;
      if ( !uiWidgets )
LABEL_27:
        sub_2213CDC(this, *(_QWORD *)&value);
    }
  }
  v23 = uiWidgets->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0;
    v25 = (unsigned int)v23;
    while ( 1 )
    {
      v26 = v4->fields.uiWidgets;
      if ( !v26 )
        goto LABEL_27;
      if ( v24 >= LODWORD(v26->max_length) )
        goto LABEL_28;
      v27 = (UnityEngine_Object_o *)v26->m_Items[v24];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value, method);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = v4->fields.uiWidgets;
        if ( !v28 )
          goto LABEL_27;
        if ( v24 >= LODWORD(v28->max_length) )
          goto LABEL_28;
        this = (WarBoardPieceBaseComponent_o *)v28->m_Items[v24];
        if ( !this )
          goto LABEL_27;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0);
      }
      if ( v25 == ++v24 )
        return;
    }
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596DFEF & 1) == 0 )
  {
    sub_2213A60(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_596DFEF = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0);
}


void WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596DFF2 & 1) == 0 )
  {
    sub_2213A60(&WarBoardControlUiDataComponent_TypeInfo);
    byte_596DFF2 = 1;
  }
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method, v2);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DFF0 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DFF0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0, 0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596DFF1 & 1) == 0 )
  {
    sub_2213A60(&WarBoardControlUiDataComponent_TypeInfo);
    byte_596DFF1 = 1;
  }
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method, v2);
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
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_596DFF3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_596DFF3 = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_2213CDC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_596DFF4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_596DFF4 = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_2213CDC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_596DFF5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_596DFF5 = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_2213CDC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_596DFF6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_596DFF6 = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_2213CDC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_2213CDC(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_596DFF7 & 1) == 0 )
  {
    sub_2213A60(&WarBoardControlUiDataComponent_TypeInfo);
    byte_596DFF7 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method, v2);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_596DFF8 & 1) == 0 )
  {
    sub_2213A60(&WarBoardControlUiDataComponent_TypeInfo);
    byte_596DFF8 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method, v2);
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

  if ( (byte_596DFF9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596DFF9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0);
  if ( !v3 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0);
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_2213CDC(Instance, v5);
  v9 = WarBoardManager__GetEventTasks(Instance, 37, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v9,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_2213CDC(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_2213CDC(0, method);
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
    sub_2213CDC(this, method);
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

  if ( (byte_596DFFB & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596DFFB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0);
}


bool WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8
  bool v3; // zf

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_2213CDC(this, method);
  v3 = !targetPiece->fields._isDead_k__BackingField || !this->fields.moveAfterActionCheck;
  return !v3;
}


void WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t id; // w21
  struct WarBoardPieceData_o *v10; // x8
  WarBoardMessageMaster_o *v11; // x22
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  bool v17; // w4
  System_Int32_array *v18; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v20; // x0
  WarBoardManager_o *v21; // x19

  if ( (byte_596DFFA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_596DFFA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_26;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(targetPiece, 0);
  if ( ((unsigned __int8)targetPiece & 1) != 0 )
  {
    warBoardManager = this->fields.warBoardManager;
    if ( !warBoardManager )
      goto LABEL_26;
    targetPiece = (WarBoardPieceData_o *)warBoardManager->fields._warBoardData_k__BackingField;
    if ( !targetPiece )
      goto LABEL_26;
    id = WarBoardData__get_id((WarBoardData_o *)targetPiece, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v10 = this->fields.targetPiece;
    if ( !v10 )
      goto LABEL_26;
    v11 = (WarBoardMessageMaster_o *)targetPiece;
    breakPoint_k__BackingField = v10->fields._breakPoint_k__BackingField;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0);
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_26;
      v13 = v11;
      v14 = id;
      v15 = 12;
      v16 = breakPoint_k__BackingField;
      v17 = 1;
    }
    else
    {
      if ( !v11 )
        goto LABEL_26;
      v13 = v11;
      v14 = id;
      v15 = 10;
      v16 = breakPoint_k__BackingField;
      v17 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v13, v14, v15, v16, v17, 0);
    if ( !v3 )
LABEL_26:
      sub_2213CDC(targetPiece, v4);
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  targetPiece = (WarBoardPieceData_o *)this->fields.__4__this;
  if ( !targetPiece )
    goto LABEL_26;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceBaseComponent__GetParticipantVals(
                                         (WarBoardPieceBaseComponent_o *)targetPiece,
                                         this->fields.targetPiece,
                                         0);
  if ( !this->fields.warBoardManager )
    goto LABEL_26;
  v18 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0);
  if ( !v3 )
    goto LABEL_26;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v18, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  v20 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v18, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v20,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v21 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v21 )
    {
      WarBoardManager__InsertRunningTask(v21, (WarBoardTaskBase_array *)targetPiece, 0);
      return;
    }
    goto LABEL_26;
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
    sub_2213CDC(0, method);
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

  if ( (byte_596DFFD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596DFFD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(_4__this, method);
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

  if ( (byte_596DFFC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596DFFC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0, 0);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(Instance, v5);
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
    sub_2213CDC(this, 0);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0);
}