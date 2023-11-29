void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40F85F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_6765, v9);
    byte_40F85F1 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listEffectData,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  this->fields.lengthMoveAttack = 25.0;
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_3134090;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_31340A0;
  v17 = (System_Int32_array **)StringLiteral_6765;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6765;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseFrameName, v17, v18, v19, v20, v21, v22, v23);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.removeTweenTargetObjects,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__AddDeadMoveTask(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Vector3_o originalPos,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  const MethodInfo *v18; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x22
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WebViewManager_o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  WebViewManager_o *v26; // x0
  float pixelPerSecond; // s13
  float v28; // s11
  float v29; // s12
  float v30; // s14
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  WarBoardMovePerformance_o *v35; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x20
  const MethodInfo *v37; // x3
  WebViewManager_o *v38; // x0
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  WebViewManager_o *v40; // x0
  System_Collections_Generic_IEnumerable_T__o *v41; // x0
  WebViewManager_o *v42; // x20
  WarBoardTaskBase_array *v43; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_40F85E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_B16FFC(&WarBoardMovePerformance_TypeInfo, v16);
    byte_40F85E8 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  *(_QWORD *)&squareIndex,
                                                                                                  method,
                                                                                                  v4,
                                                                                                  v5);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_12;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, v18);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                30,
                                                                PieceEventVals,
                                                                0LL);
  if ( !v17 )
    goto LABEL_12;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    EventTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v23 )
    goto LABEL_12;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)v23,
                                                         36,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    v24,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v26 )
    goto LABEL_12;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)v26, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v28 = SquarePosition.fields.x;
  v29 = SquarePosition.fields.y;
  v30 = SquarePosition.fields.z;
  v35 = (WarBoardMovePerformance_o *)sub_B170CC(WarBoardMovePerformance_TypeInfo, v31, v32, v33, v34);
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  v46.fields.x = v28;
  v46.fields.y = v29;
  v46.fields.z = v30;
  v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)v35;
  WarBoardMovePerformance___ctor(v35, gameObject, v45, v46, pixelPerSecond, 0, v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v17,
    v36,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v38
    || (v39 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)v38,
                                                               38,
                                                               PieceEventVals,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
          v39,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v41 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)v40,
                                                               37,
                                                               0LL,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
          v41,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v43 = (WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !v42) )
  {
LABEL_12:
    sub_B170D4();
  }
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)v42, v43, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__ChangeCriticalStars(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__ChangeStatus(
        WarBoardPieceBaseComponent_o *this,
        bool isBreak,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__ClickIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardManager_o *Instance; // x0
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v6; // x20
  WebViewManager_o *v7; // x0
  void *monitor; // x8
  System_String_o *v9; // x21
  const MethodInfo *v10; // x2
  Il2CppMethodPointer methodPtr; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  struct WarBoardPieceData_o *v13; // x8
  WebViewManager_o *v14; // x0
  void *v15; // x8
  System_String_o *v16; // x21
  struct WarBoardPieceData_o *v17; // x8
  WebViewManager_o *v18; // x0
  void *v19; // x8
  System_String_o *v20; // x21
  WebViewManager_o *v21; // x0
  void *v22; // x8
  System_String_o *v23; // x19

  if ( (byte_40F85D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F85D9 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  controllType_k__BackingField = Instance->fields._controllType_k__BackingField;
  v6 = Instance;
  if ( controllType_k__BackingField == 1 )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_46;
    if ( pieceData->fields._isEditing_k__BackingField )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v13 = this->fields.pieceData;
      if ( v13 )
      {
        WarBoardManager__SquareSelect(v6, v13->fields._nowSquareIndex_k__BackingField, 0LL);
        v10 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._15_ChangeStatus.methodPtr;
LABEL_37:
        ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v10)(this, methodPtr);
        return;
      }
LABEL_46:
      sub_B170D4();
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0LL) )
    {
      v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( v7 )
      {
        monitor = v7[3].monitor;
        if ( monitor )
        {
          v9 = (System_String_o *)*((_QWORD *)monitor + 4);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v9, 0LL);
          WarBoardManager__DeselectPiece(v6, 1, 0LL, 0LL);
          v10 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
          goto LABEL_37;
        }
      }
      goto LABEL_46;
    }
    if ( WarBoardManager__get_isSelectedPiece(v6, 0LL) && this->fields.isSelectable )
    {
      v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( v14 )
      {
        v15 = v14[3].monitor;
        if ( v15 )
        {
          v16 = (System_String_o *)*((_QWORD *)v15 + 3);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v16, 0LL);
          v17 = this->fields.pieceData;
          if ( v17 )
          {
            WarBoardManager__SelectedPieceAction(v6, v17->fields._nowSquareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
      goto LABEL_46;
    }
    if ( WarBoardManager__IsNowTurn(v6, this->fields.pieceData, 0LL) )
    {
      v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( v18 )
      {
        v19 = v18[3].monitor;
        if ( v19 )
        {
          v20 = (System_String_o *)*((_QWORD *)v19 + 3);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v20, 0LL);
          WarBoardManager__SelectPiece(v6, this->fields.pieceData, 0LL);
          v10 = this->klass->vtable._12_ShowStatus.method;
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
          goto LABEL_37;
        }
      }
      goto LABEL_46;
    }
  }
  if ( (((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._12_ShowStatus.method)(
          this,
          this->klass->vtable._13_HideStatus.methodPtr) & 1) != 0 )
  {
    v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v21 )
      goto LABEL_46;
    v22 = v21[3].monitor;
    if ( !v22 )
      goto LABEL_46;
    v23 = (System_String_o *)*((_QWORD *)v22 + 5);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v23, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__CreateEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  WebViewManager_o *Instance; // x0
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v20; // x21
  UnityEngine_GameObject_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  WarBoardCommonEffectPerformance_o *v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x21
  WebViewManager_o *v28; // x0
  System_Nullable_Vector3__o v29; // 0:x3.16
  System_Nullable_Vector3__o v30; // 0:x5.16

  if ( (byte_40F85EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B16FFC(&WarBoardCommonEffectPerformance_TypeInfo, v14);
    sub_B16FFC(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v15);
    byte_40F85EE = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  effectName,
                                                                                                  taskList,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2266354 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v20 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      v20 = (UnityEngine_Object_o *)transform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        (UnityEngine_Transform_o *)v20,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    v26 = (WarBoardCommonEffectPerformance_o *)sub_B170CC(WarBoardCommonEffectPerformance_TypeInfo, v22, v23, v24, v25);
    *(_QWORD *)&v29.fields.value.fields.x = 0LL;
    *(_QWORD *)&v29.fields.value.fields.z = 0LL;
    *(_QWORD *)&v30.fields.value.fields.x = 0LL;
    *(_QWORD *)&v30.fields.value.fields.z = 0LL;
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)v26;
    WarBoardCommonEffectPerformance___ctor(v26, 0LL, v21, v29, v30, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( v16 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        v27,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v16,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( v28 )
      {
        WarBoardManager__AddTask_18098600(
          (WarBoardManager_o *)v28,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
          0LL);
        return;
      }
    }
LABEL_21:
    sub_B170D4();
  }
}


void __fastcall WarBoardPieceBaseComponent__CreateEffectText(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *effectDamageBaseObject; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UILabel_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x21
  WarBoardCommonEffectPerformance_o *v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x20
  WebViewManager_o *Instance; // x0
  System_Nullable_Vector3__o v31; // 0:x3.16
  System_Nullable_Vector3__o v32; // 0:x5.16

  if ( (byte_40F85EF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B16FFC(&WarBoardCommonEffectPerformance_TypeInfo, v14);
    byte_40F85EF = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v16,
                                                                                                    v17,
                                                                                                    v18,
                                                                                                    v19);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v20,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    effectDamageBaseLabel = (UnityEngine_Object_o *)this->fields.effectDamageBaseLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(effectDamageBaseLabel, 0LL, 0LL) )
    {
      v26 = this->fields.effectDamageBaseLabel;
      if ( !v26 )
        goto LABEL_18;
      UILabel__set_text(v26, popText, 0LL);
    }
    v27 = this->fields.effectDamageBaseObject;
    v28 = (WarBoardCommonEffectPerformance_o *)sub_B170CC(WarBoardCommonEffectPerformance_TypeInfo, v22, v23, v24, v25);
    *(_QWORD *)&v31.fields.value.fields.x = 0LL;
    *(_QWORD *)&v31.fields.value.fields.z = 0LL;
    *(_QWORD *)&v32.fields.value.fields.x = 0LL;
    *(_QWORD *)&v32.fields.value.fields.z = 0LL;
    v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)v28;
    WarBoardCommonEffectPerformance___ctor(v28, 0LL, v27, v31, v32, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v20 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        v29,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v20,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__AddTask_18098600(
          (WarBoardManager_o *)Instance,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v20,
          0LL);
        return;
      }
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall WarBoardPieceBaseComponent__EditPiece(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Transform_o *__fastcall WarBoardPieceBaseComponent__GetEffectDisplayTransform(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconLocalPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v2 = UnityEngine_Vector3__get_zero(0LL);
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v2 = UnityEngine_Vector3__get_zero(0LL);
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


System_Int32_array *__fastcall WarBoardPieceBaseComponent__GetParticipantVals(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *PieceEventVals; // x20
  const MethodInfo *v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  _QWORD **v25; // x20
  __int64 v26; // x19
  __int16 v27; // w8
  __int64 v28; // x19
  __int64 v29; // x19
  __int64 v30; // x19
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  WarBoardPieceBaseComponent___c_c *v33; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__62_0; // x20
  Il2CppObject *v36; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40F85E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, targetPiece);
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__, v8);
    sub_B16FFC(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__, v11);
    sub_B16FFC(&WarBoardPieceBaseComponent___c_TypeInfo, v12);
    byte_40F85E2 = 1;
  }
  if ( !targetPiece )
    goto LABEL_33;
  if ( targetPiece->fields._type_k__BackingField == 1 )
  {
    pieceData = this->fields.pieceData;
    if ( pieceData )
    {
      PieceEventVals = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                              pieceData,
                                                                              (const MethodInfo *)targetPiece);
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                   targetPiece,
                                                                   v15);
      v17 = System_Linq_Enumerable__Concat_int_(
              PieceEventVals,
              v16,
              (const MethodInfo_18D16C4 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v17,
               (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_33:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_33;
  BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(monitor, 0LL);
  if ( !BattleParticipantInfo )
    goto LABEL_33;
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v33 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v33 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo,
                                                                                                   v21,
                                                                                                   v22,
                                                                                                   v23,
                                                                                                   v24);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__62_0,
        v36,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        (const MethodInfo_2B6C28C *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v37 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v37->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v37->__9__62_0,
        (System_Int32_array **)_9__62_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                 Participants_k__BackingField,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                 (const MethodInfo_19C1EA0 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v17,
             (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v25 = (_QWORD **)Method_System_Array_Empty_int___;
  v26 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v27 = *(_WORD *)(v26 + 306);
  if ( (v27 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v27 = *(_WORD *)(v26 + 306);
  }
  if ( (v27 & 0x400) != 0 )
  {
    v28 = *v25[6];
    if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
      sub_AAFCFC(*v25[6]);
    if ( !*(_DWORD *)(v28 + 224) )
    {
      v29 = *v25[6];
      if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
        sub_AAFCFC(*v25[6]);
      j_il2cpp_runtime_class_init_0(v29);
    }
  }
  v30 = *v25[6];
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AAFCFC(*v25[6]);
  return **(System_Int32_array ***)(v30 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v8; // x21

  if ( (byte_40F85EA & 1) == 0 )
  {
    sub_B16FFC(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_40F85EA = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v8 = (WarBoardSimpleAnimationPerformance_o *)sub_B170CC(
                                                 WarBoardSimpleAnimationPerformance_TypeInfo,
                                                 animationName,
                                                 method,
                                                 v3,
                                                 v4);
  WarBoardSimpleAnimationPerformance___ctor(v8, simpleAnimation, animationName, 0LL);
  return v8;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_40F85DB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F85DB = 1;
  }
  currentActionPointRoot = this->fields.currentActionPointRoot;
  if ( !currentActionPointRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0LL);
  currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
  {
    v5 = this->fields.currentPieceActionPointRoot;
    if ( v5 )
    {
      UnityEngine_GameObject__SetActive(v5, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
  }
LABEL_10:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__HideActionTarget(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x19
  WarBoardManager_o *v4; // x0

  if ( (byte_40F85DE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_40F85DE = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v3 = **(_QWORD **)(v2 + 192);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AAFCFC(v3);
  v4 = **(WarBoardManager_o ***)(v3 + 184);
  if ( !v4 )
    sub_B170D4();
  WarBoardManager__HideSimplePopup(v4, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Transform_o *transform; // x21
  WebViewManager_o *Instance; // x0
  int v31; // s0
  int32_t breakPointMax_k__BackingField; // w21
  __int64 v35; // x2
  struct WarBoardBreakPointComponent_array *v36; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Component_o *breakPointParent; // x0
  int32_t v45; // w25
  float v46; // s8
  float v47; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *v49; // x24
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x24
  WarBoardBreakPointComponent_o *v52; // x23
  UnityEngine_Transform_o *v53; // x0
  struct UIWidget_o *v54; // x8
  struct WarBoardBreakPointComponent_array *v55; // x26
  UnityEngine_Transform_o *v56; // x0
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int32_t v64; // w24
  Il2CppClass **v65; // x0
  struct WarBoardBreakPointComponent_array *v66; // x8
  WarBoardBreakPointComponent_o *v67; // x0
  float maxSpacing; // s0
  UnityEngine_GameObject_o *selectObject; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x2
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_Transform_array *v78; // x21
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x22
  const MethodInfo *v85; // x2
  WebViewManager_o *v86; // x0
  WarBoardData_o *monitor; // x0
  int32_t PieceDispPriority; // w0
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x1
  WebViewManager_o *v91; // x0
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v93; // x21
  UnityEngine_Object_o *v94; // x22
  struct UnityEngine_GameObject_o *v95; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  UnityEngine_Component_o *v103; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F85D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UILabel___, pieceData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B16FFC(&UnityEngine_Transform___TypeInfo, v10);
    sub_B16FFC(&WarBoardBreakPointComponent___TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    sub_B16FFC(&StringLiteral_21761, v13);
    sub_B16FFC(&StringLiteral_18113, v14);
    byte_40F85D5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.pieceData = pieceData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.pieceData,
    (System_Int32_array **)pieceData,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  *(UnityEngine_Vector3_o *)&v31 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  breakPointMax_k__BackingField = pieceData->fields._breakPointMax_k__BackingField;
  v36 = (struct WarBoardBreakPointComponent_array *)sub_B17014(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField,
                                                      v35);
  this->fields.breakPoints = v36;
  p_breakPoints = &this->fields.breakPoints;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.breakPoints,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_27;
  if ( breakPointMax_k__BackingField >= 1 )
  {
    v45 = 0;
    v46 = 0.0;
    v47 = (float)breakPointParent[6].fields.m_CachedPtr / (float)breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      v49 = UnityEngine_Component__get_transform(breakPointParent, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v50 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          (UILabel_o *)breakPointPrefab,
                                          v49,
                                          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      if ( !v50 )
        goto LABEL_27;
      v51 = v50;
      v52 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v50,
                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      v53 = UnityEngine_GameObject__get_transform(v51, 0LL);
      if ( !v53 )
        goto LABEL_27;
      v111.fields.y = 0.0;
      v111.fields.z = 0.0;
      v111.fields.x = v46;
      UnityEngine_Transform__set_localPosition(v53, v111, 0LL);
      v54 = this->fields.breakPointParent;
      if ( !v54 )
        goto LABEL_27;
      if ( !v52 )
        goto LABEL_27;
      WarBoardBreakPointComponent__Initialize(
        v52,
        v54->fields.mDepth + 2 * (~v45 + breakPointMax_k__BackingField),
        v45 + 1,
        pieceData->fields._type_k__BackingField == 1,
        pieceData->fields._type_k__BackingField == 0 && pieceData->fields._forceId_k__BackingField != 0,
        0,
        0LL);
      v55 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      v56 = (UnityEngine_Transform_o *)sub_B170BC(v52, v55->obj.klass->_1.element_class);
      if ( !v56 )
        goto LABEL_62;
      v64 = v45;
      if ( v45 >= v55->max_length )
        goto LABEL_61;
      v65 = &v55->obj.klass + v45;
      v65[4] = (Il2CppClass *)v52;
      sub_B16F98((BattleServantConfConponent_o *)(v65 + 4), (System_Int32_array **)v52, v58, v59, v60, v61, v62, v63);
      v66 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      if ( v45 >= v66->max_length )
        goto LABEL_61;
      v67 = v66->m_Items[v45];
      if ( !v67 )
        goto LABEL_27;
      WarBoardBreakPointComponent__SetActive(v67, pieceData->fields._breakPoint_k__BackingField > v45++, 0, 0LL);
      if ( breakPointMax_k__BackingField <= v64 + 1 )
        break;
      maxSpacing = v52->fields.maxSpacing;
      breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
      if ( maxSpacing >= v47 )
        maxSpacing = v47;
      v46 = v46 + maxSpacing;
      if ( !breakPointParent )
        goto LABEL_27;
    }
  }
  selectObject = this->fields.selectObject;
  if ( !selectObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._10_UpdateDisplayActionCount.method)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._9_HideActionCount.method)(
    this,
    this->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._17_ChangeCriticalStars.method)(
    this,
    this->klass->vtable._18_Selectable.methodPtr);
  pieceData->fields.pieceComponent = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&pieceData->fields.pieceComponent,
    (System_Int32_array **)this,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v77 )
      goto LABEL_27;
LABEL_31:
    UnityEngine_GameObject__SetActive(v77, 0, 0LL);
    return;
  }
  v78 = (UnityEngine_Transform_array *)sub_B17014(UnityEngine_Transform___TypeInfo, 1LL, v76);
  v56 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v78 )
    goto LABEL_27;
  v84 = (System_Int32_array **)v56;
  if ( v56 )
  {
    v56 = (UnityEngine_Transform_o *)sub_B170BC(v56, v78->obj.klass->_1.element_class);
    if ( !v56 )
    {
LABEL_62:
      sub_B170F4(v56);
      sub_B170A0();
    }
  }
  if ( !v78->max_length )
  {
LABEL_61:
    sub_B17100(v56, v57, v58);
    sub_B170A0();
  }
  v78->m_Items[0] = (UnityEngine_Transform_o *)v84;
  sub_B16F98((BattleServantConfConponent_o *)v78->m_Items, v84, v58, v79, v80, v81, v82, v83);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v78, v85);
  v86 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v86 )
    goto LABEL_27;
  monitor = (WarBoardData_o *)v86[4].monitor;
  if ( !monitor )
    goto LABEL_27;
  PieceDispPriority = WarBoardData__GetPieceDispPriority(monitor, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v89);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v90);
  v91 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v91 )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)v91,
                               (System_String_o *)StringLiteral_18113,
                               (const MethodInfo_2266354 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v93 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v94 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v94, 0LL, 0LL) )
      v93 = (UnityEngine_Transform_o *)v94;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v95 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               (UILabel_o *)CommonEffectAsset_object,
                                               v93,
                                               (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    this->fields.effectDamageBaseObject = v95;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.effectDamageBaseObject,
      (System_Int32_array **)v95,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v103 = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                          *p_effectDamageBaseObject,
                                          (System_String_o *)StringLiteral_21761,
                                          0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v103, 0LL, 0LL) )
      {
        if ( !v103 )
          goto LABEL_27;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    v103,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)Component_WebViewObject;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.effectDamageBaseLabel,
          (System_Int32_array **)Component_WebViewObject,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110);
      }
      v77 = *p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_27:
        sub_B170D4();
      goto LABEL_31;
    }
  }
}


bool __fastcall WarBoardPieceBaseComponent__IsModifyStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall WarBoardPieceBaseComponent__LongTapIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v21; // x1
  __int64 v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x19
  System_Int32_array **Instance; // x0
  WarBoardManager_o **v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x8
  WarBoardData_o *v43; // x0
  System_Int32_array **Piece_22604968; // x0
  WarBoardPieceData_o **v45; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x24
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  WarBoardTaskBase_TaskCallback_o *v61; // x25
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardManager_o *v69; // x0
  float y; // v0.s[1]
  float x; // s8
  const MethodInfo *v72; // x1
  float32x2_t v73; // d0
  unsigned __int32 v74; // s1
  float v75; // s2
  __int64 v76; // x8
  bool v77; // zf
  __int64 v78; // x8
  float v79; // s3
  float v80; // s1
  WarBoardPieceData_o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  __int64 v86; // x24
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  WarBoardTaskBase_TaskCallback_o *v91; // x25
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct WarBoardPieceData_o *v99; // x8
  UnityEngine_GameObject_o *v100; // x26
  WarBoardManager_o *v101; // x0
  float v102; // s8
  float v103; // s9
  float v104; // s10
  float pixelPerSecond; // s13
  float v106; // s11
  float v107; // s12
  float z; // s14
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  WarBoardMovePerformance_o *v113; // x0
  WarBoardTaskBase_o *v114; // x25
  const MethodInfo *v115; // x3
  const MethodInfo *v116; // x1
  WarBoardPieceData_o *v117; // x0
  const MethodInfo *v118; // x1
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  bool v122; // w8
  System_Func_bool__o *v123; // x23
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  __int64 v128; // x21
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  System_Delegate_o *v133; // x23
  WarBoardPieceBaseComponent___c_c *v134; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v137; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v138; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  WarBoardPieceData_o *v152; // x0
  const MethodInfo *v153; // x1
  MethodInfo v154; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v157; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F85E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, *(_QWORD *)&squareIndex);
    sub_B16FFC(&System_Func_bool__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__, v13);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__, v14);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__, v15);
    sub_B16FFC(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
      v16);
    sub_B16FFC(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, v17);
    sub_B16FFC(&WarBoardPieceBaseComponent___c_TypeInfo, v18);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v19);
    sub_B16FFC(&WarBoardConditionalJumpTask_TypeInfo, v20);
    sub_B16FFC(&WarBoardMovePerformance_TypeInfo, v21);
    byte_40F85E5 = 1;
  }
  LODWORD(v154.invoker_method) = 0;
  v154.methodPointer = 0LL;
  v22 = sub_B170CC(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3, v4);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v22,
    0LL);
  if ( !v22 )
    goto LABEL_38;
  *(_QWORD *)(v22 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 32), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_DWORD *)(v22 + 52) = squareIndex;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v35 = (WarBoardManager_o **)(v22 + 24);
  *(_QWORD *)(v22 + 24) = Instance;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 24), Instance, v36, v37, v38, v39, v40, v41);
  v42 = *(_QWORD *)(v22 + 24);
  if ( !v42 )
    goto LABEL_38;
  v43 = *(WarBoardData_o **)(v42 + 424);
  if ( !v43 )
    goto LABEL_38;
  Piece_22604968 = (System_Int32_array **)WarBoardData__GetPiece_22604968(v43, *(_DWORD *)(v22 + 52), 0LL);
  v45 = (WarBoardPieceData_o **)(v22 + 16);
  *(_QWORD *)(v22 + 16) = Piece_22604968;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), Piece_22604968, v46, v47, v48, v49, v50, v51);
  v56 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v52, v53, v54, v55);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v56, 0LL, 0LL);
  v61 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v57, v58, v59, v60);
  WarBoardTaskBase_TaskCallback___ctor(
    v61,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v56 )
    goto LABEL_38;
  *(_QWORD *)(v56 + 32) = v61;
  sub_B16F98((BattleServantConfConponent_o *)(v56 + 32), (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
  if ( !v33 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_38;
  if ( !*v35 )
    goto LABEL_38;
  SquarePosition = WarBoardManager__GetSquarePosition(*v35, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  v69 = *(WarBoardManager_o **)(v22 + 24);
  *(UnityEngine_Vector3_o *)(v22 + 40) = SquarePosition;
  if ( !v69 )
    goto LABEL_38;
  v156 = WarBoardManager__GetSquarePosition(v69, *(_DWORD *)(v22 + 52), 0LL);
  y = v156.fields.y;
  *(float32x2_t *)&v156.fields.x = vsub_f32(*(float32x2_t *)&v156.fields.x, *(float32x2_t *)(v22 + 40));
  v156.fields.y = v156.fields.z - *(float *)(v22 + 48);
  v154.methodPointer = *(Il2CppMethodPointer *)&v156.fields.x;
  *(float *)&v154.invoker_method = v156.fields.y;
  v157.fields.x = UnityEngine_Vector3__get_magnitude(v156, &v154);
  x = v157.fields.x;
  *(UnityEngine_Vector3_o *)v73.n64_u64 = UnityEngine_Vector3__get_normalized(v157, &v154);
  v76 = *(_QWORD *)(v22 + 16);
  if ( !v76 )
    goto LABEL_38;
  v77 = *(_DWORD *)(v76 + 16) == 0;
  v78 = 136LL;
  if ( !v77 )
    v78 = 132LL;
  v79 = x - *(float *)((char *)&this->klass + v78);
  if ( v79 > 0.0 )
  {
    v73.n64_u32[1] = v74;
    v80 = (float)(v75 * v79) + *(float *)(v22 + 48);
    *(float32x2_t *)(v22 + 40) = vadd_f32(vmul_n_f32(v73, v79), *(float32x2_t *)(v22 + 40));
    *(float *)(v22 + 48) = v80;
  }
  v81 = this->fields.pieceData;
  if ( !v81 )
    goto LABEL_38;
  WarBoardPieceData__CreatePieceEventVals(v81, v72);
  v86 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v82, v83, v84, v85);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v86, 0LL, 0LL);
  v91 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v87, v88, v89, v90);
  WarBoardTaskBase_TaskCallback___ctor(
    v91,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v86 )
    goto LABEL_38;
  *(_QWORD *)(v86 + 32) = v91;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 32), (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v99 = this->fields.pieceData;
  if ( !v99 )
    goto LABEL_38;
  v100 = gameObject;
  v101 = *(WarBoardManager_o **)(v22 + 24);
  if ( !v101 )
    goto LABEL_38;
  v102 = *(float *)(v22 + 40);
  v103 = *(float *)(v22 + 44);
  v104 = *(float *)(v22 + 48);
  v158 = WarBoardManager__GetSquarePosition(v101, v99->fields._nowSquareIndex_k__BackingField, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v106 = v158.fields.x;
  v107 = v158.fields.y;
  z = v158.fields.z;
  v113 = (WarBoardMovePerformance_o *)sub_B170CC(WarBoardMovePerformance_TypeInfo, v109, v110, v111, v112);
  v159.fields.x = v102;
  v159.fields.y = v103;
  v159.fields.z = v104;
  v160.fields.x = v106;
  v160.fields.y = v107;
  v160.fields.z = z;
  v114 = (WarBoardTaskBase_o *)v113;
  WarBoardMovePerformance___ctor(v113, v100, v159, v160, pixelPerSecond, 0, v115);
  v117 = this->fields.pieceData;
  if ( !v117 )
    goto LABEL_38;
  if ( WarBoardPieceData__GetMoveAfterAttack(v117, v116) )
  {
    v122 = 0;
  }
  else
  {
    if ( !*v45 )
      goto LABEL_38;
    v122 = WarBoardPieceData__GetMovedAferDefend(*v45, v118) == 0;
  }
  *(_BYTE *)(v22 + 56) = v122;
  v123 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v118, v119, v120, v121);
  System_Func_bool____ctor(
    v123,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v128 = sub_B170CC(WarBoardConditionalJumpTask_TypeInfo, v124, v125, v126, v127);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v128, v123, (WarBoardTaskBase_o *)v86, v114, 0LL);
  if ( !v128 )
LABEL_38:
    sub_B170D4();
  v133 = *(System_Delegate_o **)(v128 + 40);
  v134 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v134 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  static_fields = v134->static_fields;
  _9__65_3 = static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( (BYTE3(v134->vtable._0_Equals.methodPtr) & 4) != 0 && !v134->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v134);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v137 = (Il2CppObject *)static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(
                                                    WarBoardTaskBase_TaskCallback_TypeInfo,
                                                    v129,
                                                    v130,
                                                    v131,
                                                    v132);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v137,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v138 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v138->__9__65_3 = _9__65_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v138->__9__65_3,
      (System_Int32_array **)_9__65_3,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
  }
  v145 = (System_Int32_array **)System_Delegate__Combine(v133, (System_Delegate_o *)_9__65_3, 0LL);
  if ( !v145 || *v145 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v128 + 40) = v145;
    sub_B16F98((BattleServantConfConponent_o *)(v128 + 40), v145, v146, v147, v148, v149, v150, v151);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v33,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v128,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( *v35 )
    {
      WarBoardManager__AddTask_18098600(*v35, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v33, 0LL);
      return;
    }
    goto LABEL_38;
  }
  v152 = (WarBoardPieceData_o *)sub_B173C8(v145);
  WarBoardPieceData__IsEnabledMoveAfterAttack(v152, v153);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarBoardManager_o **v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x21
  System_Int32_array **Instance; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x8
  WarBoardData_o *v41; // x0
  System_Int32_array **Wall; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  WarBoardTaskBase_TaskCallback_o *v58; // x24
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardManager_o *v66; // x0
  float y; // v0.s[1]
  float x; // s8
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  float32x2_t v73; // d0
  unsigned __int32 v74; // s1
  float v75; // s2
  float v76; // s3
  float v77; // s1
  __int64 v78; // x22
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  WarBoardTaskBase_TaskCallback_o *v83; // x23
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct WarBoardPieceData_o *v91; // x8
  UnityEngine_GameObject_o *v92; // x24
  WarBoardManager_o *v93; // x0
  float v94; // s8
  float v95; // s9
  float v96; // s10
  float pixelPerSecond; // s13
  float v98; // s11
  float v99; // s12
  float z; // s14
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  WarBoardMovePerformance_o *v105; // x0
  WarBoardTaskBase_o *v106; // x23
  const MethodInfo *v107; // x3
  const MethodInfo *v108; // x1
  WarBoardPieceData_o *v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  System_Func_bool__o *v114; // x19
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  WarBoardConditionalJumpTask_o *v119; // x24
  WarBoardManager_o *v120; // x0
  MethodInfo v121; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F85E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, *(_QWORD *)&squareIndex);
    sub_B16FFC(&System_Func_bool__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__, v13);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__, v14);
    sub_B16FFC(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
      v15);
    sub_B16FFC(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, v16);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v17);
    sub_B16FFC(&WarBoardConditionalJumpTask_TypeInfo, v18);
    sub_B16FFC(&WarBoardMovePerformance_TypeInfo, v19);
    byte_40F85E7 = 1;
  }
  LODWORD(v121.invoker_method) = 0;
  v121.methodPointer = 0LL;
  v20 = sub_B170CC(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3, v4);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_19;
  *(_QWORD *)(v20 + 24) = this;
  v27 = (WarBoardManager_o **)(v20 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v20 + 44) = squareIndex;
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v20 + 16) = Instance;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), Instance, v34, v35, v36, v37, v38, v39);
  v40 = *(_QWORD *)(v20 + 16);
  if ( !v40 )
    goto LABEL_19;
  v41 = *(WarBoardData_o **)(v40 + 424);
  if ( !v41 )
    goto LABEL_19;
  Wall = (System_Int32_array **)WarBoardData__GetWall(v41, *(_DWORD *)(v20 + 44), 1, 0LL);
  *(_QWORD *)(v20 + 48) = Wall;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 48), Wall, v43, v44, v45, v46, v47, v48);
  v53 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v49, v50, v51, v52);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v53, 0LL, 0LL);
  v58 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v54, v55, v56, v57);
  WarBoardTaskBase_TaskCallback___ctor(
    v58,
    (Il2CppObject *)v20,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v53 )
    goto LABEL_19;
  *(_QWORD *)(v53 + 32) = v58;
  sub_B16F98((BattleServantConfConponent_o *)(v53 + 32), (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
  if ( !v32 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v32,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_19;
  if ( !*v27 )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(*v27, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  v66 = *(WarBoardManager_o **)(v20 + 16);
  *(UnityEngine_Vector3_o *)(v20 + 32) = SquarePosition;
  if ( !v66 )
    goto LABEL_19;
  v123 = WarBoardManager__GetSquarePosition(v66, *(_DWORD *)(v20 + 44), 0LL);
  y = v123.fields.y;
  *(float32x2_t *)&v123.fields.x = vsub_f32(*(float32x2_t *)&v123.fields.x, *(float32x2_t *)(v20 + 32));
  v123.fields.y = v123.fields.z - *(float *)(v20 + 40);
  v121.methodPointer = *(Il2CppMethodPointer *)&v123.fields.x;
  *(float *)&v121.invoker_method = v123.fields.y;
  v124.fields.x = UnityEngine_Vector3__get_magnitude(v123, &v121);
  x = v124.fields.x;
  *(UnityEngine_Vector3_o *)v73.n64_u64 = UnityEngine_Vector3__get_normalized(v124, &v121);
  v76 = x - this->fields.lengthOnAttack;
  if ( v76 > 0.0 )
  {
    v73.n64_u32[1] = v74;
    v77 = (float)(v75 * v76) + *(float *)(v20 + 40);
    *(float32x2_t *)(v20 + 32) = vadd_f32(vmul_n_f32(v73, v76), *(float32x2_t *)(v20 + 32));
    *(float *)(v20 + 40) = v77;
  }
  v78 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v69, v70, v71, v72);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v78, 0LL, 0LL);
  v83 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v79, v80, v81, v82);
  WarBoardTaskBase_TaskCallback___ctor(
    v83,
    (Il2CppObject *)v20,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v78 )
    goto LABEL_19;
  *(_QWORD *)(v78 + 32) = v83;
  sub_B16F98((BattleServantConfConponent_o *)(v78 + 32), (System_Int32_array **)v83, v84, v85, v86, v87, v88, v89);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v91 = this->fields.pieceData;
  if ( !v91 )
    goto LABEL_19;
  v92 = gameObject;
  v93 = *(WarBoardManager_o **)(v20 + 16);
  if ( !v93 )
    goto LABEL_19;
  v94 = *(float *)(v20 + 32);
  v95 = *(float *)(v20 + 36);
  v96 = *(float *)(v20 + 40);
  v125 = WarBoardManager__GetSquarePosition(v93, v91->fields._nowSquareIndex_k__BackingField, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v98 = v125.fields.x;
  v99 = v125.fields.y;
  z = v125.fields.z;
  v105 = (WarBoardMovePerformance_o *)sub_B170CC(WarBoardMovePerformance_TypeInfo, v101, v102, v103, v104);
  v126.fields.x = v94;
  v126.fields.y = v95;
  v126.fields.z = v96;
  v127.fields.x = v98;
  v127.fields.y = v99;
  v127.fields.z = z;
  v106 = (WarBoardTaskBase_o *)v105;
  WarBoardMovePerformance___ctor(v105, v92, v126, v127, pixelPerSecond, 0, v107);
  v109 = this->fields.pieceData;
  if ( !v109
    || (*(_BYTE *)(v20 + 56) = WarBoardPieceData__GetMoveAfterAttack(v109, v108) == 0,
        v114 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v110, v111, v112, v113),
        System_Func_bool____ctor(
          v114,
          (Il2CppObject *)v20,
          Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
          (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__),
        v119 = (WarBoardConditionalJumpTask_o *)sub_B170CC(WarBoardConditionalJumpTask_TypeInfo, v115, v116, v117, v118),
        WarBoardConditionalJumpTask___ctor(v119, v114, (WarBoardTaskBase_o *)v78, v106, 0LL),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v32,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v119,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__),
        (v120 = *(WarBoardManager_o **)(v20 + 16)) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  WarBoardManager__AddTask_18098600(v120, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x23
  System_Int32_array **Instance; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x25
  WarBoardData_o *v43; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v46; // x19
  float v47; // s0
  float v48; // s1
  float v49; // s2
  float v50; // s13
  float v51; // s8
  float v52; // s14
  float v53; // s0
  float v54; // s1
  float v55; // s2
  WarBoardData_o *v56; // x0
  float v57; // s9
  float v58; // s10
  float v59; // s11
  System_Int32_array **Square; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x20
  const MethodInfo *v72; // x2
  System_Int32_array *ParticipantVals; // x24
  WebViewManager_o *v74; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WebViewManager_o *v76; // x0
  WarBoardPieceData_o *v77; // x21
  System_Collections_Generic_IEnumerable_T__o *v78; // x0
  WebViewManager_o *v79; // x0
  WarBoardManager_o **v80; // x19
  System_Collections_Generic_IEnumerable_T__o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  __int64 v86; // x25
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  System_Delegate_o *v91; // x27
  WarBoardTaskBase_TaskCallback_o *v92; // x28
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x8
  float x; // s12
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  float v106; // s0
  float v107; // s1
  float v108; // s2
  WarBoardPieceData_o *v109; // x22
  __int64 v110; // x8
  float v111; // s15
  WarBoardManager_o **v112; // x28
  float v113; // s4
  float v114; // s12
  float v115; // s9
  float v116; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v118; // s11
  UnityEngine_GameObject_o *v119; // x25
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  WarBoardMovePerformance_o *v124; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v125; // x26
  const MethodInfo *v126; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v127; // x25
  WebViewManager_o *v128; // x0
  System_Collections_Generic_IEnumerable_T__o *v129; // x0
  WebViewManager_o *v130; // x0
  System_Collections_Generic_IEnumerable_T__o *v131; // x0
  WebViewManager_o *v132; // x0
  System_Collections_Generic_IEnumerable_T__o *v133; // x0
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  float v138; // s0
  float v139; // s9
  float v140; // s10
  float v141; // s11
  UnityEngine_GameObject_o *v142; // x0
  float v143; // s12
  UnityEngine_GameObject_o *v144; // x21
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  WarBoardMovePerformance_o *v149; // x0
  System_Int32_array **v150; // x24
  const MethodInfo *v151; // x3
  const MethodInfo *v152; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *v153; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  WarBoardMessageMaster_o *v155; // x23
  WarBoardData_o *warBoardData_k__BackingField; // x0
  int32_t id; // w26
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  __int64 v161; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v162; // x0
  const MethodInfo *v163; // x5
  _BOOL4 v164; // w8
  int32_t v165; // w2
  bool v166; // w4
  WarBoardMessageMaster_o *v167; // x0
  int32_t v168; // w1
  __int64 v169; // x24
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  Il2CppObject **v176; // x22
  float v177; // s0
  float v178; // s1
  float v179; // s2
  float v180; // s0
  float v181; // s5
  float v182; // s11
  float v183; // s12
  float v184; // s13
  float v185; // s8
  float y; // s9
  float z; // s10
  float magnitude; // s0
  float v189; // s1
  float v190; // s8
  float v191; // s1
  __int64 v192; // x8
  __int64 v193; // x8
  MapZoom_o *v194; // x0
  float ZoomSize; // s0
  __int64 v196; // x8
  __int64 v197; // x8
  __int64 v198; // x8
  MapScroll_o *v199; // x0
  const MethodInfo_29CF778 *v200; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v202; // x8
  WarBoardManager_o *v203; // x23
  float v204; // s0
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardManager_o *monitor; // x0
  __int64 v207; // x1
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  WarBoardCommonEffectPerformance_o *EncountkEffectTask; // x21
  WarBoardPieceBaseComponent___c_c *v215; // x8
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v218; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v219; // x0
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  System_Delegate_o *EndCallback; // x25
  __int64 v227; // x1
  __int64 v228; // x2
  __int64 v229; // x3
  __int64 v230; // x4
  WarBoardTaskBase_TaskCallback_o *v231; // x26
  System_Int32_array **v232; // x0
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  __int64 v239; // x1
  __int64 v240; // x2
  __int64 v241; // x3
  __int64 v242; // x4
  int *v243; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v244; // x21
  BattleServantConfConponent_o *p_addCount; // x21
  System_Delegate_o *v246; // t1
  Il2CppObject *v247; // x22
  WarBoardTaskBase_TaskCallback_o *v248; // x24
  System_Int32_array **v249; // x0
  System_String_array **v250; // x2
  System_String_array **v251; // x3
  System_Boolean_array **v252; // x4
  System_Int32_array **v253; // x5
  System_Int32_array *v254; // x6
  System_Int32_array *v255; // x7
  __int64 v256; // x1
  __int64 v257; // x2
  __int64 v258; // x3
  __int64 v259; // x4
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v261; // x23
  __int64 v262; // x2
  System_Int32_array **AttackEffectTask; // x0
  __int64 v264; // x1
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  System_Int32_array **v271; // x23
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardManager_o *v273; // x24
  int v274; // s0
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  System_Int32_array **v282; // x24
  WebViewManager_o *v283; // x0
  System_String_array **v284; // x3
  System_Boolean_array **v285; // x4
  System_Int32_array **v286; // x5
  System_Int32_array *v287; // x6
  System_Int32_array *v288; // x7
  System_Int32_array **v289; // x24
  const MethodInfo *v290; // x2
  WarBoardPieceBaseComponent_o *v291; // x0
  System_String_array **v292; // x3
  System_Boolean_array **v293; // x4
  System_Int32_array **v294; // x5
  System_Int32_array *v295; // x6
  System_Int32_array *v296; // x7
  System_Int32_array **v297; // x22
  __int64 v298; // x1
  __int64 v299; // x2
  __int64 v300; // x3
  __int64 v301; // x4
  WarBoardOrthostichySchedule_o *v302; // x22
  const MethodInfo *v303; // x2
  System_String_array **v304; // x3
  System_Boolean_array **v305; // x4
  System_Int32_array **v306; // x5
  System_Int32_array *v307; // x6
  System_Int32_array *v308; // x7
  __int64 v309; // x1
  __int64 v310; // x2
  __int64 v311; // x3
  __int64 v312; // x4
  __int64 v313; // x21
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v320; // x21
  BattleServantConfConponent_o *v321; // x21
  System_Delegate_o *v322; // x22
  System_Delegate_o *v323; // t1
  WarBoardPieceBaseComponent___c_c *v324; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *v325; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v327; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v328; // x0
  System_String_array **v329; // x2
  System_String_array **v330; // x3
  System_Boolean_array **v331; // x4
  System_Int32_array **v332; // x5
  System_Int32_array *v333; // x6
  System_Int32_array *v334; // x7
  System_Int32_array **v335; // x0
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  WarBoardPieceData_o *v342; // x0
  const MethodInfo *v343; // x1
  float v344; // [xsp+4h] [xbp-ECh]
  float v345; // [xsp+8h] [xbp-E8h]
  float v346; // [xsp+Ch] [xbp-E4h]
  float v347; // [xsp+10h] [xbp-E0h]
  float v348; // [xsp+14h] [xbp-DCh]
  UnityEngine_Component_o *v349; // [xsp+18h] [xbp-D8h]
  System_Nullable_float__o size; // [xsp+20h] [xbp-D0h] BYREF
  System_Nullable_Vector3__o v351; // [xsp+28h] [xbp-C8h] BYREF
  MethodInfo methoda; // [xsp+38h] [xbp-B8h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v354; // 0:x3.8
  System_Nullable_Vector3__o v355; // 0:x0.16
  UnityEngine_Vector3_o v356; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v357; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v358; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v359; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v360; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v362; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v363; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v364; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v365; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F85E3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v16);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v19);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, v20);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, v21);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__, v22);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__, v23);
    sub_B16FFC(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, v24);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__, v25);
    sub_B16FFC(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v26);
    sub_B16FFC(&WarBoardPieceBaseComponent___c_TypeInfo, v27);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v28);
    sub_B16FFC(&WarBoardMovePerformance_TypeInfo, v29);
    sub_B16FFC(&WarBoardOrthostichySchedule_TypeInfo, v30);
    sub_B16FFC(&WarBoardParallelSchedule_TypeInfo, v31);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v32);
    sub_B16FFC(&StringLiteral_8934, v33);
    byte_40F85E3 = 1;
  }
  LODWORD(methoda.klass) = 0;
  methoda.name = 0LL;
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v34 = sub_B170CC(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3, v4);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v34,
    0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v34 )
    goto LABEL_109;
  *(_QWORD *)(v34 + 24) = Instance;
  v42 = v34 + 24;
  sub_B16F98((BattleServantConfConponent_o *)(v34 + 24), Instance, v36, v37, v38, v39, v40, v41);
  if ( !*(_QWORD *)(v34 + 24) )
    goto LABEL_109;
  v43 = *(WarBoardData_o **)(*(_QWORD *)(v34 + 24) + 424LL);
  if ( !v43 )
    goto LABEL_109;
  Piece_22604968 = WarBoardData__GetPiece_22604968(v43, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_109;
  v46 = Piece_22604968;
  if ( !*(_QWORD *)v42 )
    goto LABEL_109;
  *(UnityEngine_Vector3_o *)&v47 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)*(_QWORD *)v42,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !*(_QWORD *)v42 )
    goto LABEL_109;
  v50 = v47;
  v51 = v48;
  v52 = v49;
  *(UnityEngine_Vector3_o *)&v53 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)*(_QWORD *)v42,
                                     squareIndex,
                                     0LL);
  if ( !*(_QWORD *)v42 )
    goto LABEL_109;
  v56 = *(WarBoardData_o **)(*(_QWORD *)v42 + 424LL);
  if ( !v56 )
    goto LABEL_109;
  v57 = v53;
  v58 = v54;
  v59 = v55;
  Square = (System_Int32_array **)WarBoardData__GetSquare(v56, squareIndex, 0LL);
  *(_QWORD *)(v34 + 16) = Square;
  sub_B16F98((BattleServantConfConponent_o *)(v34 + 16), Square, v61, v62, v63, v64, v65, v66);
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v67,
                                                                                                  v68,
                                                                                                  v69,
                                                                                                  v70);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v46, v72);
  v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v74 )
    goto LABEL_109;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)v74,
                                                                42,
                                                                ParticipantVals,
                                                                0LL);
  if ( !v71 )
    goto LABEL_109;
  v349 = (UnityEngine_Component_o *)this;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v71,
    EventTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v76 )
    goto LABEL_109;
  v77 = v46;
  v78 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)v76,
                                                         43,
                                                         ParticipantVals,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v71,
    v78,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v79 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v79 )
    goto LABEL_109;
  v80 = (WarBoardManager_o **)(v34 + 24);
  v81 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)v79,
                                                         41,
                                                         ParticipantVals,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v71,
    v81,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v86 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v82, v83, v84, v85);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v86, 0LL, 0LL);
  if ( !v86 )
    goto LABEL_109;
  v91 = *(System_Delegate_o **)(v86 + 32);
  v92 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v87, v88, v89, v90);
  WarBoardTaskBase_TaskCallback___ctor(
    v92,
    (Il2CppObject *)v34,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v93 = (System_Int32_array **)System_Delegate__Combine(v91, (System_Delegate_o *)v92, 0LL);
  v100 = v93;
  if ( v93 && *v93 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  *(_QWORD *)(v86 + 32) = v93;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 32), v93, v94, v95, v96, v97, v98, v99);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v71,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v356.fields.x = v57 - v50;
  v356.fields.y = v58 - v51;
  v356.fields.z = v59 - v52;
  *(float *)&methoda.name = v57 - v50;
  *((float *)&methoda.name + 1) = v58 - v51;
  *(float *)&methoda.klass = v59 - v52;
  v357.fields.x = UnityEngine_Vector3__get_magnitude(v356, (const MethodInfo *)&methoda.name);
  x = v357.fields.x;
  *(UnityEngine_Vector3_o *)&v106 = UnityEngine_Vector3__get_normalized(v357, (const MethodInfo *)&methoda.name);
  if ( !v77 )
    goto LABEL_109;
  v109 = v77;
  v110 = 136LL;
  if ( v77->fields._type_k__BackingField )
    v110 = 132LL;
  v111 = v108;
  v112 = (WarBoardManager_o **)(v34 + 24);
  v347 = v106;
  v348 = v107;
  v113 = x - *(float *)((char *)&v349->klass + v110);
  if ( v113 > 0.0 )
  {
    v114 = v50 + (float)(v106 * v113);
    v344 = v57;
    v345 = v59;
    v115 = v51 + (float)(v107 * v113);
    v346 = v58;
    v116 = v52 + (float)(v108 * v113);
    gameObject = UnityEngine_Component__get_gameObject(v349, 0LL);
    v118 = *(float *)&v349[5].monitor;
    v119 = gameObject;
    v124 = (WarBoardMovePerformance_o *)sub_B170CC(WarBoardMovePerformance_TypeInfo, v120, v121, v122, v123);
    v358.fields.x = v50;
    v358.fields.y = v51;
    v358.fields.z = v52;
    v364.fields.x = v114;
    v364.fields.y = v115;
    v364.fields.z = v116;
    v125 = (EventMissionProgressRequest_Argument_ProgressData_o *)v124;
    WarBoardMovePerformance___ctor(v124, v119, v358, v364, v118, 5, v126);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v71,
      v125,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v51 = v115;
    v57 = v344;
    v59 = v345;
    v52 = v116;
    v58 = v346;
    v50 = v114;
  }
  v127 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                   v102,
                                                                                                   v103,
                                                                                                   v104,
                                                                                                   v105);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v127,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v128 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v128 )
    goto LABEL_109;
  v129 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)v128,
                                                          1,
                                                          ParticipantVals,
                                                          0LL);
  if ( !v127 )
    goto LABEL_109;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v127,
    v129,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v130 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v130 )
    goto LABEL_109;
  v131 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)v130,
                                                          19,
                                                          ParticipantVals,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v127,
    v131,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v132 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v132 )
    goto LABEL_109;
  v133 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)v132,
                                                          39,
                                                          ParticipantVals,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v127,
    v133,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v77->fields._type_k__BackingField != 1 )
  {
    v169 = sub_B170CC(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v134, v135, v136, v137);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v169,
      0LL);
    if ( !v169 )
      goto LABEL_109;
    *(_QWORD *)(v169 + 32) = v34;
    v176 = (Il2CppObject **)(v169 + 32);
    sub_B16F98(
      (BattleServantConfConponent_o *)(v169 + 32),
      (System_Int32_array **)v34,
      v170,
      v171,
      v172,
      v173,
      v174,
      v175);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v71,
      (System_Collections_Generic_IEnumerable_T__o *)v127,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v177 = *(float *)&v349[5].fields.m_CachedPtr;
    v178 = v347 * v177;
    v179 = v348 * v177;
    v180 = v111 * v177;
    v181 = v59 - v180;
    v182 = v50 + v178;
    v183 = v51 + v179;
    v184 = v52 + v180;
    v360.fields.x = (float)(v57 - v178) - v182;
    v360.fields.y = (float)(v58 - v179) - (float)(v51 + v179);
    v360.fields.z = v181 - v184;
    methoda.methodPointer = *(Il2CppMethodPointer *)&v360.fields.x;
    *(float *)&methoda.invoker_method = v181 - v184;
    normalized = UnityEngine_Vector3__get_normalized(v360, &methoda);
    v185 = normalized.fields.x;
    y = normalized.fields.y;
    z = normalized.fields.z;
    magnitude = UnityEngine_Vector3__get_magnitude(normalized, &methoda);
    v189 = v182 + (float)((float)(v185 * magnitude) * 0.5);
    v190 = v183 + (float)((float)(y * magnitude) * 0.5);
    *(float *)&methoda.methodPointer = v189;
    *((float *)&methoda.methodPointer + 1) = v190;
    *(float *)&methoda.invoker_method = v184 + (float)((float)(z * magnitude) * 0.5);
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))v349->klass[2]._1.events)(
      v349,
      v349->klass[2]._1.properties);
    *((float *)&methoda.methodPointer + 1) = v190 + v191;
    if ( !*(_QWORD *)(v169 + 32) )
      goto LABEL_109;
    v192 = *(_QWORD *)(*(_QWORD *)(v169 + 32) + 24LL);
    if ( !v192 )
      goto LABEL_109;
    v193 = *(_QWORD *)(v192 + 40);
    if ( !v193 )
      goto LABEL_109;
    v194 = *(MapZoom_o **)(v193 + 72);
    if ( !v194 )
      goto LABEL_109;
    ZoomSize = MapZoom__GetZoomSize(v194, 0LL);
    v196 = *(_QWORD *)(v169 + 32);
    *(float *)(v169 + 16) = ZoomSize;
    if ( !v196 )
      goto LABEL_109;
    v197 = *(_QWORD *)(v196 + 24);
    if ( !v197 )
      goto LABEL_109;
    v198 = *(_QWORD *)(v197 + 40);
    if ( !v198 )
      goto LABEL_109;
    v199 = *(MapScroll_o **)(v198 + 64);
    if ( !v199 )
      goto LABEL_109;
    ScrlPos = MapScroll__GetScrlPos(v199, 0LL);
    v202 = *(_QWORD *)(v169 + 32);
    *(UnityEngine_Vector2_o *)(v169 + 20) = ScrlPos;
    if ( !v202 )
      goto LABEL_109;
    v203 = *(WarBoardManager_o **)(v202 + 24);
    *(_QWORD *)&v362.fields.x = methoda.methodPointer;
    v362.fields.z = *(float *)&methoda.invoker_method;
    *(_QWORD *)&v355.fields.value.fields.x = &v351;
    *(_QWORD *)&v351.fields.value.fields.x = 0LL;
    *(_QWORD *)&v351.fields.value.fields.z = 0LL;
    *(_QWORD *)&v355.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v355, v362, v200);
    v204 = *((float *)&v349[5].fields + 1);
    p_size = (System_Nullable_float__o)&size;
    size = 0LL;
    System_Nullable_float____ctor(p_size, v204, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
    if ( !v203 )
      goto LABEL_109;
    v354 = size;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     v203,
                                                                                     v351,
                                                                                     v354,
                                                                                     1,
                                                                                     0,
                                                                                     1,
                                                                                     0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v71,
      CameraPerformanceTask,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( !*v176 )
      goto LABEL_109;
    monitor = (WarBoardManager_o *)(*v176)[1].monitor;
    if ( !monitor )
      goto LABEL_109;
    v363.fields.y = *((float *)&methoda.methodPointer + 1);
    v363.fields.z = *(float *)&methoda.invoker_method;
    v363.fields.x = *(float *)&methoda.methodPointer;
    EncountkEffectTask = WarBoardManager__CreateEncountkEffectTask(monitor, v363, 1, 0LL);
    v215 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v215 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v215->static_fields;
    _9__63_1 = static_fields->__9__63_1;
    if ( !_9__63_1 )
    {
      if ( (BYTE3(v215->vtable._0_Equals.methodPtr) & 4) != 0 && !v215->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v215);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v218 = (Il2CppObject *)static_fields->__9;
      _9__63_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v207, v208, v209, v210);
      System_Action___ctor(_9__63_1, v218, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, 0LL);
      v219 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v219->__9__63_1 = _9__63_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v219->__9__63_1,
        (System_Int32_array **)_9__63_1,
        v220,
        v221,
        v222,
        v223,
        v224,
        v225);
    }
    if ( !EncountkEffectTask )
      goto LABEL_109;
    EncountkEffectTask->fields.animantionStartEndCallback = _9__63_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&EncountkEffectTask->fields.animantionStartEndCallback,
      (System_Int32_array **)_9__63_1,
      v208,
      v209,
      v210,
      v211,
      v212,
      v213);
    EndCallback = (System_Delegate_o *)EncountkEffectTask->fields.EndCallback;
    v231 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v227, v228, v229, v230);
    WarBoardTaskBase_TaskCallback___ctor(
      v231,
      (Il2CppObject *)v169,
      Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
      0LL);
    v232 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v231, 0LL);
    v100 = v232;
    if ( !v232 || *v232 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      EncountkEffectTask->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v232;
      sub_B16F98(
        (BattleServantConfConponent_o *)&EncountkEffectTask->fields.EndCallback,
        v232,
        v233,
        v234,
        v235,
        v236,
        v237,
        v238);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v71,
        (EventMissionProgressRequest_Argument_ProgressData_o *)EncountkEffectTask,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v243 = &v71->fields._size;
      if ( !v71->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v244 = v71->fields._items->m_Items[0];
      if ( !v244 )
        goto LABEL_109;
      v246 = *(System_Delegate_o **)&v244->fields.addCount;
      p_addCount = (BattleServantConfConponent_o *)&v244->fields.addCount;
      v247 = *v176;
      v248 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(
                                                  WarBoardTaskBase_TaskCallback_TypeInfo,
                                                  v239,
                                                  v240,
                                                  v241,
                                                  v242);
      WarBoardTaskBase_TaskCallback___ctor(
        v248,
        v247,
        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
        0LL);
      v249 = (System_Int32_array **)System_Delegate__Combine(v246, (System_Delegate_o *)v248, 0LL);
      v100 = v249;
      if ( !v249 || *v249 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        p_addCount->klass = (BattleServantConfConponent_c *)v249;
        sub_B16F98(p_addCount, v249, v250, v251, v252, v253, v254, v255);
        goto LABEL_93;
      }
    }
LABEL_112:
    v342 = (WarBoardPieceData_o *)sub_B173C8(v100);
    WarBoardPieceData__get_isServant(v342, v343);
    return;
  }
  v138 = *(float *)&v349[6].klass;
  v139 = v50 + (float)(v347 * v138);
  v140 = v51 + (float)(v348 * v138);
  v141 = v52 + (float)(v111 * v138);
  v142 = UnityEngine_Component__get_gameObject(v349, 0LL);
  v143 = *(float *)&v349[5].monitor;
  v144 = v142;
  v149 = (WarBoardMovePerformance_o *)sub_B170CC(WarBoardMovePerformance_TypeInfo, v145, v146, v147, v148);
  v359.fields.x = v139;
  v359.fields.y = v140;
  v359.fields.z = v141;
  v365.fields.x = v50;
  v365.fields.y = v51;
  v365.fields.z = v52;
  v150 = (System_Int32_array **)v149;
  WarBoardMovePerformance___ctor(v149, v144, v359, v365, v143, 4, v151);
  v153 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v109,
                                                                  v152);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  if ( !*v80 )
    goto LABEL_109;
  v155 = (WarBoardMessageMaster_o *)Master_WarQuestSelectionMaster;
  warBoardData_k__BackingField = (*v80)->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_109;
  id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
  v162 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                   v158,
                                                                                                   v159,
                                                                                                   v160,
                                                                                                   v161);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v162,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( v109->fields._forceId_k__BackingField || v109->fields._groupId_k__BackingField )
  {
    v164 = 0;
    if ( !v155 )
      goto LABEL_109;
  }
  else
  {
    v164 = v109->fields._type_k__BackingField == 1;
    if ( !v155 )
      goto LABEL_109;
  }
  if ( v164 )
  {
    v165 = 11;
    v166 = 1;
    v167 = v155;
    v168 = id;
  }
  else
  {
    v165 = 9;
    v167 = v155;
    v168 = id;
    v166 = 0;
  }
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                   v167,
                   v168,
                   v165,
                   v109->fields._breakPoint_k__BackingField,
                   v166,
                   v163);
  if ( !MessageTasks )
    goto LABEL_109;
  v261 = (System_Collections_Generic_IEnumerable_T__o *)MessageTasks;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v127,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v261,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v71,
      v261,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  AttackEffectTask = (System_Int32_array **)sub_B17014(WarBoardTaskBase___TypeInfo, 5LL, v262);
  if ( !AttackEffectTask )
LABEL_109:
    sub_B170D4();
  v271 = AttackEffectTask;
  if ( v150 )
  {
    AttackEffectTask = (System_Int32_array **)sub_B170BC(v150, *(_QWORD *)&(*AttackEffectTask)->m_Items[9]);
    if ( !AttackEffectTask )
      goto LABEL_111;
  }
  if ( !*((_DWORD *)v271 + 6) )
    goto LABEL_110;
  v271[4] = (System_Int32_array *)v150;
  sub_B16F98((BattleServantConfConponent_o *)(v271 + 4), v150, v265, v266, v267, v268, v269, v270);
  pieceComponent = v109->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_109;
  v273 = *v80;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._34_GetIconPosition.method)(
    pieceComponent,
    pieceComponent->klass->vtable._35_GetIconLocalPosition.methodPtr);
  if ( !v273 )
    goto LABEL_109;
  AttackEffectTask = (System_Int32_array **)WarBoardManager__CreateAttackEffectTask(
                                              v273,
                                              *(UnityEngine_Vector3_o *)&v274,
                                              0,
                                              0LL);
  v282 = AttackEffectTask;
  if ( AttackEffectTask )
  {
    AttackEffectTask = (System_Int32_array **)sub_B170BC(AttackEffectTask, *(_QWORD *)&(*v271)->m_Items[9]);
    if ( !AttackEffectTask )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v271 + 6) <= 1u )
    goto LABEL_110;
  v271[5] = (System_Int32_array *)v282;
  sub_B16F98((BattleServantConfConponent_o *)(v271 + 5), v282, v265, v277, v278, v279, v280, v281);
  v283 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v283 )
    goto LABEL_109;
  AttackEffectTask = (System_Int32_array **)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)v283, 0LL);
  v289 = AttackEffectTask;
  if ( AttackEffectTask )
  {
    AttackEffectTask = (System_Int32_array **)sub_B170BC(AttackEffectTask, *(_QWORD *)&(*v271)->m_Items[9]);
    if ( !AttackEffectTask )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v271 + 6) <= 2u )
    goto LABEL_110;
  v271[6] = (System_Int32_array *)v289;
  sub_B16F98((BattleServantConfConponent_o *)(v271 + 6), v289, v265, v284, v285, v286, v287, v288);
  v291 = v109->fields.pieceComponent;
  if ( !v291 )
    goto LABEL_109;
  AttackEffectTask = (System_Int32_array **)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                              v291,
                                              (System_String_o *)StringLiteral_8934,
                                              v290);
  v297 = AttackEffectTask;
  if ( AttackEffectTask )
  {
    AttackEffectTask = (System_Int32_array **)sub_B170BC(AttackEffectTask, *(_QWORD *)&(*v271)->m_Items[9]);
    if ( !AttackEffectTask )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v271 + 6) <= 3u )
    goto LABEL_110;
  v271[7] = (System_Int32_array *)v297;
  sub_B16F98((BattleServantConfConponent_o *)(v271 + 7), v297, v265, v292, v293, v294, v295, v296);
  v302 = (WarBoardOrthostichySchedule_o *)sub_B170CC(WarBoardOrthostichySchedule_TypeInfo, v298, v299, v300, v301);
  WarBoardOrthostichySchedule___ctor_22145592(v302, v153, v303);
  if ( v302 )
  {
    AttackEffectTask = (System_Int32_array **)sub_B170BC(v302, *(_QWORD *)&(*v271)->m_Items[9]);
    if ( !AttackEffectTask )
    {
LABEL_111:
      sub_B170F4(AttackEffectTask);
      sub_B170A0();
    }
  }
  if ( *((_DWORD *)v271 + 6) <= 4u )
  {
LABEL_110:
    sub_B17100(AttackEffectTask, v264, v265);
    sub_B170A0();
  }
  v271[8] = (System_Int32_array *)v302;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v271 + 8),
    (System_Int32_array **)v302,
    v265,
    v304,
    v305,
    v306,
    v307,
    v308);
  v313 = sub_B170CC(WarBoardParallelSchedule_TypeInfo, v309, v310, v311, v312);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v313, 0LL);
  *(_QWORD *)(v313 + 56) = v271;
  sub_B16F98((BattleServantConfConponent_o *)(v313 + 56), v271, v314, v315, v316, v317, v318, v319);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v71,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v313,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v243 = &v71->fields._size;
LABEL_93:
  if ( *v243 < 1 )
    return;
  v320 = v71->fields._items->m_Items[0];
  if ( !v320 )
    goto LABEL_109;
  v323 = *(System_Delegate_o **)&v320->fields.addCount;
  v321 = (BattleServantConfConponent_o *)&v320->fields.addCount;
  v322 = v323;
  v324 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v324 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  v325 = v324->static_fields;
  _9__63_4 = v325->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( (BYTE3(v324->vtable._0_Equals.methodPtr) & 4) != 0 && !v324->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v324);
      v325 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v327 = (Il2CppObject *)v325->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(
                                                    WarBoardTaskBase_TaskCallback_TypeInfo,
                                                    v256,
                                                    v257,
                                                    v258,
                                                    v259);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v327, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v328 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v328->__9__63_4 = _9__63_4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v328->__9__63_4,
      (System_Int32_array **)_9__63_4,
      v329,
      v330,
      v331,
      v332,
      v333,
      v334);
  }
  v335 = (System_Int32_array **)System_Delegate__Combine(v322, (System_Delegate_o *)_9__63_4, 0LL);
  v100 = v335;
  if ( v335 && *v335 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  v321->klass = (BattleServantConfConponent_c *)v335;
  sub_B16F98(v321, v335, v336, v337, v338, v339, v340, v341);
  if ( !*v112 )
    goto LABEL_109;
  WarBoardManager__AddTask_18098600(*v112, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v71, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarBoardManager_o *v7; // x22
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v11; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v15; // s11
  float v16; // s0
  float v17; // s1
  float v18; // s2
  __int64 v19; // x8
  float v20; // s15
  float v21; // s12
  float v22; // s13
  float v23; // s14
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  MethodInfo v26; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F85E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, v5);
    byte_40F85E4 = 1;
  }
  LODWORD(v26.invoker_method) = 0;
  v26.methodPointer = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v7 = (WarBoardManager_o *)Instance;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_15;
  Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_15;
  v11 = Piece_22604968;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v28 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0LL);
  v28.fields.x = v28.fields.x - x;
  v28.fields.y = v28.fields.y - y;
  v28.fields.z = v28.fields.z - z;
  v26.methodPointer = *(Il2CppMethodPointer *)&v28.fields.x;
  *(float *)&v26.invoker_method = v28.fields.z;
  v29.fields.x = UnityEngine_Vector3__get_magnitude(v28, &v26);
  v15 = v29.fields.x;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_normalized(v29, &v26);
  if ( !v11 )
    goto LABEL_15;
  v19 = 136LL;
  if ( v11->fields._type_k__BackingField )
    v19 = 132LL;
  v20 = *(float *)((char *)&this->klass + v19);
  v21 = v16;
  v22 = v17;
  v23 = v18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
LABEL_15:
    sub_B170D4();
  v30.fields.x = x + (float)(v21 * (float)(v15 - v20));
  v30.fields.y = y + (float)(v22 * (float)(v15 - v20));
  v30.fields.z = z + (float)(v23 * (float)(v15 - v20));
  UnityEngine_Transform__set_localPosition(transform, v30, 0LL);
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnBreak(
        WarBoardPieceBaseComponent_o *this,
        int32_t oldBreakPoint,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        int32_t dummyPoint,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        bool cameraMove,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *monitor; // x8
  WarBoardUserServantData_o *v19; // x0
  __int64 v20; // x2
  WebViewManager_o *Instance; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo_29CF778 *v23; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v25; // x26
  WebViewManager_o *v26; // x27
  UnityEngine_Transform_o *v27; // x0
  const MethodInfo_29CF778 *v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x24
  _DWORD *v35; // x8
  __int64 v36; // x24
  UnityEngine_Component_c *klass; // x10
  WarBoardBreakPointComponent_o *v38; // x0
  System_Nullable_Vector3__o v39; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v40; // 0:x3.8
  System_Nullable_float__o v41; // 0:x3.8
  System_Nullable_Vector3__o v42; // 0:x0.16
  System_Nullable_Vector3__o v43; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  v14 = (UnityEngine_Component_o *)this;
  if ( (byte_40F85EB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&oldBreakPoint);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    this = (WarBoardPieceBaseComponent_o *)sub_B16FFC(&WarBoardTaskBase___TypeInfo, v17);
    byte_40F85EB = 1;
  }
  if ( cameraMove )
  {
    monitor = v14[8].monitor;
    if ( !monitor )
      goto LABEL_30;
    v19 = (WarBoardUserServantData_o *)*((_QWORD *)monitor + 21);
    if ( !v19
      || (this = (WarBoardPieceBaseComponent_o *)WarBoardUserServantData__IsBoss(v19, 0LL),
          ((unsigned __int8)this & 1) == 0) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        transform = UnityEngine_Component__get_transform(v14, 0LL);
        if ( transform )
        {
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          *(_QWORD *)&v42.fields.value.fields.x = &v39;
          *(_QWORD *)&v39.fields.value.fields.x = 0LL;
          *(_QWORD *)&v39.fields.value.fields.z = 0LL;
          *(_QWORD *)&v42.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v42, localPosition, v23);
          if ( Instance )
          {
            v40 = cameraSize;
            CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                             (WarBoardManager_o *)Instance,
                                                                                             v39,
                                                                                             v40,
                                                                                             1,
                                                                                             0,
                                                                                             1,
                                                                                             0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
              CameraPerformanceTask,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
            goto LABEL_19;
          }
        }
LABEL_30:
        sub_B170D4();
      }
      v25 = (WarBoardTaskBase_array *)sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v20);
      v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      v27 = UnityEngine_Component__get_transform(v14, 0LL);
      if ( !v27 )
        goto LABEL_30;
      v45 = UnityEngine_Transform__get_localPosition(v27, 0LL);
      *(_QWORD *)&v43.fields.value.fields.x = &v39;
      v39 = (System_Nullable_Vector3__o)0LL;
      *(_QWORD *)&v43.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v43, v45, v28);
      if ( !v26 )
        goto LABEL_30;
      v41 = cameraSize;
      this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                               (WarBoardManager_o *)v26,
                                               v39,
                                               v41,
                                               1,
                                               0,
                                               1,
                                               0LL);
      if ( !v25 )
        goto LABEL_30;
      v34 = (System_Int32_array **)this;
      if ( this )
      {
        this = (WarBoardPieceBaseComponent_o *)sub_B170BC(this, v25->obj.klass->_1.element_class);
        if ( !this )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( !v25->max_length )
      {
LABEL_32:
        sub_B17100(this, *(_QWORD *)&oldBreakPoint, cameraSize);
        sub_B170A0();
      }
      v25->m_Items[0] = (WarBoardTaskBase_o *)v34;
      sub_B16F98(
        (BattleServantConfConponent_o *)v25->m_Items,
        v34,
        *(System_String_array ***)&cameraSize,
        v29,
        v30,
        v31,
        v32,
        v33);
      if ( !Instance )
        goto LABEL_30;
      WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v25, 0LL);
    }
  }
LABEL_19:
  v35 = v14[8].monitor;
  if ( !v35 )
    goto LABEL_30;
  v36 = 0LL;
  if ( dummyPoint < 0 )
    dummyPoint = v35[13];
  while ( (int)v36 < v35[14] )
  {
    klass = v14[8].klass;
    if ( !klass )
      goto LABEL_30;
    if ( (unsigned int)v36 >= LODWORD(klass->_1.namespaze) )
      goto LABEL_32;
    v38 = (WarBoardBreakPointComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v36);
    if ( v38 )
    {
      if ( (int)v36 >= oldBreakPoint || dummyPoint > (int)v36 )
      {
        WarBoardBreakPointComponent__SetActive(v38, dummyPoint > (int)v36, 0, 0LL);
      }
      else
      {
        WarBoardBreakPointComponent__OnBreak(
          v38,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)taskList,
          startCallback,
          0LL);
        startCallback = 0LL;
      }
      v35 = v14[8].monitor;
      ++v36;
      if ( v35 )
        continue;
    }
    goto LABEL_30;
  }
}


void __fastcall WarBoardPieceBaseComponent__OnDamage(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnDead(
        WarBoardPieceBaseComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  int32_t v6; // w1
  const MethodInfo *v7; // x2

  if ( (byte_40F85E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F85E0 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
    sub_B170D4();
  v6 = 20 * (dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(monitor, 0LL));
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, v6, v7);
}


void __fastcall WarBoardPieceBaseComponent__OnGuts(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnInvincible(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnMapDamage(
        WarBoardPieceBaseComponent_o *this,
        int32_t damage,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnMapGainHP(
        WarBoardPieceBaseComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnMove(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x19
  System_Int32_array **Instance; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WarBoardManager_o **v31; // x20
  WarBoardData_o *v32; // x0
  System_Int32_array **Piece_22604968; // x0
  WarBoardPieceData_o **v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x8
  WarBoardData_o *v42; // x0
  System_Int32_array **Square; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x25
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Delegate_o *v59; // x26
  WarBoardTaskBase_TaskCallback_o *v60; // x27
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x8
  __int64 v69; // x2
  __int64 v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v78; // x1
  int v79; // w9
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  __int64 v84; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  struct WarBoardPieceData_o *v86; // x8
  UnityEngine_GameObject_o *v87; // x26
  WarBoardManager_o *v88; // x0
  float v89; // s0
  float v90; // s1
  float v91; // s2
  float v92; // s8
  float v93; // s9
  float v94; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  WarBoardMovePerformance_o *v103; // x0
  WarBoardMovePerformance_o *v104; // x27
  const MethodInfo *v105; // x3
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x26
  UnityEngine_Component_o *pieceComponent; // x0
  UnityEngine_GameObject_o *v117; // x0
  UnityEngine_GameObject_o *v118; // x27
  float v119; // s0
  float v120; // s1
  float v121; // s2
  struct WarBoardPieceData_o *v122; // x8
  float v123; // s8
  float v124; // s9
  float v125; // s10
  float v126; // s13
  float v127; // s11
  float v128; // s12
  float v129; // s14
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  WarBoardMovePerformance_o *v134; // x0
  System_Int32_array **v135; // x28
  const MethodInfo *v136; // x3
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  int32_t v147; // w28
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  __int64 v152; // x25
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x3
  __int64 v162; // x4
  System_Delegate_o *v163; // x24
  WarBoardTaskBase_TaskCallback_o *v164; // x27
  System_Int32_array **v165; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Collections_Generic_List_WarBoardTaskBase__o *v172; // x26
  __int64 v173; // x1
  __int64 v174; // x2
  __int64 v175; // x3
  __int64 v176; // x4
  struct WarBoardPieceData_o *v177; // x8
  System_Delegate_o *EndCallback; // x28
  WarBoardTaskBase_TaskCallback_o *v179; // x24
  System_Int32_array **v180; // x0
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  struct WarBoardPieceData_o *v187; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v188; // x22
  const MethodInfo *v189; // x1
  WarBoardPieceData_o *v190; // x0
  System_Int32_array **PieceEventVals; // x0
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  WebViewManager_o *v198; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  const MethodInfo *v200; // x1
  System_Int32_array *v201; // x21
  WebViewManager_o *v202; // x0
  System_Collections_Generic_IEnumerable_T__o *v203; // x0
  WebViewManager_o *v204; // x0
  System_Collections_Generic_IEnumerable_T__o *v205; // x0
  WarBoardManager_o *v206; // x20
  __int64 v207; // x2
  WarBoardTaskBase_array *v208; // x21
  __int64 v209; // x1
  __int64 v210; // x2
  __int64 v211; // x3
  __int64 v212; // x4
  __int64 v213; // x22
  __int64 v214; // x1
  __int64 v215; // x2
  __int64 v216; // x3
  __int64 v217; // x4
  WarBoardTaskBase_TaskCallback_o *v218; // x23
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  WebViewManager_o *v230; // x0
  WarBoardPieceData_o *v231; // x0
  const MethodInfo *v232; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v233; // [xsp+18h] [xbp-88h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v235; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v236; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v237; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v238; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v239; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F85E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v13);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__, v14);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__, v15);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__, v16);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__, v17);
    sub_B16FFC(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, v18);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v19);
    sub_B16FFC(&WarBoardMovePerformance_TypeInfo, v20);
    sub_B16FFC(&WarBoardParallelSchedule_TypeInfo, v21);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v22);
    byte_40F85E1 = 1;
  }
  v23 = sub_B170CC(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3, v4);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v23,
    0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v23 )
    goto LABEL_64;
  *(_QWORD *)(v23 + 48) = Instance;
  v31 = (WarBoardManager_o **)(v23 + 48);
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 48), Instance, v25, v26, v27, v28, v29, v30);
  if ( !*(_QWORD *)(v23 + 48) )
    goto LABEL_64;
  v32 = *(WarBoardData_o **)(*(_QWORD *)(v23 + 48) + 424LL);
  if ( !v32 )
    goto LABEL_64;
  Piece_22604968 = (System_Int32_array **)WarBoardData__GetPiece_22604968(v32, squareIndex, 0LL);
  *(_QWORD *)(v23 + 40) = Piece_22604968;
  v34 = (WarBoardPieceData_o **)(v23 + 40);
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 40), Piece_22604968, v35, v36, v37, v38, v39, v40);
  v41 = *(_QWORD *)(v23 + 48);
  if ( !v41 )
    goto LABEL_64;
  v42 = *(WarBoardData_o **)(v41 + 424);
  if ( !v42 )
    goto LABEL_64;
  Square = (System_Int32_array **)WarBoardData__GetSquare(v42, squareIndex, 0LL);
  *(_QWORD *)(v23 + 16) = Square;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), Square, v44, v45, v46, v47, v48, v49);
  v54 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v50, v51, v52, v53);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v54, 0LL, 0LL);
  if ( !v54 )
    goto LABEL_64;
  v59 = *(System_Delegate_o **)(v54 + 32);
  v60 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v55, v56, v57, v58);
  WarBoardTaskBase_TaskCallback___ctor(
    v60,
    (Il2CppObject *)v23,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v61 = (System_Int32_array **)System_Delegate__Combine(v59, (System_Delegate_o *)v60, 0LL);
  v68 = v61;
  if ( !v61 || *v61 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v54 + 32) = v61;
    sub_B16F98((BattleServantConfConponent_o *)(v54 + 32), v61, v62, v63, v64, v65, v66, v67);
    v70 = sub_B17014(int___TypeInfo, 2LL, v69);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_64;
    v78 = v70;
    if ( !v70 )
      goto LABEL_64;
    v79 = *(_DWORD *)(v70 + 24);
    if ( !v79 )
      goto LABEL_65;
    *(_DWORD *)(v70 + 32) = pieceData->fields._nowSquareIndex_k__BackingField;
    if ( v79 == 1 )
      goto LABEL_65;
    *(_DWORD *)(v70 + 36) = squareIndex;
    *(_QWORD *)(v23 + 24) = v70;
    sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
    v233 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                     v80,
                                                                                                     v81,
                                                                                                     v82,
                                                                                                     v83);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v233,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    v84 = *(_QWORD *)(v23 + 40);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v86 = this->fields.pieceData;
    if ( !v86 )
      goto LABEL_64;
    v87 = gameObject;
    v88 = *(WarBoardManager_o **)(v23 + 48);
    if ( !v88 )
      goto LABEL_64;
    *(UnityEngine_Vector3_o *)&v89 = WarBoardManager__GetSquarePosition(
                                       v88,
                                       v86->fields._nowSquareIndex_k__BackingField,
                                       0LL);
    if ( !*v31 )
      goto LABEL_64;
    v92 = v89;
    v93 = v90;
    v94 = v91;
    SquarePosition = WarBoardManager__GetSquarePosition(*v31, squareIndex, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    x = SquarePosition.fields.x;
    y = SquarePosition.fields.y;
    z = SquarePosition.fields.z;
    v103 = (WarBoardMovePerformance_o *)sub_B170CC(WarBoardMovePerformance_TypeInfo, v99, v100, v101, v102);
    v235.fields.x = v92;
    v235.fields.y = v93;
    v235.fields.z = v94;
    v238.fields.x = x;
    v238.fields.y = y;
    v238.fields.z = z;
    v104 = v103;
    WarBoardMovePerformance___ctor(v103, v87, v235, v238, pixelPerSecond, 0, v105);
    if ( v84 )
    {
      v70 = sub_B17014(WarBoardTaskBase___TypeInfo, 3LL, v107);
      if ( !v70 )
        goto LABEL_64;
      v115 = (System_Int32_array **)v70;
      if ( v104 )
      {
        v70 = sub_B170BC(v104, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
        if ( !v70 )
          goto LABEL_66;
      }
      if ( !*((_DWORD *)v115 + 6) )
        goto LABEL_65;
      v115[4] = (System_Int32_array *)v104;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v115 + 4),
        (System_Int32_array **)v104,
        v71,
        v110,
        v111,
        v112,
        v113,
        v114);
      if ( !*v34 )
        goto LABEL_64;
      pieceComponent = (UnityEngine_Component_o *)(*v34)->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_64;
      v117 = UnityEngine_Component__get_gameObject(pieceComponent, 0LL);
      if ( !*v31 )
        goto LABEL_64;
      v118 = v117;
      *(UnityEngine_Vector3_o *)&v119 = WarBoardManager__GetSquarePosition(*v31, squareIndex, 0LL);
      v122 = this->fields.pieceData;
      if ( !v122 || !*v31 )
        goto LABEL_64;
      v123 = v119;
      v124 = v120;
      v125 = v121;
      v236 = WarBoardManager__GetSquarePosition(*v31, v122->fields._nowSquareIndex_k__BackingField, 0LL);
      v126 = this->fields.pixelPerSecond;
      v127 = v236.fields.x;
      v128 = v236.fields.y;
      v129 = v236.fields.z;
      v134 = (WarBoardMovePerformance_o *)sub_B170CC(WarBoardMovePerformance_TypeInfo, v130, v131, v132, v133);
      v237.fields.x = v123;
      v237.fields.y = v124;
      v237.fields.z = v125;
      v239.fields.x = v127;
      v239.fields.y = v128;
      v239.fields.z = v129;
      v135 = (System_Int32_array **)v134;
      WarBoardMovePerformance___ctor(v134, v118, v237, v239, v126, 0, v136);
      if ( v135 )
      {
        v70 = sub_B170BC(v135, *(_QWORD *)&(*v115)->m_Items[9]);
        if ( !v70 )
          goto LABEL_66;
      }
      if ( *((_DWORD *)v115 + 6) <= 1u )
        goto LABEL_65;
      v115[5] = (System_Int32_array *)v135;
      sub_B16F98((BattleServantConfConponent_o *)(v115 + 5), v135, v71, v137, v138, v139, v140, v141);
      v70 = sub_B170BC(v54, *(_QWORD *)&(*v115)->m_Items[9]);
      if ( !v70 )
        goto LABEL_66;
      if ( *((_DWORD *)v115 + 6) <= 2u )
        goto LABEL_65;
      v115[6] = (System_Int32_array *)v54;
      v147 = squareIndex;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v115 + 6),
        (System_Int32_array **)v54,
        v71,
        v142,
        v143,
        v144,
        v145,
        v146);
      v152 = sub_B170CC(WarBoardParallelSchedule_TypeInfo, v148, v149, v150, v151);
      WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v152, 0LL);
      *(_QWORD *)(v152 + 56) = v115;
      sub_B16F98((BattleServantConfConponent_o *)(v152 + 56), v115, v153, v154, v155, v156, v157, v158);
      if ( !v152 )
        goto LABEL_64;
      v163 = *(System_Delegate_o **)(v152 + 40);
      v164 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(
                                                  WarBoardTaskBase_TaskCallback_TypeInfo,
                                                  v159,
                                                  v160,
                                                  v161,
                                                  v162);
      WarBoardTaskBase_TaskCallback___ctor(
        v164,
        (Il2CppObject *)v23,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
        0LL);
      v165 = (System_Int32_array **)System_Delegate__Combine(v163, (System_Delegate_o *)v164, 0LL);
      v68 = v165;
      if ( !v165 || *v165 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        *(_QWORD *)(v152 + 40) = v165;
        sub_B16F98((BattleServantConfConponent_o *)(v152 + 40), v165, v166, v167, v168, v169, v170, v171);
        v172 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v233;
        if ( !v233 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v233,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v152,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v177 = this->fields.pieceData;
        if ( !v177 || !*v34 )
          goto LABEL_64;
        (*v34)->fields._nowSquareIndex_k__BackingField = v177->fields._nowSquareIndex_k__BackingField;
LABEL_45:
        v187 = this->fields.pieceData;
        if ( !v187 )
          goto LABEL_64;
        v187->fields._nowSquareIndex_k__BackingField = v147;
        v188 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v173, v174, v175, v176);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v188,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
        v190 = this->fields.pieceData;
        if ( !v190 )
          goto LABEL_64;
        PieceEventVals = (System_Int32_array **)WarBoardPieceData__CreatePieceEventVals(v190, v189);
        *(_QWORD *)(v23 + 32) = PieceEventVals;
        sub_B16F98((BattleServantConfConponent_o *)(v23 + 32), PieceEventVals, v192, v193, v194, v195, v196, v197);
        v198 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !v198 )
          goto LABEL_64;
        EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                      (WarBoardManager_o *)v198,
                                                                      30,
                                                                      *(System_Int32_array **)(v23 + 32),
                                                                      0LL);
        if ( !v188 )
          goto LABEL_64;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v188,
          EventTasks,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( *v34 )
        {
          v201 = WarBoardPieceData__CreatePieceEventVals(*v34, v200);
          v202 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v202 )
            goto LABEL_64;
          v203 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                  (WarBoardManager_o *)v202,
                                                                  30,
                                                                  v201,
                                                                  0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v188,
            v203,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        }
        v204 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !v204 )
          goto LABEL_64;
        v205 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)v204,
                                                                36,
                                                                0LL,
                                                                0LL);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v188,
          v205,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v188,
               (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
        {
          if ( !*v31 )
            goto LABEL_64;
          WarBoardManager__AddTask_18098600(*v31, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v188, 0LL);
        }
        if ( !*v31 )
          goto LABEL_64;
        WarBoardManager__AddTask_18098600(*v31, 0, v172, 0LL);
        v206 = *(WarBoardManager_o **)(v23 + 48);
        v208 = (WarBoardTaskBase_array *)sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v207);
        v213 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v209, v210, v211, v212);
        WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v213, 0LL, 0LL);
        v218 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(
                                                    WarBoardTaskBase_TaskCallback_TypeInfo,
                                                    v214,
                                                    v215,
                                                    v216,
                                                    v217);
        WarBoardTaskBase_TaskCallback___ctor(
          v218,
          (Il2CppObject *)v23,
          Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
          0LL);
        if ( !v213
          || (*(_QWORD *)(v213 + 32) = v218,
              sub_B16F98(
                (BattleServantConfConponent_o *)(v213 + 32),
                (System_Int32_array **)v218,
                v219,
                v220,
                v221,
                v222,
                v223,
                v224),
              !v208) )
        {
LABEL_64:
          sub_B170D4();
        }
        v70 = sub_B170BC(v213, v208->obj.klass->_1.element_class);
        if ( v70 )
        {
          if ( v208->max_length )
          {
            v208->m_Items[0] = (WarBoardTaskBase_o *)v213;
            sub_B16F98(
              (BattleServantConfConponent_o *)v208->m_Items,
              (System_Int32_array **)v213,
              v71,
              v225,
              v226,
              v227,
              v228,
              v229);
            if ( v206 )
            {
              WarBoardManager__AddTask(v206, 0, v208, 0LL);
              v230 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( v230 )
              {
                WarBoardManager__JudgmentGameSet((WarBoardManager_o *)v230, 0LL);
                return;
              }
            }
            goto LABEL_64;
          }
LABEL_65:
          sub_B17100(v70, v78, v71);
          sub_B170A0();
        }
LABEL_66:
        sub_B170F4(v70);
        sub_B170A0();
      }
    }
    else
    {
      if ( !v104 )
        goto LABEL_64;
      EndCallback = (System_Delegate_o *)v104->fields.EndCallback;
      v179 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(
                                                  WarBoardTaskBase_TaskCallback_TypeInfo,
                                                  v106,
                                                  v107,
                                                  v108,
                                                  v109);
      WarBoardTaskBase_TaskCallback___ctor(
        v179,
        (Il2CppObject *)v23,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
        0LL);
      v180 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v179, 0LL);
      v68 = v180;
      if ( !v180 || *v180 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        v104->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v180;
        sub_B16F98((BattleServantConfConponent_o *)&v104->fields.EndCallback, v180, v181, v182, v183, v184, v185, v186);
        v172 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v233;
        if ( !v233 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v233,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v104,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v233,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v147 = squareIndex;
        goto LABEL_45;
      }
    }
  }
  v231 = (WarBoardPieceData_o *)sub_B173C8(v68);
  WarBoardPieceData__get_gameObject(v231, v232);
}


void __fastcall WarBoardPieceBaseComponent__OnRevive(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( (byte_40F85DF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F85DF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
    sub_B170D4();
  v5 = 20 * (WarBoardData__GetPieceMaxDispPriotiry(monitor, 0LL) - this->fields.dispPriotiry);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, v5, v6);
}


void __fastcall WarBoardPieceBaseComponent__OnShowDamagePopup(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_String_o *v8; // x1
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_40F85ED & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18113, popText);
    byte_40F85ED = 1;
  }
  if ( !System_String__IsNullOrEmpty(popText, 0LL) )
    WarBoardPieceBaseComponent__CreateEffectText(this, v8, popText, v9, taskList, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v20; // x23
  WebViewManager_o *Instance; // x0
  WarBoardManager_o *v22; // x19
  WarBoardData_o *monitor; // x0
  WarBoardWallData_o *Wall; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v26; // x21
  float x; // s14
  float y; // s15
  float z; // s8
  float v30; // s0
  float v31; // s1
  float v32; // s2
  WarBoardData_o *warBoardData_k__BackingField; // x0
  float v34; // s11
  float v35; // s12
  float v36; // s13
  System_Int32_array **Square; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x24
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Delegate_o *v58; // x26
  WarBoardTaskBase_TaskCallback_o *v59; // x27
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  float v67; // s13
  float v68; // s1
  float v69; // s2
  float v70; // s0
  float v71; // s11
  float v72; // s12
  float v73; // s0
  float v74; // s13
  float v75; // s9
  float v76; // s10
  UnityEngine_GameObject_o *gameObject; // x23
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  WarBoardMovePerformance_o *v82; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v83; // x24
  const MethodInfo *v84; // x3
  float lengthMoveAttack; // s0
  float v86; // s10
  float v87; // s11
  float v88; // s12
  UnityEngine_GameObject_o *v89; // x0
  float v90; // s13
  UnityEngine_GameObject_o *v91; // x22
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  WarBoardMovePerformance_o *v96; // x0
  System_Int32_array **v97; // x24
  const MethodInfo *v98; // x3
  System_Collections_Generic_List_WarBoardTaskBase__o *v99; // x22
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v104; // x23
  WebViewManager_o *v105; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  __int64 v107; // x2
  System_Int32_array **AttackEffectTask; // x0
  __int64 v109; // x1
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x23
  WarBoardWallComponent_o *component; // x0
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x21
  WebViewManager_o *v124; // x0
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x21
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x4
  WarBoardOrthostichySchedule_o *v135; // x21
  const MethodInfo *v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  __int64 v146; // x21
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  WarBoardPieceBaseComponent_o *v153; // x0
  int32_t v154; // w1
  const MethodInfo *v155; // x2
  float pixelPerSecond; // [xsp+8h] [xbp-A8h]
  float v157; // [xsp+Ch] [xbp-A4h]
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v166; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F85E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__, v13);
    sub_B16FFC(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, v14);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v15);
    sub_B16FFC(&WarBoardMovePerformance_TypeInfo, v16);
    sub_B16FFC(&WarBoardOrthostichySchedule_TypeInfo, v17);
    sub_B16FFC(&WarBoardParallelSchedule_TypeInfo, v18);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v19);
    byte_40F85E6 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v20 = sub_B170CC(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3, v4);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v20,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v22 = (WarBoardManager_o *)Instance;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_35;
  Wall = WarBoardData__GetWall(monitor, squareIndex, 0, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_35;
  v26 = Wall;
  SquarePosition = WarBoardManager__GetSquarePosition(v22, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  *(UnityEngine_Vector3_o *)&v30 = WarBoardManager__GetSquarePosition(v22, squareIndex, 0LL);
  warBoardData_k__BackingField = v22->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_35;
  v34 = v30;
  v35 = v31;
  v36 = v32;
  Square = (System_Int32_array **)WarBoardData__GetSquare(warBoardData_k__BackingField, squareIndex, 0LL);
  if ( !v20 )
    goto LABEL_35;
  *(_QWORD *)(v20 + 16) = Square;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), Square, v38, v39, v40, v41, v42, v43);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46,
                                                                                                  v47);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v53 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v49, v50, v51, v52);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v53, 0LL, 0LL);
  if ( !v53 )
    goto LABEL_35;
  v58 = *(System_Delegate_o **)(v53 + 32);
  v59 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v54, v55, v56, v57);
  WarBoardTaskBase_TaskCallback___ctor(
    v59,
    (Il2CppObject *)v20,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v60 = (System_Int32_array **)System_Delegate__Combine(v58, (System_Delegate_o *)v59, 0LL);
  if ( v60 && *v60 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v153 = (WarBoardPieceBaseComponent_o *)sub_B173C8(v60);
    WarBoardPieceBaseComponent__OnAfterWallAttack(v153, v154, v155);
    return;
  }
  *(_QWORD *)(v53 + 32) = v60;
  sub_B16F98((BattleServantConfConponent_o *)(v53 + 32), v60, v61, v62, v63, v64, v65, v66);
  if ( !v48 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v48,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v160.fields.x = v34 - x;
  v160.fields.y = v35 - y;
  v160.fields.z = v36 - z;
  *(float *)&methoda.methodPointer = v34 - x;
  *((float *)&methoda.methodPointer + 1) = v35 - y;
  *(float *)&methoda.invoker_method = v36 - z;
  v161.fields.x = UnityEngine_Vector3__get_magnitude(v160, &methoda);
  v67 = v161.fields.x;
  *(UnityEngine_Vector3_o *)(&v68 - 1) = UnityEngine_Vector3__get_normalized(v161, &methoda);
  v71 = v70;
  v72 = v68;
  v73 = v67 - this->fields.lengthOnAttack;
  v74 = v69;
  if ( v73 > 0.0 )
  {
    v75 = x + (float)(v71 * v73);
    v157 = y + (float)(v68 * v73);
    v76 = z + (float)(v69 * v73);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v82 = (WarBoardMovePerformance_o *)sub_B170CC(WarBoardMovePerformance_TypeInfo, v78, v79, v80, v81);
    v162.fields.y = y;
    y = v157;
    v162.fields.x = x;
    v162.fields.z = z;
    v165.fields.x = v75;
    v165.fields.y = v157;
    v165.fields.z = v76;
    v83 = (EventMissionProgressRequest_Argument_ProgressData_o *)v82;
    WarBoardMovePerformance___ctor(v82, gameObject, v162, v165, pixelPerSecond, 5, v84);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v48,
      v83,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    x = v75;
    z = v76;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v86 = x + (float)(v71 * lengthMoveAttack);
  v87 = y + (float)(v72 * lengthMoveAttack);
  v88 = z + (float)(v74 * lengthMoveAttack);
  v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v90 = this->fields.pixelPerSecond;
  v91 = v89;
  v96 = (WarBoardMovePerformance_o *)sub_B170CC(WarBoardMovePerformance_TypeInfo, v92, v93, v94, v95);
  v163.fields.x = v86;
  v163.fields.y = v87;
  v163.fields.z = v88;
  v166.fields.x = x;
  v166.fields.y = y;
  v166.fields.z = z;
  v97 = (System_Int32_array **)v96;
  WarBoardMovePerformance___ctor(v96, v91, v163, v166, v90, 4, v98);
  if ( !v26 )
    goto LABEL_35;
  v99 = WarBoardWallData__DecrementBreakPointPerformance(v26, 1, 0LL);
  v104 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                   v100,
                                                                                                   v101,
                                                                                                   v102,
                                                                                                   v103);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v104,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v105 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v105 )
    goto LABEL_35;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)v105,
                                                                26,
                                                                0LL,
                                                                0LL);
  if ( !v104 )
    goto LABEL_35;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v104,
    EventTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v48,
    (System_Collections_Generic_IEnumerable_T__o *)v104,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  AttackEffectTask = (System_Int32_array **)sub_B17014(WarBoardTaskBase___TypeInfo, 4LL, v107);
  if ( !AttackEffectTask )
    goto LABEL_35;
  v116 = AttackEffectTask;
  if ( v97 )
  {
    AttackEffectTask = (System_Int32_array **)sub_B170BC(v97, *(_QWORD *)&(*AttackEffectTask)->m_Items[9]);
    if ( !AttackEffectTask )
      goto LABEL_37;
  }
  if ( !*((_DWORD *)v116 + 6) )
    goto LABEL_36;
  v116[4] = (System_Int32_array *)v97;
  sub_B16F98((BattleServantConfConponent_o *)(v116 + 4), v97, v110, v111, v112, v113, v114, v115);
  component = v26->fields.component;
  if ( !component )
    goto LABEL_35;
  IconPosition = WarBoardWallComponent__GetIconPosition(component, 0LL);
  AttackEffectTask = (System_Int32_array **)WarBoardManager__CreateAttackEffectTask(v22, IconPosition, 0, 0LL);
  v123 = AttackEffectTask;
  if ( AttackEffectTask )
  {
    AttackEffectTask = (System_Int32_array **)sub_B170BC(AttackEffectTask, *(_QWORD *)&(*v116)->m_Items[9]);
    if ( !AttackEffectTask )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v116 + 6) <= 1u )
    goto LABEL_36;
  v116[5] = (System_Int32_array *)v123;
  sub_B16F98((BattleServantConfConponent_o *)(v116 + 5), v123, v110, v118, v119, v120, v121, v122);
  v124 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v124 )
LABEL_35:
    sub_B170D4();
  AttackEffectTask = (System_Int32_array **)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)v124, 0LL);
  v130 = AttackEffectTask;
  if ( AttackEffectTask )
  {
    AttackEffectTask = (System_Int32_array **)sub_B170BC(AttackEffectTask, *(_QWORD *)&(*v116)->m_Items[9]);
    if ( !AttackEffectTask )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v116 + 6) <= 2u )
    goto LABEL_36;
  v116[6] = (System_Int32_array *)v130;
  sub_B16F98((BattleServantConfConponent_o *)(v116 + 6), v130, v110, v125, v126, v127, v128, v129);
  v135 = (WarBoardOrthostichySchedule_o *)sub_B170CC(WarBoardOrthostichySchedule_TypeInfo, v131, v132, v133, v134);
  WarBoardOrthostichySchedule___ctor_22145592(v135, v99, v136);
  if ( v135 )
  {
    AttackEffectTask = (System_Int32_array **)sub_B170BC(v135, *(_QWORD *)&(*v116)->m_Items[9]);
    if ( !AttackEffectTask )
    {
LABEL_37:
      sub_B170F4(AttackEffectTask);
      sub_B170A0();
    }
  }
  if ( *((_DWORD *)v116 + 6) <= 3u )
  {
LABEL_36:
    sub_B17100(AttackEffectTask, v109, v110);
    sub_B170A0();
  }
  v116[7] = (System_Int32_array *)v135;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v116 + 7),
    (System_Int32_array **)v135,
    v110,
    v137,
    v138,
    v139,
    v140,
    v141);
  v146 = sub_B170CC(WarBoardParallelSchedule_TypeInfo, v142, v143, v144, v145);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v146, 0LL);
  *(_QWORD *)(v146 + 56) = v116;
  sub_B16F98((BattleServantConfConponent_o *)(v146 + 56), v116, v147, v148, v149, v150, v151, v152);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v48,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v146,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( v48->fields._size >= 1 )
    WarBoardManager__AddTask_18098600(v22, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v48, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent__PlayEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 1, v3);
}


void __fastcall WarBoardPieceBaseComponent__PlaySimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v6; // x2
  SimpleAnimation_o *v7; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_5;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0LL) )
    return;
  WarBoardPieceBaseComponent__StopSimpleAnimation(this, animationName, v6);
  v7 = this->fields.simpleAnimation;
  if ( !v7 )
LABEL_5:
    sub_B170D4();
  SimpleAnimation__Play_16380456(v7, animationName, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__RepareBreakPointByPiece(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  int breakPoint_k__BackingField; // w20
  __int64 v6; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  WarBoardBreakPointComponent_o *v8; // x0

  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_8:
    sub_B170D4();
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v6 = 0LL;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= breakPoints->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = breakPoints->m_Items[v6];
      if ( v8 )
      {
        WarBoardBreakPointComponent__SetActive(v8, breakPoint_k__BackingField > (int)v6, 0, 0LL);
        pieceData = this->fields.pieceData;
        ++v6;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void __fastcall WarBoardPieceBaseComponent__Selectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 1;
}


void __fastcall WarBoardPieceBaseComponent__SetButtonTweenTarget(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  signed int max_length; // w8
  unsigned int v17; // w24
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x8
  WarBoardControlPlayTalkUiComponent_array *v20; // x22
  unsigned __int64 v21; // x19
  UnityEngine_Object_o *v22; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct UICommonButton_o *button; // x19
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F85D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, parents);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F85D6 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  parents,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
          goto LABEL_25;
        v18 = (UnityEngine_Component_o *)parents->m_Items[v17];
        if ( !v18 )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    v18,
                                                                    1,
                                                                    (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          v19 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
          v20 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)v19 >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_22;
      }
      v21 = 0LL;
      while ( v21 < (unsigned int)v19 )
      {
        v22 = (UnityEngine_Object_o *)v20->m_Items[v21];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_26;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
          if ( !v12 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains((System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12, (WarBoardManager_TaskList_o *)gameObject, (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(v19) = v20->max_length;
        if ( (__int64)++v21 >= (int)v19 )
          goto LABEL_21;
      }
LABEL_25:
      sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v14, v15);
      sub_B170A0();
    }
  }
LABEL_22:
  if ( !v12
    || (button = this->fields.button,
        v26 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B170D4();
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&button->fields.tweenTargets, v26, v27, v28, v29, v30, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_40F85D8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40F85D8 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B170D4();
    if ( enable )
    {
      v7 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0LL);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v6, 0, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardPieceBaseComponent__SetEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *listEffectData; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x21
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  struct UnityEngine_Renderer_o *renderer; // x21
  UnityEngine_Renderer_c *klass; // x8
  unsigned __int64 v31; // x22
  bool v32; // w19
  UnityEngine_Object_o *v33; // x20

  if ( (byte_40F85EC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__, effectKey);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v9);
    sub_B16FFC(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__, v11);
    sub_B16FFC(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, v12);
    byte_40F85EC = 1;
  }
  v13 = sub_B170CC(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, effectKey, isDisp, method, v4);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 16) = effectKey;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)effectKey, v14, v15, v16, v17, v18, v19);
  listEffectData = this->fields.listEffectData;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo,
                                                                   v21,
                                                                   v22,
                                                                   v23,
                                                                   v24);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v13,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  if ( !listEffectData )
    goto LABEL_20;
  v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEffectData,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  if ( !v26 )
    return (char)v26;
  renderer = v26->fields.renderer;
  if ( !renderer )
LABEL_20:
    sub_B170D4();
  klass = renderer[1].klass;
  if ( (int)klass >= 1 )
  {
    v31 = 0LL;
    v32 = isDisp;
    do
    {
      if ( v31 >= (unsigned int)klass )
      {
        sub_B17100(v26, v27, v28);
        sub_B170A0();
      }
      v33 = (UnityEngine_Object_o *)*((_QWORD *)&renderer[1].monitor + v31);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v26 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
      if ( ((unsigned __int8)v26 & 1) == 0 )
      {
        if ( !v33 )
          goto LABEL_20;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v33, v32, 0LL);
      }
      LODWORD(klass) = renderer[1].klass;
      ++v31;
    }
    while ( (__int64)v31 < (int)klass );
  }
  LOBYTE(v26) = 1;
  return (char)v26;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_40F85D7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40F85D7 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B170D4();
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__ShowActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  WarBoardCost_o *Cost_k__BackingField; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x20
  bool activeSelf; // w0
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x10
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F85DA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F85DA = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_25;
  if ( pieceData->fields._limitActionCount_k__BackingField >= 1 )
  {
    currentActionPointRoot = this->fields.currentActionPointRoot;
    if ( !currentActionPointRoot )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(currentActionPointRoot, 1, 0LL);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_25;
  }
  Cost_k__BackingField = pieceData->fields._Cost_k__BackingField;
  if ( !Cost_k__BackingField )
    goto LABEL_25;
  if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
    {
      v7 = this->fields.currentPieceActionPointRoot;
      if ( v7 )
      {
        UnityEngine_GameObject__SetActive(v7, 1, 0LL);
        v8 = this->fields.currentActionPointRoot;
        if ( v8 )
        {
          v9 = this->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf(v8, 0LL);
          v11 = 96LL;
          if ( activeSelf )
            v11 = 108LL;
          if ( activeSelf )
            v12 = 112LL;
          else
            v12 = 100LL;
          if ( activeSelf )
            v13 = 116LL;
          else
            v13 = 104LL;
          v14.fields.y = *(float *)((char *)&this->klass + v12);
          v14.fields.x = *(float *)((char *)&this->klass + v11);
          v14.fields.z = *(float *)((char *)&this->klass + v13);
          GameObjectExtensions__SetLocalPosition(v9, v14, 0LL);
          goto LABEL_24;
        }
      }
LABEL_25:
      sub_B170D4();
    }
  }
LABEL_24:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__ShowActionTarget(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(selectObject, 1, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent__ShowStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall WarBoardPieceBaseComponent__StopEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 0, v3);
}


void __fastcall WarBoardPieceBaseComponent__StopSimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  SimpleAnimation_o *v6; // x0
  SimpleAnimation_o *v7; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_7;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0LL) )
  {
    v6 = this->fields.simpleAnimation;
    if ( v6 )
    {
      SimpleAnimation__Stop_16377956(v6, animationName, 0LL);
      v7 = this->fields.simpleAnimation;
      if ( v7 )
      {
        SimpleAnimation__Rewind(v7, 0LL);
        return;
      }
    }
LABEL_7:
    sub_B170D4();
  }
}


void __fastcall WarBoardPieceBaseComponent__Unselectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardPieceBaseComponent__UpdateDisplayActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8
  UILabel_o *currentActionPointLabel; // x20
  System_String_o *v5; // x0
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardPieceData_o *v7; // x8
  struct WarBoardCost_o *v8; // x8
  UILabel_o *currentPieceActionPointLabel; // x20
  System_String_o *v10; // x0
  int32_t currentActionCount_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  currentActionCount_k__BackingField = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_12;
  if ( pieceData->fields._limitActionCount_k__BackingField >= 1 )
  {
    currentActionPointLabel = this->fields.currentActionPointLabel;
    currentActionCount_k__BackingField = pieceData->fields._currentActionCount_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0LL);
    if ( !currentActionPointLabel )
      goto LABEL_12;
    UILabel__set_text(currentActionPointLabel, v5, 0LL);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_12;
  }
  Cost_k__BackingField = pieceData->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    v7 = this->fields.pieceData;
    if ( v7 )
    {
      v8 = v7->fields._Cost_k__BackingField;
      if ( v8 )
      {
        currentPieceActionPointLabel = this->fields.currentPieceActionPointLabel;
        currentActionCount_k__BackingField = v8->fields._CurrentActionPoint_k__BackingField;
        v10 = System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0LL);
        if ( currentPieceActionPointLabel )
        {
          UILabel__set_text(currentPieceActionPointLabel, v10, 0LL);
          goto LABEL_11;
        }
      }
    }
LABEL_12:
    sub_B170D4();
  }
LABEL_11:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiBrightnessByPieceStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **v40; // x21
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o **v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x1
  WarBoardPieceData_o *pieceData; // x0
  bool HasAvailablePermanentSleepBuff; // w0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  bool v61; // w23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v62; // x25
  const MethodInfo *v63; // x1
  WarBoardPieceData_o *v64; // x0
  System_Collections_Generic_IEnumerable_T__o *v65; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v66; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v68; // x25
  System_Collections_Generic_IEnumerable_T__o *v69; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v70; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v73; // x20
  Il2CppObject *current; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *removeTweenTargetObjects; // x23
  UnityEngine_GameObject_o *gameObject; // x1
  UnityEngine_GameObject_o *v77; // x1
  UnityEngine_GameObject_o *v78; // x1
  struct UICommonButton_o *v79; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v88; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v89; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F85DD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_UIWidget___ctor__, method);
    sub_B16FFC(&System_Action_UIWidget__TypeInfo, v6);
    sub_B16FFC(&Method_BasicHelper_ForEach_UIWidget___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_GameObject___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_GameObject___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_HashSet_UIWidget__TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Contains__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Remove__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor___66735984, v21);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v22);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__, v23);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__, v24);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__, v25);
    sub_B16FFC(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__, v26);
    sub_B16FFC(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, v27);
    byte_40F85DD = 1;
  }
  memset(&v89, 0, sizeof(v89));
  v28 = sub_B170CC(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, method, v2, v3, v4);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v28,
    0LL);
  v33 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_HashSet_UIWidget__TypeInfo,
                                                                             v29,
                                                                             v30,
                                                                             v31,
                                                                             v32);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v33,
    (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v28 )
    goto LABEL_36;
  *(_QWORD *)(v28 + 24) = v33;
  v40 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **)(v28 + 24);
  v41 = (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o **)(v28 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  v46 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_HashSet_UIWidget__TypeInfo,
                                                                             v42,
                                                                             v43,
                                                                             v44,
                                                                             v45);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v46,
    (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v28 + 16) = v46;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_36;
  HasAvailablePermanentSleepBuff = WarBoardPieceData__HasAvailablePermanentSleepBuff(pieceData, v53);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v61 = HasAvailablePermanentSleepBuff;
  if ( cannotActTurnDurk )
  {
    v62 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_UIWidget__TypeInfo,
                                                                                 v56,
                                                                                 v57,
                                                                                 v58,
                                                                                 v59);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v62,
      (Il2CppObject *)v28,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      (const MethodInfo_24B7310 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      cannotActTurnDurk,
      (System_Action_T__o *)v62,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_UIWidget___);
    v64 = this->fields.pieceData;
    if ( !v64 )
      goto LABEL_36;
    if ( v61 | !WarBoardPieceData__HasVitalityToDoAnyActions(v64, v63) )
    {
      v65 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v66 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                   System_Action_UIWidget__TypeInfo,
                                                                                   v56,
                                                                                   v57,
                                                                                   v58,
                                                                                   v59);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v66,
        (Il2CppObject *)v28,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        (const MethodInfo_24B7310 *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v65,
        (System_Action_T__o *)v66,
        (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v68 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_UIWidget__TypeInfo,
                                                                                 v56,
                                                                                 v57,
                                                                                 v58,
                                                                                 v59);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v68,
      (Il2CppObject *)v28,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      (const MethodInfo_24B7310 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v68,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_UIWidget___);
    if ( v61 )
    {
      v69 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v70 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                   System_Action_UIWidget__TypeInfo,
                                                                                   v56,
                                                                                   v57,
                                                                                   v58,
                                                                                   v59);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v70,
        (Il2CppObject *)v28,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        (const MethodInfo_24B7310 *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v69,
        (System_Action_T__o *)v70,
        (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*v41 )
    goto LABEL_36;
  if ( (*v41)->fields._count < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_36;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v73 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_GameObject__TypeInfo,
                                                                          v56,
                                                                          v57,
                                                                          v58,
                                                                          v59);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v73,
    tweenTargets,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_GameObject___ctor___66735984);
  if ( !*v41 )
    goto LABEL_36;
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v88,
    *v41,
    (const MethodInfo_21DF444 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v89 = v88;
  while ( System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v89,
            (const MethodInfo_20739E4 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__) )
  {
    current = v89.fields._current;
    if ( !v89.fields._current )
      sub_B170D4();
    removeTweenTargetObjects = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.removeTweenTargetObjects;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v89.fields._current, 0LL);
    if ( !removeTweenTargetObjects )
      sub_B170D4();
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           removeTweenTargetObjects,
           (WarBoardManager_TaskList_o *)gameObject,
           (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !v73 )
        sub_B170D4();
      goto LABEL_22;
    }
    if ( !*v40 )
      sub_B170D4();
    if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           *v40,
           (BattleBuffData_BuffData_o *)current,
           (const MethodInfo_21DEFE0 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      gray = UnityEngine_Color__get_gray(0LL);
      UIWidget__set_color((UIWidget_o *)current, gray, 0LL);
      v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !v73 )
        sub_B170D4();
LABEL_22:
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v73,
        (WarBoardManager_TaskList_o *)v77,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color((UIWidget_o *)current, white, 0LL);
      v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !v73 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v73,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v89,
    (const MethodInfo_20739E0 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v79 = this->fields.button;
  v80 = System_Linq_Enumerable__Distinct_string_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v73,
          (const MethodInfo_18D4E88 *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  v81 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v80,
                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v79 )
LABEL_36:
    sub_B170D4();
  v79->fields.tweenTargets = (struct UnityEngine_GameObject_array *)v81;
  sub_B16F98((BattleServantConfConponent_o *)&v79->fields.tweenTargets, v81, v82, v83, v84, v85, v86, v87);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  WarBoardPieceStatusLabel_o *v4; // x0

  if ( (byte_40F85DC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F85DC = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    v4 = this->fields.pieceStatusLabelComponent;
    if ( !v4 )
      sub_B170D4();
    WarBoardPieceStatusLabel__SetupLabel(v4, this->fields.pieceData, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__UpdateWidgetDepth(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  int32_t PieceDispPriority; // w0
  const MethodInfo *v7; // x2

  if ( (byte_40F85F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F85F0 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
    sub_B170D4();
  PieceDispPriority = WarBoardData__GetPieceDispPriority(monitor, this->fields.pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__WidgetDepthIncrement(
        WarBoardPieceBaseComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x21
  __int64 v5; // x1
  struct UIWidget_array *uiWidgets; // x8
  struct UIWidget_array **p_uiWidgets; // x20
  System_Int32_array **ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int max_length; // w21
  int v21; // w22
  __int64 v22; // x23
  __int64 v23; // x9
  __int64 v24; // x9
  __int64 v25; // x22
  __int64 v26; // x23
  UnityEngine_Object_o *v27; // x21
  struct UIWidget_array *v28; // x8
  UIWidget_o *v29; // x0

  v4 = this;
  if ( (byte_40F85E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, *(_QWORD *)&value);
    this = (WarBoardPieceBaseComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F85E9 = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                       (UnityEngine_Component_o *)v4,
                                                                                       1,
                                                                                       (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v4->fields.uiWidgets,
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    uiWidgets = v4->fields.uiWidgets;
    if ( !uiWidgets )
      goto LABEL_27;
    max_length = uiWidgets->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      v22 = 32LL;
      do
      {
        if ( !uiWidgets )
          goto LABEL_27;
        if ( v21 >= uiWidgets->max_length )
          goto LABEL_29;
        v23 = *(__int64 *)((char *)&uiWidgets->obj.klass + v22);
        if ( !v23 )
          goto LABEL_27;
        if ( *(int *)(v23 + 168) >= 1001 )
        {
          *(Il2CppClass **)((char *)&uiWidgets->obj.klass + v22) = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)((char *)uiWidgets + v22),
            0LL,
            (System_String_array **)method,
            v15,
            v16,
            v17,
            v18,
            v19);
        }
        uiWidgets = *p_uiWidgets;
        ++v21;
        v22 += 8LL;
      }
      while ( v21 < max_length );
      if ( !uiWidgets )
LABEL_27:
        sub_B170D4();
    }
  }
  v24 = *(_QWORD *)&uiWidgets->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = (int)v24;
    v26 = 4LL;
    while ( v26 - 4 < (unsigned __int64)uiWidgets->max_length )
    {
      v27 = (UnityEngine_Object_o *)*((_QWORD *)&uiWidgets->obj.klass + v26);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_27;
        if ( v26 - 4 >= (unsigned __int64)v28->max_length )
          break;
        v29 = (UIWidget_o *)*((_QWORD *)&v28->obj.klass + v26);
        if ( !v29 )
          goto LABEL_27;
        UIWidget__set_depth(v29, v29->fields.mDepth + value, 0LL);
      }
      if ( v26 - 3 >= v25 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v26;
      if ( !*p_uiWidgets )
        goto LABEL_27;
    }
LABEL_29:
    sub_B17100(this, *(_QWORD *)&value, method);
    sub_B170A0();
  }
}


WarBoardServantPieceBuffTurnComponent_o *__fastcall WarBoardPieceBaseComponent__get_BuffTrunNotice(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


WarBoardPieceData_o *__fastcall WarBoardPieceBaseComponent__get_PieceData(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pieceData;
}


WarBoardControlUiDataComponent_o *__fastcall WarBoardPieceBaseComponent__get_UiDataComp(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.uiDataComp;
}


void __fastcall WarBoardPieceBaseComponent_ScriptEffectData___ctor(
        WarBoardPieceBaseComponent_ScriptEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7854 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPieceBaseComponent___c_TypeInfo, v1);
    byte_40F7854 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardPieceBaseComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardPieceBaseComponent___c___ctor(WarBoardPieceBaseComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall WarBoardPieceBaseComponent___c___GetParticipantVals_b__62_0(
        WarBoardPieceBaseComponent___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F7857 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_40F7857 = 1;
  }
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__ResumeUiDataAll(0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7855 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7855 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F7856 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_40F7856 = 1;
  }
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll(0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_40F7858 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_40F7858 = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_40F7859 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_40F7859 = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_40F785A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_40F785A = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_40F785B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_40F785B = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_B170D4();
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_40F785C & 1) == 0 )
  {
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_40F785C = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_40F785D & 1) == 0 )
  {
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_40F785D = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_g__AddAfterTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
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
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  WebViewManager_o *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  WebViewManager_o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  WarBoardManager_o *warBoardManager; // x19
  WarBoardTaskBase_array *v21; // x0

  if ( (byte_40F785E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_40F785E = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                38,
                                                                this->fields.pieceEventVals,
                                                                0LL);
  if ( !v11 )
    goto LABEL_13;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
    EventTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v16 )
      goto LABEL_13;
    v17 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                           (WarBoardManager_o *)v16,
                                                           38,
                                                           PieceEventVals,
                                                           0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
      v17,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v18 )
LABEL_13:
    sub_B170D4();
  v19 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)v18,
                                                         37,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
    v19,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v11,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    v21 = (WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, v21, 0LL);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_B170D4();
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_B170D4();
  WarBoardManager__TransitionBattle(warBoardManager, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_1___OnAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *CS___8__locals1; // x8
  WarBoardManager_o *warBoardManager; // x0
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v5; // x8
  struct WarBoardManager_o *v6; // x8
  struct MapCamera_o *mapCamera; // x8
  MapZoom_o *mZoom; // x0
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v9; // x8
  struct WarBoardManager_o *v10; // x8
  struct MapCamera_o *v11; // x8
  MapScroll_o *mScrl; // x0
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v13; // x8
  struct WarBoardManager_o *v14; // x8
  struct MapCamera_o *v15; // x8
  struct UnityEngine_Vector2_o *v16; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  warBoardManager = CS___8__locals1->fields.warBoardManager;
  if ( !warBoardManager )
    goto LABEL_16;
  WarBoardManager__ClearPartyBuff(warBoardManager, 0LL);
  v5 = this->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_16;
  v6 = v5->fields.warBoardManager;
  if ( !v6 )
    goto LABEL_16;
  mapCamera = v6->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_16;
  mZoom = mapCamera->fields.mZoom;
  if ( !mZoom )
    goto LABEL_16;
  MapZoom__SetZoomSize(mZoom, this->fields.prevCameraSize, 1, 0, 0LL);
  v9 = this->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_16;
  v10 = v9->fields.warBoardManager;
  if ( !v10
    || (v11 = v10->fields.mapCamera) == 0LL
    || (mScrl = v11->fields.mScrl) == 0LL
    || (MapScroll__SetScrlPos(mScrl, this->fields.prevCameraPos, 0LL), (v13 = this->fields.CS___8__locals1) == 0LL)
    || (v14 = v13->fields.warBoardManager) == 0LL
    || (v15 = v14->fields.mapCamera) == 0LL
    || (v16 = (struct UnityEngine_Vector2_o *)v15->fields.mScrl) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  v16[3] = this->fields.prevCameraPos;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7860 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F7860 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_B170D4();
  return targetPiece->fields._isDead_k__BackingField && this->fields.moveAfterActionCheck;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  WarBoardData_o *warBoardData_k__BackingField; // x0
  int32_t id; // w21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct WarBoardPieceData_o *v18; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v20; // x22
  bool isPlayerMaster; // w0
  int32_t v22; // w2
  bool v23; // w4
  WarBoardMessageMaster_o *v24; // x0
  int32_t v25; // w1
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_T__o *MessageTasks; // x0
  WarBoardPieceBaseComponent_o *_4__this; // x0
  System_Int32_array *ParticipantVals; // x0
  System_Int32_array *v30; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WarBoardManager_o *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  WarBoardManager_o *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  WarBoardManager_o *v36; // x19
  WarBoardTaskBase_array *v37; // x0

  if ( (byte_40F785F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    byte_40F785F = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_26;
  if ( WarBoardPieceData__get_isMaster(targetPiece, 0LL) )
  {
    warBoardManager = this->fields.warBoardManager;
    if ( !warBoardManager )
      goto LABEL_26;
    warBoardData_k__BackingField = warBoardManager->fields._warBoardData_k__BackingField;
    if ( !warBoardData_k__BackingField )
      goto LABEL_26;
    id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v18 = this->fields.targetPiece;
    if ( !v18 )
      goto LABEL_26;
    breakPoint_k__BackingField = v18->fields._breakPoint_k__BackingField;
    v20 = (WarBoardMessageMaster_o *)Master_WarQuestSelectionMaster;
    isPlayerMaster = WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0LL);
    if ( !v20 )
      goto LABEL_26;
    if ( isPlayerMaster )
    {
      v22 = 12;
      v23 = 1;
      v24 = v20;
      v25 = id;
      v26 = breakPoint_k__BackingField;
    }
    else
    {
      v22 = 10;
      v24 = v20;
      v25 = id;
      v26 = breakPoint_k__BackingField;
      v23 = 0;
    }
    MessageTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardMessageMaster__GetMessageTasks(
                                                                    v24,
                                                                    v25,
                                                                    v22,
                                                                    v26,
                                                                    v23,
                                                                    0LL);
    if ( !v12 )
      goto LABEL_26;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
      MessageTasks,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(_4__this, this->fields.targetPiece, 0LL);
  if ( !this->fields.warBoardManager )
    goto LABEL_26;
  v30 = ParticipantVals;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                this->fields.warBoardManager,
                                                                2,
                                                                ParticipantVals,
                                                                0LL);
  if ( !v12 )
    goto LABEL_26;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    EventTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v32 = this->fields.warBoardManager;
  if ( !v32 )
    goto LABEL_26;
  v33 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(v32, 20, v30, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    v33,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v34 = this->fields.warBoardManager;
  if ( !v34 )
    goto LABEL_26;
  v35 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(v34, 40, v30, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    v35,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v12,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v36 = this->fields.warBoardManager;
    v37 = (WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v36 )
    {
      WarBoardManager__InsertRunningTask(v36, v37, 0LL);
      return;
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass66_0___OnWallAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_B170D4();
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7862 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F7862 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *targetWall; // x8

  targetWall = this->fields.targetWall;
  if ( targetWall )
    LOBYTE(targetWall) = targetWall->fields._isDestroy_k__BackingField;
  return (unsigned __int8)targetWall & this->fields.moveAfterActionCheck;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
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
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WarBoardManager_o *warBoardManager; // x19
  WarBoardTaskBase_array *v15; // x0

  if ( (byte_40F7861 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_40F7861 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                27,
                                                                0LL,
                                                                0LL);
  if ( !v11 )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
    EventTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v11,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    v15 = (WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, v15, 0LL);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass83_0___SetEffect_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        WarBoardPieceBaseComponent_ScriptEffectData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}