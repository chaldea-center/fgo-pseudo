void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49F9F76 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1B640C8(&StringLiteral_6802/*"Frame{0}"*/, v7);
    byte_49F9F76 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listEffectData, (int32_t)v8, v9, v10);
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_BA2E10;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_BA4380;
  this->fields.lengthMoveAttack = 25.0;
  v11 = StringLiteral_6802/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6802/*"Frame{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseFrameName, v11, v12, v13);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.removeTweenTargetObjects, (int32_t)v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__AddDeadMoveTask(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Vector3_o originalPos,
        int32_t squareIndex,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  float pixelPerSecond; // s13
  float v21; // s11
  float v22; // s12
  float v23; // s14
  __int64 v24; // x1
  __int64 v25; // x2
  WarBoardMovePerformance_o *v26; // x0
  Il2CppObject *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v34; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v35; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_49F9F6D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1B640C8(&WarBoardMovePerformance_TypeInfo, v14);
    byte_49F9F6D = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       *(_QWORD *)&squareIndex,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  pieceData = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                       (WarBoardManager_o *)pieceData,
                                       30,
                                       PieceEventVals,
                                       0LL);
  if ( !v15 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)pieceData,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v21 = SquarePosition.fields.x;
  v22 = SquarePosition.fields.y;
  v23 = SquarePosition.fields.z;
  v26 = (WarBoardMovePerformance_o *)sub_1B64314(WarBoardMovePerformance_TypeInfo, v24, v25);
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v39.fields.x = v21;
  v39.fields.y = v22;
  v39.fields.z = v23;
  v27 = (Il2CppObject *)v26;
  WarBoardMovePerformance___ctor(v26, gameObject, v38, v39, pixelPerSecond, 0, 0LL);
  items = v15->fields._items;
  v31 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      v27,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v34 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)v34,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v35 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0LL, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)v35,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v15,
                                             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_1B64324(pieceData);
  }
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)pieceData, 0LL);
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x21
  struct WarBoardSeSetting_o *seSetting; // x8
  const MethodInfo *v10; // x2
  Il2CppMethodPointer methodPtr; // x1
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

  if ( (byte_49F9F5E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent_ClickIcon__, v3);
    byte_49F9F5E = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v13 = (_QWORD *)sub_1B640E0(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
      v15 = this->fields.pieceData;
      if ( v15 )
      {
        WarBoardManager__SquareSelect(v6, v15->fields._nowSquareIndex_k__BackingField, 0LL);
        v10 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._15_ChangeStatus.methodPtr;
        goto LABEL_33;
      }
LABEL_41:
      sub_1B64324(Instance);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0LL) )
    {
      v7 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B640E0(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v8, seSetting->fields.DeselectSe, 0LL);
          WarBoardManager__DeselectPiece(v6, 1, 0LL, 0LL);
          v10 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
LABEL_33:
          ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v10)(this, methodPtr);
          return;
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__get_isSelectedPiece(v6, 0LL) && this->fields.isSelectable )
    {
      v16 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1B640E0(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v18 = Instance->fields.seSetting;
        if ( v18 )
        {
          Instance = (WarBoardManager_o *)OverwriteAssetSoundName__PlaySe(v17, v18->fields.SelectSe, 0LL);
          v19 = this->fields.pieceData;
          if ( v19 )
          {
            WarBoardManager__SelectedPieceAction(v6, v19->fields._nowSquareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__IsNowTurn(v6, this->fields.pieceData, 0LL) )
    {
      v20 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1B640E0(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v21 = (System_Reflection_MethodBase_o *)sub_1B640AC(v20, v20[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v22 = Instance->fields.seSetting;
        if ( v22 )
        {
          OverwriteAssetSoundName__PlaySe(v21, v22->fields.SelectSe, 0LL);
          WarBoardManager__SelectPiece(v6, this->fields.pieceData, 0LL);
          v10 = this->klass->vtable._12_ShowStatus.method;
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
          goto LABEL_33;
        }
      }
      goto LABEL_41;
    }
  }
  if ( (((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._12_ShowStatus.method)(
          this,
          this->klass->vtable._13_HideStatus.methodPtr) & 1) != 0 )
  {
    v23 = Method_WarBoardPieceBaseComponent_ClickIcon__;
    if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1B640E0(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v24 = (System_Reflection_MethodBase_o *)sub_1B640AC(v23, v23[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v25 = Instance->fields.seSetting;
    if ( !v25 )
      goto LABEL_41;
    OverwriteAssetSoundName__PlaySe(v24, v25->fields.OpenSimpleInfoSe, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__CreateEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  Il2CppObject *Instance; // x0
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v19; // x21
  Il2CppObject *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardCommonEffectPerformance_o *v23; // x0
  Il2CppObject *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Nullable_Vector3__o v31; // 0:x3.16
  System_Nullable_Vector3__o v32; // 0:x5.16

  if ( (byte_49F9F73 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_1B640C8(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_1B640C8(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    byte_49F9F73 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       effectName,
                                                       taskList);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2F15D90 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v19 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
      v19 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__Instantiate_object__49003980(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v19,
            (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    v23 = (WarBoardCommonEffectPerformance_o *)sub_1B64314(WarBoardCommonEffectPerformance_TypeInfo, v21, v22);
    *(_QWORD *)&v31.fields.hasValue = 0LL;
    *(_QWORD *)&v31.fields.value.fields.y = 0LL;
    *(_QWORD *)&v32.fields.hasValue = 0LL;
    *(_QWORD *)&v32.fields.value.fields.y = 0LL;
    v24 = (Il2CppObject *)v23;
    WarBoardCommonEffectPerformance___ctor(
      v23,
      0LL,
      (UnityEngine_GameObject_o *)v20,
      v31,
      v32,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0LL);
    if ( v15 )
    {
      items = v15->fields._items;
      v28 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v15->fields._version;
      if ( items )
      {
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            v24,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v30 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v24;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v15,
              (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_35188000(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
            0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1B64324(Instance);
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
  UnityEngine_Object_o *effectDamageBaseObject; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v23; // x22
  WarBoardCommonEffectPerformance_o *v24; // x0
  Il2CppObject *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Nullable_Vector3__o v32; // 0:x3.16
  System_Nullable_Vector3__o v33; // 0:x5.16

  if ( (byte_49F9F74 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1B640C8(&WarBoardCommonEffectPerformance_TypeInfo, v14);
    byte_49F9F74 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                         v16,
                                                         v17);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    effectDamageBaseLabel = (UnityEngine_Object_o *)this->fields.effectDamageBaseLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(effectDamageBaseLabel, 0LL, 0LL) )
    {
      Instance = this->fields.effectDamageBaseLabel;
      if ( !Instance )
        goto LABEL_19;
      UILabel__set_text(Instance, popText, 0LL);
    }
    v23 = this->fields.effectDamageBaseObject;
    v24 = (WarBoardCommonEffectPerformance_o *)sub_1B64314(WarBoardCommonEffectPerformance_TypeInfo, v20, v21);
    *(_QWORD *)&v32.fields.hasValue = 0LL;
    *(_QWORD *)&v32.fields.value.fields.y = 0LL;
    *(_QWORD *)&v33.fields.hasValue = 0LL;
    *(_QWORD *)&v33.fields.value.fields.y = 0LL;
    v25 = (Il2CppObject *)v24;
    WarBoardCommonEffectPerformance___ctor(v24, 0LL, v23, v32, v33, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v18 )
    {
      items = v18->fields._items;
      v29 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v18->fields._version;
      if ( items )
      {
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            v25,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v25;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v25, v26, v27);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v18,
              (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_35188000(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v18,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B64324(Instance);
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


UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconLocalPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
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


UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
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


System_Int32_array *__fastcall WarBoardPieceBaseComponent__GetParticipantVals(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *PieceEventVals; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  WarBoardPieceBaseComponent___c_c *v23; // x0
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v25; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  v4 = this;
  if ( (byte_49F9F67 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, targetPiece);
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__, v10);
    this = (WarBoardPieceBaseComponent_o *)sub_1B640C8(&WarBoardPieceBaseComponent___c_TypeInfo, v11);
    byte_49F9F67 = 1;
  }
  if ( !targetPiece )
    goto LABEL_28;
  if ( WarBoardPieceData__get_isMaster(targetPiece, 0LL) )
  {
    this = (WarBoardPieceBaseComponent_o *)v4->fields.pieceData;
    if ( this )
    {
      PieceEventVals = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                              (WarBoardPieceData_o *)this,
                                                                              0LL);
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                   targetPiece,
                                                                   0LL);
      v14 = System_Linq_Enumerable__Concat_int_(
              PieceEventVals,
              v13,
              (const MethodInfo_2E52718 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v14,
               (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_1B64324(this);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)this[1].fields.turnDarkUiWidgetsAroundActionCount;
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)WarBoardData__LoadBattleParticipantInfo((WarBoardData_o *)this, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( !LOBYTE(this->fields.m_CancellationTokenSource) )
  {
    v22 = *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.m_CachedPtr;
    v23 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v23 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    _9__62_0 = (System_Func_object__object__o *)v23->static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = WarBoardPieceBaseComponent___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__62_0 = (System_Func_object__object__o *)sub_1B64314(
                                                    System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo,
                                                    v15,
                                                    v16);
      System_Func_object__object____ctor(
        _9__62_0,
        v25,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0LL);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v27, v28);
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v22,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                 (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v14,
             (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v17 = Method_System_Array_Empty_int___;
  v18 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v18 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v18 = v17[7];
  }
  v19 = *(_QWORD *)(v18 + 16);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BB5FA4(v19);
  if ( !*(_DWORD *)(v19 + 224) )
    j_il2cpp_runtime_class_init_0(v19);
  v20 = *(_QWORD *)(v17[7] + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BB5FA4(v20);
  return **(System_Int32_array ***)(v20 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_49F9F6F & 1) == 0 )
  {
    sub_1B640C8(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_49F9F6F = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1B64314(
                                                 WarBoardSimpleAnimationPerformance_TypeInfo,
                                                 animationName,
                                                 method);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0LL);
  return v6;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_49F9F60 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9F60 = 1;
  }
  currentActionPointRoot = this->fields.currentActionPointRoot;
  if ( !currentActionPointRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0LL);
  currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
  {
    currentActionPointRoot = this->fields.currentPieceActionPointRoot;
    if ( currentActionPointRoot )
    {
      UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0LL);
      goto LABEL_9;
    }
LABEL_10:
    sub_1B64324(currentActionPointRoot);
  }
LABEL_9:
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x0
  WarBoardManager_o *v4; // x0

  if ( (byte_49F9F63 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_49F9F63 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1BB5FA4(v2);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BB5FA4(v3);
  v4 = **(WarBoardManager_o ***)(v3 + 184);
  if ( !v4 )
    sub_1B64324(0LL);
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
  __int64 gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Transform_o *transform; // x21
  int v22; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v26; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v28; // w2
  int32_t v29; // w3
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
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  const MethodInfo *v52; // x3
  struct WarBoardBreakPointComponent_array *v53; // x8
  float maxSpacing; // s0
  int32_t v55; // w2
  int32_t v56; // w3
  UnityEngine_Transform_array *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  UnityEngine_Transform_o *v60; // x22
  const MethodInfo *v61; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v66; // x21
  UnityEngine_Object_o *v67; // x22
  Il2CppObject *v68; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  UnityEngine_Object_o *v72; // x21
  Il2CppObject *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  __int64 v76; // x0
  __int64 v77; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9F5A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UILabel___, pieceData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&UnityEngine_Transform___TypeInfo, v10);
    sub_1B640C8(&WarBoardBreakPointComponent___TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    sub_1B640C8(&StringLiteral_22869/*"root_text/type01/dm_base"*/, v13);
    sub_1B640C8(&StringLiteral_18754/*"ef_dm_base"*/, v14);
    byte_49F9F5A = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimation, (int32_t)Component_object, v17, v18);
  this->fields.pieceData = pieceData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.pieceData, (int32_t)pieceData, v19, v20);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_26;
  if ( !gameObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v22 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)gameObject,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v22, 0LL);
  breakPointMax_k__BackingField = (unsigned int)pieceData->fields._breakPointMax_k__BackingField;
  v26 = (struct WarBoardBreakPointComponent_array *)sub_1B64170(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v26;
  p_breakPoints = &this->fields.breakPoints;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.breakPoints, (int32_t)v26, v28, v29);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_26;
  v30 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v31 = 0LL;
    v32 = 0.0;
    v33 = 1LL;
    v34 = 2 * breakPointMax_k__BackingField - 2;
    v35 = (float)*(int *)(gameObject + 168) / (float)(int)breakPointMax_k__BackingField;
    v36 = 8LL;
    v77 = breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      v39 = *v30;
      v40 = v30;
      v41 = v38;
      if ( !v39->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v39);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__49003980(
                              breakPointPrefab,
                              v41,
                              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      if ( !gameObject )
        goto LABEL_26;
      v42 = (UnityEngine_GameObject_o *)gameObject;
      v43 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v42, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      v78.fields.y = 0.0;
      v78.fields.z = 0.0;
      v78.fields.x = v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v78, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      mDepth = breakPointParent->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0LL);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0LL);
      if ( !v43 )
        goto LABEL_26;
      WarBoardBreakPointComponent__Initialize(v43, v34 + mDepth, v33, isMaster, gameObject & 1, 0, v47);
      v48 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      gameObject = sub_1B64204(v43, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
      if ( !gameObject )
        goto LABEL_57;
      if ( v31 >= v48[6] )
        goto LABEL_56;
      *(_QWORD *)&v48[v36] = v43;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v48[v36], (int32_t)v43, v50, v51);
      v53 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      if ( v31 >= v53->max_length )
        goto LABEL_56;
      v30 = v40;
      gameObject = *(__int64 *)((char *)&v53->obj.klass + v36 * 4);
      if ( !gameObject )
        goto LABEL_26;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v31 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v52);
      if ( v77 == v33 )
        break;
      maxSpacing = v43->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      ++v31;
      v34 -= 2;
      if ( maxSpacing >= v35 )
        maxSpacing = v35;
      ++v33;
      v32 = v32 + maxSpacing;
      v36 += 2LL;
      if ( !gameObject )
        goto LABEL_26;
    }
  }
  gameObject = (__int64)this->fields.selectObject;
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&pieceData->fields.pieceComponent, (int32_t)this, v55, v56);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
LABEL_30:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  v57 = (UnityEngine_Transform_array *)sub_1B64170(UnityEngine_Transform___TypeInfo, 1LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v57 )
    goto LABEL_26;
  v60 = (UnityEngine_Transform_o *)gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B64204(gameObject, v57->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_57:
      v76 = sub_1B64348(gameObject);
      sub_1B641F0(v76, 0LL);
    }
  }
  if ( !v57->max_length )
LABEL_56:
    sub_1B6432C(gameObject, v49);
  v57->m_Items[0] = v60;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v57->m_Items, (int32_t)v60, v58, v59);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v57, v61);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_26;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v63);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v64);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_18754/*"ef_dm_base"*/,
                               (const MethodInfo_2F15D90 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !(*v30)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v30);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v66 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v67 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( !(*v30)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v30);
    if ( UnityEngine_Object__op_Inequality(v67, 0LL, 0LL) )
      v66 = (UnityEngine_Transform_o *)v67;
    if ( !(*v30)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v30);
    v68 = UnityEngine_Object__Instantiate_object__49003980(
            CommonEffectAsset_object,
            v66,
            (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v68;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectDamageBaseObject, (int32_t)v68, v70, v71);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v72 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_22869/*"root_text/type01/dm_base"*/,
                                      0LL);
      if ( !(*v30)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v30);
      gameObject = UnityEngine_Object__op_Inequality(v72, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v72 )
          goto LABEL_26;
        v73 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v72,
                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v73;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectDamageBaseLabel, (int32_t)v73, v74, v75);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_26:
        sub_1B64324(gameObject);
      goto LABEL_30;
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x22
  WarBoardData_o *gameObject; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  WarBoardPieceData_o *Piece_35061152; // x0
  WarBoardData_o **v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  WarBoardTaskBase_TaskCallback_o *v39; // x25
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v49; // x1
  int32x2_t v50; // d1
  float32x2_t v51; // d9
  float v52; // s10
  float v53; // s2
  float v54; // s8
  float32x2_t v55; // d0
  float32x2_t v56; // d9
  float v57; // s8
  float v58; // s10
  float32x2_t v59; // d9
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v63; // s0
  unsigned __int64 v64; // d1
  float v65; // s0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x24
  __int64 v69; // x1
  __int64 v70; // x2
  WarBoardTaskBase_TaskCallback_o *v71; // x25
  int32_t v72; // w2
  int32_t v73; // w3
  struct WarBoardPieceData_o *v74; // x8
  UnityEngine_GameObject_o *v75; // x26
  float v76; // s8
  float v77; // s9
  float v78; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v82; // s14
  __int64 v83; // x1
  __int64 v84; // x2
  WarBoardMovePerformance_o *v85; // x0
  WarBoardTaskBase_o *v86; // x25
  __int64 v87; // x1
  __int64 v88; // x2
  bool IsEnabledMovedAfterDefend; // w0
  System_Func_bool__o *v90; // x23
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x21
  __int64 v94; // x1
  __int64 v95; // x2
  System_Delegate_o **v96; // x22
  System_Delegate_o *v97; // x23
  WarBoardPieceBaseComponent___c_c *v98; // x0
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v100; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_Delegate_o *v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  System_Delegate_o *v107; // x8
  WarBoardTaskBase_TaskCallback_c *v108; // x1
  int32_t v109; // w2
  int32_t v110; // w3
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  unsigned __int64 v115; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v116; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49F9F6A & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, *(_QWORD *)&squareIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__, v10);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__, v11);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__, v12);
    sub_1B640C8(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
      v13);
    sub_1B640C8(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, v14);
    sub_1B640C8(&WarBoardPieceBaseComponent___c_TypeInfo, v15);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v16);
    sub_1B640C8(&WarBoardConditionalJumpTask_TypeInfo, v17);
    sub_1B640C8(&WarBoardMovePerformance_TypeInfo, v18);
    byte_49F9F6A = 1;
  }
  v19 = sub_1B64314(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_60;
  *(_QWORD *)(v19 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)this, v21, v22);
  *(_DWORD *)(v19 + 52) = squareIndex;
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v19 + 24) = Instance;
  v27 = (WarBoardData_o **)(v19 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 24), (int32_t)Instance, v28, v29);
  if ( !*(_QWORD *)(v19 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v19 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_35061152 = WarBoardData__GetPiece_35061152(gameObject, *(_DWORD *)(v19 + 52), 0LL);
  *(_QWORD *)(v19 + 16) = Piece_35061152;
  v31 = (WarBoardData_o **)(v19 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)Piece_35061152, v32, v33);
  v36 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v34, v35);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v36, 0LL, 0LL);
  v39 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v37, v38);
  WarBoardTaskBase_TaskCallback___ctor(
    v39,
    (Il2CppObject *)v19,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v36 )
    goto LABEL_60;
  *(_QWORD *)(v36 + 32) = v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v39, v40, v41);
  if ( !v25 )
    goto LABEL_60;
  items = v25->fields._items;
  v45 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v25->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v25->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      (Il2CppObject *)v36,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    v25->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), v36, v42, v43);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v27;
  if ( !*v27 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v19 + 24);
  *(UnityEngine_Vector3_o *)(v19 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)v55.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v19 + 52),
                                            0LL);
  v51.n64_u64[0] = *(unsigned __int64 *)(v19 + 40);
  v52 = *(float *)(v19 + 48);
  v54 = v53;
  v55.n64_u32[1] = v50.n64_u32[0];
  if ( !byte_49F7113 )
  {
    v115 = v55.n64_u64[0];
    sub_1B640C8(&System_Math_TypeInfo, v49);
    v55.n64_u64[0] = v115;
    byte_49F7113 = 1;
  }
  v56.n64_u64[0] = vsub_f32(v55, v51).n64_u64[0];
  v57 = v54 - v52;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v58 = vaddv_f32(vmul_f32(v56, v56)) + (float)(v57 * v57);
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v49);
    byte_49F7114 = 1;
  }
  v50.n64_f32[0] = sqrtf(v58);
  v116 = v50.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v50.n64_u64[0] = v116;
  }
  if ( v50.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v49);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v59.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v59.n64_u64[0] = vdiv_f32(v56, vdup_lane_s32(v50, 0)).n64_u64[0];
    z = v57 / v50.n64_f32[0];
  }
  gameObject = *v31;
  if ( !*v31 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v63 = *(float *)&v116 - lengthOnAttack;
  if ( (float)(*(float *)&v116 - lengthOnAttack) > 0.0 )
  {
    v64 = vadd_f32(vmul_n_f32(v59, v63), *(float32x2_t *)(v19 + 40)).n64_u64[0];
    v65 = (float)(z * v63) + *(float *)(v19 + 48);
    *(_QWORD *)(v19 + 40) = v64;
    *(float *)(v19 + 48) = v65;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0LL);
  v68 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v66, v67);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v68, 0LL, 0LL);
  v71 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v69, v70);
  WarBoardTaskBase_TaskCallback___ctor(
    v71,
    (Il2CppObject *)v19,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v68 )
    goto LABEL_60;
  *(_QWORD *)(v68 + 32) = v71;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v68 + 32), (int32_t)v71, v72, v73);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v74 = this->fields.pieceData;
  if ( !v74 )
    goto LABEL_60;
  v75 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v19 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v76 = *(float *)(v19 + 40);
  v77 = *(float *)(v19 + 44);
  v78 = *(float *)(v19 + 48);
  v118 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v74->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v118.fields.x;
  y = v118.fields.y;
  v82 = v118.fields.z;
  v85 = (WarBoardMovePerformance_o *)sub_1B64314(WarBoardMovePerformance_TypeInfo, v83, v84);
  v119.fields.x = v76;
  v119.fields.y = v77;
  v119.fields.z = v78;
  v120.fields.x = x;
  v120.fields.y = y;
  v120.fields.z = v82;
  v86 = (WarBoardTaskBase_o *)v85;
  WarBoardMovePerformance___ctor(v85, v75, v119, v120, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL) )
  {
    gameObject = *v31;
    if ( !*v31 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0LL);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  *(_BYTE *)(v19 + 56) = IsEnabledMovedAfterDefend;
  v90 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v87, v88);
  System_Func_bool____ctor(
    v90,
    (Il2CppObject *)v19,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0LL);
  v93 = sub_1B64314(WarBoardConditionalJumpTask_TypeInfo, v91, v92);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v93, v90, (WarBoardTaskBase_o *)v68, v86, 0LL);
  if ( !v93 )
LABEL_60:
    sub_1B64324(gameObject);
  v96 = (System_Delegate_o **)(v93 + 40);
  v97 = *(System_Delegate_o **)(v93 + 40);
  v98 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v98 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__65_3 = v98->static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !v98->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v98);
      v98 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v100 = (Il2CppObject *)v98->static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v94, v95);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v100,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v101 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v101->__9__65_3 = _9__65_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v101->__9__65_3, (int32_t)_9__65_3, v102, v103);
  }
  v104 = System_Delegate__Combine(v97, (System_Delegate_o *)_9__65_3, 0LL);
  v107 = v104;
  if ( v104 )
  {
    v108 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v104->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v96 = v104;
      if ( (WarBoardTaskBase_TaskCallback_c *)v104->klass == v108 )
        goto LABEL_54;
    }
    sub_1B645E4(v104);
  }
  *v96 = v107;
LABEL_54:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v93 + 40), (int32_t)v107, v105, v106);
  v111 = v25->fields._items;
  v112 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v25->fields._version;
  if ( !v111 )
    goto LABEL_60;
  v113 = v25->fields._size;
  if ( (unsigned int)v113 >= v111->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      (Il2CppObject *)v93,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = &v111->obj.klass + v113;
    v25->fields._size = v113 + 1;
    v114[4] = (Il2CppClass *)v93;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v114 + 4), v93, v109, v110);
  }
  gameObject = *v27;
  if ( !*v27 )
    goto LABEL_60;
  WarBoardManager__AddTask_35188000(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v25,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  WarBoardData_o *gameObject; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  WarBoardWallData_o *Wall; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  WarBoardTaskBase_TaskCallback_o *v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  int32x2_t v48; // d3
  float32x2_t v49; // d9
  float v50; // s10
  float v51; // s2
  float v52; // s8
  unsigned __int32 v53; // s1
  float32x2_t v54; // d0
  float32x2_t v55; // d9
  float v56; // s8
  float v57; // s10
  float32x2_t v58; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v61; // s2
  float v62; // s1
  __int64 v63; // x23
  __int64 v64; // x1
  __int64 v65; // x2
  WarBoardTaskBase_TaskCallback_o *v66; // x24
  int32_t v67; // w2
  int32_t v68; // w3
  struct WarBoardPieceData_o *v69; // x8
  UnityEngine_GameObject_o *v70; // x25
  float v71; // s8
  float v72; // s9
  float v73; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v77; // s14
  __int64 v78; // x1
  __int64 v79; // x2
  WarBoardMovePerformance_o *v80; // x0
  WarBoardTaskBase_o *v81; // x24
  __int64 v82; // x1
  __int64 v83; // x2
  System_Func_bool__o *v84; // x25
  __int64 v85; // x1
  __int64 v86; // x2
  WarBoardConditionalJumpTask_o *v87; // x19
  int32_t v88; // w2
  int32_t v89; // w3
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  unsigned __int64 v94; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v95; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v96; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49F9F6C & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, *(_QWORD *)&squareIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__, v10);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__, v11);
    sub_1B640C8(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
      v12);
    sub_1B640C8(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, v13);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v14);
    sub_1B640C8(&WarBoardConditionalJumpTask_TypeInfo, v15);
    sub_1B640C8(&WarBoardMovePerformance_TypeInfo, v16);
    byte_49F9F6C = 1;
  }
  v17 = sub_1B64314(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_40;
  *(_QWORD *)(v17 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v19, v20);
  *(_DWORD *)(v17 + 44) = squareIndex;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v17 + 16) = Instance;
  v25 = (WarBoardData_o **)(v17 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Instance, v26, v27);
  if ( !*(_QWORD *)(v17 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v17 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v17 + 44), 1, 0LL);
  *(_QWORD *)(v17 + 48) = Wall;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)Wall, v29, v30);
  v33 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v31, v32);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v33, 0LL, 0LL);
  v36 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v34, v35);
  WarBoardTaskBase_TaskCallback___ctor(
    v36,
    (Il2CppObject *)v17,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v33 )
    goto LABEL_40;
  *(_QWORD *)(v33 + 32) = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v36, v37, v38);
  if ( !v23 )
    goto LABEL_40;
  items = v23->fields._items;
  v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v23->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v23->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v33,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    v23->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), v33, v39, v40);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v25;
  if ( !*v25 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v17 + 16);
  *(UnityEngine_Vector3_o *)(v17 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)v54.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v17 + 44),
                                            0LL);
  v49.n64_u64[0] = *(unsigned __int64 *)(v17 + 32);
  v50 = *(float *)(v17 + 40);
  v52 = v51;
  v54.n64_u32[1] = v53;
  if ( !byte_49F7113 )
  {
    v94 = v54.n64_u64[0];
    sub_1B640C8(&System_Math_TypeInfo, v46);
    v54.n64_u64[0] = v94;
    byte_49F7113 = 1;
  }
  v55.n64_u64[0] = vsub_f32(v54, v49).n64_u64[0];
  v56 = v52 - v50;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v57 = vaddv_f32(vmul_f32(v55, v55)) + (float)(v56 * v56);
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v46);
    byte_49F7114 = 1;
  }
  v48.n64_f32[0] = sqrtf(v57);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    v95 = v48.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v48.n64_u64[0] = v95;
  }
  if ( v48.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      v96 = v48.n64_u32[0];
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v46);
      v48.n64_u32[0] = v96;
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v58.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v58.n64_u64[0] = vdiv_f32(v55, vdup_lane_s32(v48, 0)).n64_u64[0];
    z = v56 / v48.n64_f32[0];
  }
  v61 = v48.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v61 > 0.0 )
  {
    v62 = (float)(z * v61) + *(float *)(v17 + 40);
    *(float32x2_t *)(v17 + 32) = vadd_f32(vmul_n_f32(v58, v61), *(float32x2_t *)(v17 + 32));
    *(float *)(v17 + 40) = v62;
  }
  v63 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v46, v47);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v63, 0LL, 0LL);
  v66 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v64, v65);
  WarBoardTaskBase_TaskCallback___ctor(
    v66,
    (Il2CppObject *)v17,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v63 )
    goto LABEL_40;
  *(_QWORD *)(v63 + 32) = v66;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 32), (int32_t)v66, v67, v68);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v69 = this->fields.pieceData;
  if ( !v69 )
    goto LABEL_40;
  v70 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v17 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v71 = *(float *)(v17 + 32);
  v72 = *(float *)(v17 + 36);
  v73 = *(float *)(v17 + 40);
  v98 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v69->fields._nowSquareIndex_k__BackingField,
          0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v98.fields.x;
  y = v98.fields.y;
  v77 = v98.fields.z;
  v80 = (WarBoardMovePerformance_o *)sub_1B64314(WarBoardMovePerformance_TypeInfo, v78, v79);
  v99.fields.x = v71;
  v99.fields.y = v72;
  v99.fields.z = v73;
  v100.fields.x = x;
  v100.fields.y = y;
  v100.fields.z = v77;
  v81 = (WarBoardTaskBase_o *)v80;
  WarBoardMovePerformance___ctor(v80, v70, v99, v100, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  *(_BYTE *)(v17 + 56) = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL);
  v84 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v82, v83);
  System_Func_bool____ctor(
    v84,
    (Il2CppObject *)v17,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0LL);
  v87 = (WarBoardConditionalJumpTask_o *)sub_1B64314(WarBoardConditionalJumpTask_TypeInfo, v85, v86);
  WarBoardConditionalJumpTask___ctor(v87, v84, (WarBoardTaskBase_o *)v63, v81, 0LL);
  v90 = v23->fields._items;
  v91 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v23->fields._version;
  if ( !v90 )
    goto LABEL_40;
  v92 = v23->fields._size;
  if ( (unsigned int)v92 >= v90->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v87,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = &v90->obj.klass + v92;
    v23->fields._size = v92 + 1;
    v93[4] = (Il2CppClass *)v87;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v93 + 4), (int32_t)v87, v88, v89);
  }
  gameObject = *v25;
  if ( !*v25 )
LABEL_40:
    sub_1B64324(gameObject);
  WarBoardManager__AddTask_35188000(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v23,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
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
  __int64 v32; // x23
  __int64 Instance; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 *v36; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v38; // x22
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s11
  float v43; // s9
  float v44; // s10
  float v45; // s1
  float v46; // s2
  float v47; // s0
  float v48; // s8
  float v49; // s12
  WarBoardSquareData_o *Square; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_List_object__o *v55; // x20
  const MethodInfo *v56; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x25
  __int64 v63; // x1
  __int64 v64; // x2
  WarBoardTaskBase_TaskCallback_c **v65; // x19
  System_Delegate_o **v66; // x26
  System_Delegate_o *v67; // x27
  WarBoardTaskBase_TaskCallback_o *v68; // x28
  System_Delegate_o *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  WarBoardPieceBaseComponent_c *v72; // x8
  WarBoardTaskBase_TaskCallback_c *v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  __int64 v80; // x1
  float v81; // s13
  float v82; // s14
  float v83; // s12
  float v84; // s8
  float x; // s14
  float y; // s13
  float z; // s15
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  __int64 v90; // x1
  __int64 v91; // x2
  float v92; // s0
  float v93; // s3
  float v94; // s1
  float v95; // s2
  float v96; // s0
  float v97; // s15
  float v98; // s8
  float v99; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s12
  UnityEngine_GameObject_o *v102; // x26
  __int64 v103; // x1
  __int64 v104; // x2
  WarBoardMovePerformance_o *v105; // x0
  Il2CppObject *v106; // x25
  int32_t v107; // w2
  int32_t v108; // w3
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  System_Collections_Generic_List_object__o *v113; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v114; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v115; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  float lengthMoveAttack; // s0
  float v119; // s8
  float v120; // s12
  float v121; // s13
  UnityEngine_GameObject_o *v122; // x0
  float v123; // s14
  UnityEngine_GameObject_o *v124; // x21
  __int64 v125; // x1
  __int64 v126; // x2
  WarBoardMovePerformance_o *v127; // x0
  WarBoardTaskBase_o *v128; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v129; // x21
  WarBoardMessageMaster_o *v130; // x23
  int32_t id; // w26
  __int64 v132; // x1
  __int64 v133; // x2
  System_Collections_Generic_List_object__o *v134; // x0
  int32_t breakPoint_k__BackingField; // w27
  int32_t v136; // w2
  bool v137; // w4
  WarBoardMessageMaster_o *v138; // x0
  int32_t v139; // w1
  int32_t v140; // w3
  __int64 v141; // x24
  int32_t v142; // w2
  int32_t v143; // w3
  Il2CppObject **v144; // x22
  __int64 v145; // x1
  float lengthOnEncount; // s0
  float v147; // s1
  float v148; // s12
  float v149; // s2
  float v150; // s0
  float v151; // s8
  float v152; // s14
  float v153; // s9
  float v154; // s11
  float v155; // s15
  float v156; // s13
  float v157; // s14
  float v158; // s10
  float v159; // s12
  float v160; // s13
  float v161; // s14
  float v162; // s15
  struct UnityEngine_Vector3_StaticFields *v163; // x8
  float v164; // s1
  _QWORD *monitor; // x8
  __int64 v166; // x8
  float v167; // s10
  float ZoomSize; // s0
  __int64 v169; // x8
  __int64 v170; // x8
  __int64 v171; // x8
  const MethodInfo_35D2010 *v172; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v174; // x8
  WarBoardManager_o *v175; // x23
  float v176; // s8
  float v177; // s10
  float encountCameraSize; // s0
  int32_t v179; // w2
  int32_t v180; // w3
  struct System_Object_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  __int64 v184; // x1
  Il2CppClass **v185; // x0
  System_Collections_Generic_IEnumerable_T__o *v186; // x23
  __int64 v187; // x1
  int32_t v188; // w2
  int32_t v189; // w3
  WarBoardTaskBase_array *v190; // x23
  WarBoardManager_o *v191; // x24
  int v192; // s0
  int32_t v195; // w2
  int32_t v196; // w3
  WarBoardTaskBase_o *v197; // x24
  int32_t v198; // w2
  int32_t v199; // w3
  WarBoardTaskBase_o *v200; // x24
  const MethodInfo *v201; // x2
  int32_t v202; // w2
  int32_t v203; // w3
  WarBoardTaskBase_o *v204; // x22
  __int64 v205; // x1
  __int64 v206; // x2
  WarBoardOrthostichySchedule_o *v207; // x22
  int32_t v208; // w2
  int32_t v209; // w3
  __int64 v210; // x1
  __int64 v211; // x2
  WarBoardParallelSchedule_o *v212; // x21
  int32_t v213; // w2
  int32_t v214; // w3
  struct System_Object_array *v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  Il2CppClass **v218; // x0
  ServantStatusBattleListViewItem_o *v219; // x0
  int32_t v220; // w1
  __int64 v221; // x1
  __int64 v222; // x2
  int32_t v223; // w3
  WarBoardPieceBaseComponent___c_c *v224; // x8
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v226; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v227; // x0
  int32_t v228; // w2
  int32_t v229; // w3
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  __int64 v232; // x1
  __int64 v233; // x2
  WarBoardTaskBase_TaskCallback_o *v234; // x26
  System_Delegate_o *v235; // x0
  int32_t v236; // w2
  int32_t v237; // w3
  WarBoardTaskBase_TaskCallback_c *v238; // x1
  int32_t v239; // w2
  int32_t v240; // w3
  struct System_Object_array *v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  Il2CppClass **v244; // x0
  __int64 v245; // x1
  __int64 v246; // x2
  System_Delegate_o *v247; // x23
  Il2CppObject *v248; // x22
  WarBoardTaskBase_TaskCallback_o *v249; // x24
  WarBoardPieceBaseComponent_c *v250; // x0
  WarBoardTaskBase_TaskCallback_c *v251; // x1
  __int64 v252; // x1
  __int64 v253; // x2
  System_Delegate_o *v254; // x22
  WarBoardPieceBaseComponent___c_c *v255; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v257; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v258; // x0
  int32_t v259; // w2
  int32_t v260; // w3
  WarBoardPieceBaseComponent_c *v261; // x0
  int32_t v262; // w2
  int32_t v263; // w3
  WarBoardTaskBase_TaskCallback_c *v264; // x1
  __int64 v265; // x0
  float v266; // [xsp+0h] [xbp-E0h]
  float v267; // [xsp+4h] [xbp-DCh]
  float v268; // [xsp+10h] [xbp-D0h]
  float v269; // [xsp+14h] [xbp-CCh]
  WarBoardManager_o **v270; // [xsp+18h] [xbp-C8h]
  float v271; // [xsp+24h] [xbp-BCh]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v273; // [xsp+30h] [xbp-B0h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v275; // 0:x3.8
  System_Nullable_Vector3__o v276; // 0:x0.16
  UnityEngine_Vector3_o v277; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v278; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v279; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v280; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v281; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v282; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49F9F68 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&squareIndex);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v14);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v17);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, v18);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, v19);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__, v20);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__, v21);
    sub_1B640C8(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, v22);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__, v23);
    sub_1B640C8(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v24);
    sub_1B640C8(&WarBoardPieceBaseComponent___c_TypeInfo, v25);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v26);
    sub_1B640C8(&WarBoardMovePerformance_TypeInfo, v27);
    sub_1B640C8(&WarBoardOrthostichySchedule_TypeInfo, v28);
    sub_1B640C8(&WarBoardParallelSchedule_TypeInfo, v29);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v30);
    sub_1B640C8(&StringLiteral_8855/*"MasterDamage"*/, v31);
    byte_49F9F68 = 1;
  }
  v32 = sub_1B64314(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v32 )
    goto LABEL_157;
  *(_QWORD *)(v32 + 24) = Instance;
  v36 = (__int64 *)(v32 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 24), Instance, v34, v35);
  if ( !*(_QWORD *)(v32 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v32 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardData__GetPiece_35061152((WarBoardData_o *)Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_157;
  v38 = (WarBoardPieceData_o *)Instance;
  Instance = *v36;
  if ( !*v36 )
    goto LABEL_157;
  *(UnityEngine_Vector3_o *)&v39 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v36;
  if ( !*v36 )
    goto LABEL_157;
  v42 = v39;
  v43 = v40;
  v44 = v41;
  *(UnityEngine_Vector3_o *)(&v45 - 1) = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)Instance,
                                           squareIndex,
                                           0LL);
  v271 = v47;
  if ( !*v36 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v36 + 440);
  if ( !Instance )
    goto LABEL_157;
  v48 = v45;
  v49 = v46;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v32 + 16) = Square;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 16), (int32_t)Square, v51, v52);
  v55 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v38, v56);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0LL);
  if ( !v55 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v55,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v55,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v270 = (WarBoardManager_o **)(v32 + 24);
  v59 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v55,
    (System_Collections_Generic_IEnumerable_T__o *)v59,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v62 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v60, v61);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v62, 0LL, 0LL);
  if ( !v62 )
    goto LABEL_157;
  v65 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v66 = (System_Delegate_o **)(v62 + 32);
  v67 = *(System_Delegate_o **)(v62 + 32);
  v68 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v63, v64);
  WarBoardTaskBase_TaskCallback___ctor(
    v68,
    (Il2CppObject *)v32,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v69 = System_Delegate__Combine(v67, (System_Delegate_o *)v68, 0LL);
  v72 = (WarBoardPieceBaseComponent_c *)v69;
  if ( v69 )
  {
    v73 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v69->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_152;
    *v66 = v69;
    if ( (WarBoardTaskBase_TaskCallback_c *)v69->klass != v73 )
      goto LABEL_152;
  }
  else
  {
    *v66 = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 32), (int32_t)v69, v70, v71);
  items = v55->fields._items;
  v77 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v55->fields._version;
  if ( !items )
    goto LABEL_157;
  v78 = v55->fields._size;
  if ( (unsigned int)v78 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v55,
      (Il2CppObject *)v62,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v79 = &items->obj.klass + v78;
    v55->fields._size = v78 + 1;
    v79[4] = (Il2CppClass *)v62;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v79 + 4), v62, v74, v75);
  }
  if ( !byte_49F7113 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v80);
    byte_49F7113 = 1;
  }
  v268 = v49;
  v269 = v48;
  v81 = v48 - v43;
  v82 = v271 - v42;
  v83 = v49 - v44;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v80);
    byte_49F7114 = 1;
  }
  Instance = (__int64)System_Math_TypeInfo;
  v84 = sqrtf((float)(v83 * v83) + (float)((float)(v82 * v82) + (float)(v81 * v81)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v84 <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      Instance = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v80);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v82 / v84;
    y = v81 / v84;
    z = v83 / v84;
  }
  if ( !v38 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v38, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v92 = v84 - lengthOnAttack;
  if ( (float)(v84 - lengthOnAttack) > 0.0 )
  {
    v93 = z;
    v267 = y;
    v94 = x * v92;
    v95 = y * v92;
    v96 = z * v92;
    v97 = v43;
    v98 = v42;
    v266 = v93;
    v42 = v42 + v94;
    v43 = v43 + v95;
    v99 = v44 + v96;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v102 = gameObject;
    v105 = (WarBoardMovePerformance_o *)sub_1B64314(WarBoardMovePerformance_TypeInfo, v103, v104);
    v277.fields.x = v98;
    v277.fields.y = v97;
    v277.fields.z = v44;
    v281.fields.x = v42;
    v281.fields.y = v43;
    v281.fields.z = v99;
    v106 = (Il2CppObject *)v105;
    v44 = v99;
    WarBoardMovePerformance___ctor(v105, v102, v277, v281, pixelPerSecond, 5, 0LL);
    v109 = v55->fields._items;
    v110 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v55->fields._version;
    if ( !v109 )
      goto LABEL_157;
    v111 = v55->fields._size;
    if ( (unsigned int)v111 >= v109->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v55,
        v106,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
    }
    else
    {
      v112 = &v109->obj.klass + v111;
      v55->fields._size = v111 + 1;
      v112[4] = (Il2CppClass *)v106;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v112 + 4), (int32_t)v106, v107, v108);
    }
    y = v267;
    z = v266;
  }
  v113 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v90,
                                                        v91);
  System_Collections_Generic_List_object____ctor(
    v113,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0LL);
  if ( !v113 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v113,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v114 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v113,
    (System_Collections_Generic_IEnumerable_T__o *)v114,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v115 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v113,
    (System_Collections_Generic_IEnumerable_T__o *)v115,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v38, 0LL) )
  {
    v141 = sub_1B64314(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v116, v117);
    System_Object___ctor((Il2CppObject *)v141, 0LL);
    if ( v141 )
    {
      *(_QWORD *)(v141 + 32) = v32;
      v144 = (Il2CppObject **)(v141 + 32);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v141 + 32), v32, v142, v143);
      System_Collections_Generic_List_object___AddRange(
        v55,
        (System_Collections_Generic_IEnumerable_T__o *)v113,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v147 = x * lengthOnEncount;
      v148 = v271 - (float)(x * lengthOnEncount);
      v149 = y * lengthOnEncount;
      v150 = z * lengthOnEncount;
      v151 = v42 + v147;
      v152 = v269 - v149;
      v153 = v43 + v149;
      v154 = v44 + v150;
      v155 = v268 - v150;
      if ( !byte_49F7114 )
      {
        sub_1B640C8(&System_Math_TypeInfo, v145);
        byte_49F7114 = 1;
      }
      v156 = v148 - v151;
      v157 = v152 - v153;
      v158 = v155 - v154;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v159 = sqrtf((float)(v158 * v158) + (float)((float)(v156 * v156) + (float)(v157 * v157)));
      if ( v159 <= 0.00001 )
      {
        if ( !byte_49F7111 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v145);
          byte_49F7111 = 1;
        }
        v163 = UnityEngine_Vector3_TypeInfo->static_fields;
        v160 = v163->zeroVector.fields.x;
        v161 = v163->zeroVector.fields.y;
        v162 = v163->zeroVector.fields.z;
      }
      else
      {
        v160 = v156 / v159;
        v161 = v157 / v159;
        v162 = v158 / v159;
      }
      if ( !byte_49F7113 )
      {
        sub_1B640C8(&System_Math_TypeInfo, v145);
        byte_49F7113 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._35_GetIconLocalPosition.method)(
                   this,
                   this->klass->vtable._36_OnShowDamagePopup.methodPtr);
      v65 = (WarBoardTaskBase_TaskCallback_c **)(v32 + 24);
      if ( *v144 )
      {
        monitor = (*v144)[1].monitor;
        if ( monitor )
        {
          v166 = monitor[6];
          if ( v166 )
          {
            Instance = *(_QWORD *)(v166 + 80);
            if ( Instance )
            {
              v167 = v164;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
              v169 = *(_QWORD *)(v141 + 32);
              *(float *)(v141 + 16) = ZoomSize;
              if ( v169 )
              {
                v170 = *(_QWORD *)(v169 + 24);
                if ( v170 )
                {
                  v171 = *(_QWORD *)(v170 + 48);
                  if ( v171 )
                  {
                    Instance = *(_QWORD *)(v171 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0LL);
                      v174 = *(_QWORD *)(v141 + 32);
                      *(UnityEngine_Vector2_o *)(v141 + 20) = ScrlPos;
                      if ( v174 )
                      {
                        v175 = *(WarBoardManager_o **)(v174 + 24);
                        *(_QWORD *)&v276.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v176 = v151 + (float)((float)(v159 * v160) * 0.5);
                        v177 = (float)(v153 + (float)((float)(v159 * v161) * 0.5)) + v167;
                        *(_QWORD *)&v276.fields.hasValue = &v273;
                        v279.fields.x = v176;
                        v279.fields.y = v177;
                        v279.fields.z = v154 + (float)((float)(v159 * v162) * 0.5);
                        *(_QWORD *)&v273.fields.hasValue = 0LL;
                        *(_QWORD *)&v273.fields.value.fields.y = 0LL;
                        System_Nullable_Vector3____ctor(v276, v279, v172);
                        encountCameraSize = this->fields.encountCameraSize;
                        p_size = (System_Nullable_float__o)&size;
                        size = 0LL;
                        System_Nullable_float____ctor(
                          p_size,
                          encountCameraSize,
                          (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
                        if ( v175 )
                        {
                          v275 = size;
                          Instance = (__int64)WarBoardManager__GetCameraPerformanceTask(v175, v273, v275, 1, 0, 1, 0LL);
                          v181 = v55->fields._items;
                          v182 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v55->fields._version;
                          if ( v181 )
                          {
                            v183 = v55->fields._size;
                            v184 = Instance;
                            if ( (unsigned int)v183 >= v181->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v55,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v185 = &v181->obj.klass + v183;
                              v55->fields._size = v183 + 1;
                              v185[4] = (Il2CppClass *)v184;
                              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v185 + 4), v184, v179, v180);
                            }
                            if ( *v144 )
                            {
                              Instance = (__int64)(*v144)[1].monitor;
                              if ( Instance )
                              {
                                v280.fields.x = v176;
                                v280.fields.y = v177;
                                v280.fields.z = v154 + (float)((float)(v159 * v162) * 0.5);
                                Instance = (__int64)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v280,
                                                      1,
                                                      0LL);
                                v224 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
                                  v224 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                _9__63_1 = v224->static_fields->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !v224->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v224);
                                    v224 = WarBoardPieceBaseComponent___c_TypeInfo;
                                  }
                                  v226 = (Il2CppObject *)v224->static_fields->__9;
                                  _9__63_1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v221, v222);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v226,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0LL);
                                  v227 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v227->__9__63_1 = _9__63_1;
                                  sub_1B6406C(
                                    (ServantStatusBattleListViewItem_o *)&v227->__9__63_1,
                                    (int32_t)_9__63_1,
                                    v228,
                                    v229);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_1B6406C(
                                    (ServantStatusBattleListViewItem_o *)&this->fields.currentActionPointLabel,
                                    (int32_t)_9__63_1,
                                    v222,
                                    v223);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v234 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(
                                                                              WarBoardTaskBase_TaskCallback_TypeInfo,
                                                                              v232,
                                                                              v233);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v234,
                                    (Il2CppObject *)v141,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0LL);
                                  v235 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v234, 0LL);
                                  v72 = (WarBoardPieceBaseComponent_c *)v235;
                                  if ( v235 )
                                  {
                                    v238 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v235->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v235;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v235->klass != v238 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0LL;
                                  }
                                  sub_1B6406C(
                                    (ServantStatusBattleListViewItem_o *)&this->fields.breakPointParent,
                                    (int32_t)v235,
                                    v236,
                                    v237);
                                  v241 = v55->fields._items;
                                  v242 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v55->fields._version;
                                  if ( v241 )
                                  {
                                    v243 = v55->fields._size;
                                    if ( (unsigned int)v243 >= v241->max_length )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v55,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v244 = &v241->obj.klass + v243;
                                      v55->fields._size = v243 + 1;
                                      v244[4] = (Il2CppClass *)this;
                                      sub_1B6406C(
                                        (ServantStatusBattleListViewItem_o *)(v244 + 4),
                                        (int32_t)this,
                                        v239,
                                        v240);
                                    }
                                    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                                          v55,
                                                          0,
                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v247 = *(System_Delegate_o **)(Instance + 32);
                                      v248 = *v144;
                                      v249 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(
                                                                                  WarBoardTaskBase_TaskCallback_TypeInfo,
                                                                                  v245,
                                                                                  v246);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v249,
                                        v248,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0LL);
                                      v250 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v247,
                                                                               (System_Delegate_o *)v249,
                                                                               0LL);
                                      v72 = v250;
                                      if ( v250 )
                                      {
                                        v251 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v250->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v250;
                                        if ( v250->_1.image != v251 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0LL;
                                      }
                                      v219 = (ServantStatusBattleListViewItem_o *)this;
                                      v220 = (int)v72;
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
    sub_1B64324(Instance);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v119 = v42 + (float)(x * lengthMoveAttack);
  v120 = v43 + (float)(y * lengthMoveAttack);
  v121 = v44 + (float)(z * lengthMoveAttack);
  v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v123 = this->fields.pixelPerSecond;
  v124 = v122;
  v127 = (WarBoardMovePerformance_o *)sub_1B64314(WarBoardMovePerformance_TypeInfo, v125, v126);
  v278.fields.x = v119;
  v278.fields.y = v120;
  v278.fields.z = v121;
  v282.fields.x = v42;
  v282.fields.y = v43;
  v282.fields.z = v44;
  v128 = (WarBoardTaskBase_o *)v127;
  WarBoardMovePerformance___ctor(v127, v124, v278, v282, v123, 4, 0LL);
  v129 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v38,
                                                                  0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v65 = (WarBoardTaskBase_TaskCallback_c **)(v32 + 24);
  if ( !*v270 )
    goto LABEL_157;
  v130 = (WarBoardMessageMaster_o *)Instance;
  Instance = (__int64)(*v270)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0LL);
  v134 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v132,
                                                        v133);
  System_Collections_Generic_List_object____ctor(
    v134,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v38->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v38, 0LL);
  if ( !v130 )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
  {
    v136 = 11;
    v137 = 1;
    v138 = v130;
    v139 = id;
    v140 = breakPoint_k__BackingField;
  }
  else
  {
    v136 = 9;
    v138 = v130;
    v139 = id;
    v140 = breakPoint_k__BackingField;
    v137 = 0;
  }
  Instance = (__int64)WarBoardMessageMaster__GetMessageTasks(v138, v139, v136, v140, v137, 0LL);
  v186 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v113,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v186,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v55,
      v186,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_1B64170(WarBoardTaskBase___TypeInfo, 5LL);
  if ( !Instance )
    goto LABEL_157;
  v190 = (WarBoardTaskBase_array *)Instance;
  if ( v128 )
  {
    Instance = sub_1B64204(v128, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !v190->max_length )
    goto LABEL_158;
  v190->m_Items[0] = v128;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v190->m_Items, (int32_t)v128, v188, v189);
  Instance = (__int64)v38->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v191 = *v270;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v191 )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__CreateAttackEffectTask(v191, *(UnityEngine_Vector3_o *)&v192, 0, 0LL);
  v197 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1B64204(Instance, v190->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v190->max_length <= 1 )
    goto LABEL_158;
  v190->m_Items[1] = v197;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v190->m_Items[1], (int32_t)v197, v195, v196);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v200 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1B64204(Instance, v190->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v190->max_length <= 2 )
    goto LABEL_158;
  v190->m_Items[2] = v200;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v190->m_Items[2], (int32_t)v200, v198, v199);
  Instance = (__int64)v38->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_8855/*"MasterDamage"*/,
                        v201);
  v204 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1B64204(Instance, v190->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v190->max_length <= 3 )
    goto LABEL_158;
  v190->m_Items[3] = v204;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v190->m_Items[3], (int32_t)v204, v202, v203);
  v207 = (WarBoardOrthostichySchedule_o *)sub_1B64314(WarBoardOrthostichySchedule_TypeInfo, v205, v206);
  WarBoardOrthostichySchedule___ctor_35388616(v207, v129, 0LL);
  if ( v207 )
  {
    Instance = sub_1B64204(v207, v190->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v265 = sub_1B64348(Instance);
      sub_1B641F0(v265, 0LL);
    }
  }
  if ( v190->max_length <= 4 )
LABEL_158:
    sub_1B6432C(Instance, v187);
  v190->m_Items[4] = (WarBoardTaskBase_o *)v207;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v190->m_Items[4], (int32_t)v207, v208, v209);
  v212 = (WarBoardParallelSchedule_o *)sub_1B64314(WarBoardParallelSchedule_TypeInfo, v210, v211);
  WarBoardParallelSchedule___ctor(v212, v190, 0LL);
  v215 = v55->fields._items;
  v216 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v55->fields._version;
  if ( !v215 )
    goto LABEL_157;
  v217 = v55->fields._size;
  if ( (unsigned int)v217 >= v215->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v55,
      (Il2CppObject *)v212,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v218 = &v215->obj.klass + v217;
  v55->fields._size = v217 + 1;
  v218[4] = (Il2CppClass *)v212;
  v219 = (ServantStatusBattleListViewItem_o *)(v218 + 4);
  v220 = (int)v212;
LABEL_140:
  sub_1B6406C(v219, v220, v213, v214);
LABEL_141:
  if ( v55->fields._size < 1 )
    return;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v55,
                        0,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
  v254 = *(System_Delegate_o **)(Instance + 32);
  v255 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v255 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__63_4 = v255->static_fields->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !v255->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v255);
      v255 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v257 = (Il2CppObject *)v255->static_fields->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v252, v253);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v257, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v258 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v258->__9__63_4 = _9__63_4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v258->__9__63_4, (int32_t)_9__63_4, v259, v260);
  }
  v261 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v254, (System_Delegate_o *)_9__63_4, 0LL);
  v72 = v261;
  if ( !v261 )
    goto LABEL_153;
  v264 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v261->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v261, v261->_1.image != v264) )
  {
LABEL_152:
    sub_1B645E4(v72);
LABEL_153:
    this->klass = v72;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)this, (int32_t)v72, v262, v263);
  Instance = (__int64)*v65;
  if ( !*v65 )
    goto LABEL_157;
  WarBoardManager__AddTask_35188000(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v55,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardData_o *Instance; // x0
  WarBoardManager_o *v7; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v9; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v13; // x1
  float v14; // s11
  float v15; // s12
  float v16; // s13
  float v17; // s8
  float v18; // s15
  float v19; // s14
  float v20; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s8
  WarBoardControlUiDataComponent_c *v26; // x0
  float v27; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9F69 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    sub_1B640C8(&WarBoardControlUiDataComponent_TypeInfo, v5);
    byte_49F9F69 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35061152(Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v9 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v29 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0LL);
  v14 = v29.fields.x;
  v15 = v29.fields.y;
  v16 = v29.fields.z;
  if ( !byte_49F7113 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v13);
    byte_49F7113 = 1;
  }
  v27 = x;
  v17 = v14 - x;
  v18 = v15 - y;
  v19 = v16 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v13);
    byte_49F7114 = 1;
  }
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  v20 = sqrtf((float)(v19 * v19) + (float)((float)(v17 * v17) + (float)(v18 * v18)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v20 <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      Instance = (WarBoardData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v21 = static_fields->zeroVector.fields.x;
    v22 = static_fields->zeroVector.fields.y;
    v23 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v21 = v17 / v20;
    v22 = v18 / v20;
    v23 = v19 / v20;
  }
  if ( !v9 )
    goto LABEL_27;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v9, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1B64324(Instance);
  }
  v30.fields.x = v27 + (float)(v21 * (float)(v20 - lengthOnAttack));
  v30.fields.y = y + (float)(v22 * (float)(v20 - lengthOnAttack));
  v30.fields.z = z + (float)(v23 * (float)(v20 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v30, 0LL);
  v26 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v26);
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
  WarBoardPieceBaseComponent_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Instance; // x25
  const MethodInfo_35D2010 *v19; // x2
  int32_t v20; // w2
  int32_t v21; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v25; // x1
  Il2CppClass **v26; // x0
  WarBoardTaskBase_array *v27; // x26
  Il2CppObject *v28; // x27
  const MethodInfo_35D2010 *v29; // x2
  int32_t v30; // w2
  int32_t v31; // w3
  WarBoardPieceBaseComponent_o *v32; // x24
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v34; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v36; // x0
  System_Nullable_Vector3__o v37; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v38; // 0:x3.8
  System_Nullable_float__o v39; // 0:x3.8
  System_Nullable_Vector3__o v40; // 0:x0.16
  System_Nullable_Vector3__o v41; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_49F9F70 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&oldBreakPoint);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    this = (WarBoardPieceBaseComponent_o *)sub_1B640C8(&WarBoardTaskBase___TypeInfo, v17);
    byte_49F9F70 = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v40.fields.hasValue = &v37;
          *(_QWORD *)&v37.fields.hasValue = 0LL;
          *(_QWORD *)&v37.fields.value.fields.y = 0LL;
          *(_QWORD *)&v40.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v40, localPosition, v19);
          if ( Instance )
          {
            v38 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v37,
                                                     v38,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            items = taskList->fields._items;
            v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              v25 = this;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)this,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v26[4] = (Il2CppClass *)v25;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v27 = (WarBoardTaskBase_array *)sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
        v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          v43 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v41.fields.hasValue = &v37;
          v37 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v41.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v41, v43, v29);
          if ( v28 )
          {
            v39 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v28,
                                                     v37,
                                                     v39,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            if ( v27 )
            {
              v32 = this;
              if ( this )
              {
                this = (WarBoardPieceBaseComponent_o *)sub_1B64204(this, v27->obj.klass->_1.element_class);
                if ( !this )
                {
                  v36 = sub_1B64348(0LL);
                  sub_1B641F0(v36, 0LL);
                }
              }
              if ( !v27->max_length )
LABEL_34:
                sub_1B6432C(this, *(_QWORD *)&oldBreakPoint);
              v27->m_Items[0] = (WarBoardTaskBase_o *)v32;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)v27->m_Items, (int32_t)v32, v30, v31);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v27, 0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_32:
      sub_1B64324(this);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_32;
  v34 = 0LL;
  if ( dummyPoint < 0 )
    dummyPoint = pieceData->fields._breakPoint_k__BackingField;
  while ( (int)v34 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( !breakPoints )
      goto LABEL_32;
    if ( (unsigned int)v34 >= breakPoints->max_length )
      goto LABEL_34;
    this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v34];
    if ( this )
    {
      if ( (int)v34 >= oldBreakPoint || dummyPoint > (int)v34 )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          dummyPoint > (int)v34,
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
        startCallback = 0LL;
      }
      pieceData = v14->fields.pieceData;
      ++v34;
      if ( pieceData )
        continue;
    }
    goto LABEL_32;
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_49F9F65 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9F65 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1B64324(Instance);
  v5 = dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v5, v6);
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
  WarBoardTaskBase_TaskCallback_o *v3; // x29
  WarBoardTaskBase_TaskCallback_c **v4; // x22
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
  __int64 v22; // x19
  WarBoardPieceData_o *Instance; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  WarBoardPieceData_o **v26; // x20
  WarBoardPieceData_o *Piece_35061152; // x0
  WarBoardPieceData_o **v28; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x25
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_object__o *v40; // x24
  System_Delegate_o *p_EndCallback; // x26
  WarBoardTaskBase_TaskCallback_o *v42; // x27
  System_Delegate_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Delegate_c *v46; // x8
  WarBoardTaskBase_TaskCallback_c *v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v51; // x1
  int32_t groupId_k__BackingField; // w9
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x29
  struct WarBoardPieceData_o *v56; // x8
  UnityEngine_GameObject_o *v57; // x26
  float v58; // s0
  float v59; // s1
  float v60; // s2
  float v61; // s8
  float v62; // s9
  float v63; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  __int64 v68; // x1
  __int64 v69; // x2
  WarBoardMovePerformance_o *v70; // x0
  WarBoardMovePerformance_o *v71; // x27
  __int64 v72; // x1
  __int64 v73; // x2
  int32_t v74; // w2
  int32_t v75; // w3
  WarBoardTaskBase_array *v76; // x26
  UnityEngine_GameObject_o *v77; // x27
  float v78; // s0
  float v79; // s1
  float v80; // s2
  struct WarBoardPieceData_o *v81; // x8
  float v82; // s8
  float v83; // s9
  float v84; // s10
  float v85; // s13
  float v86; // s11
  float v87; // s12
  float v88; // s14
  __int64 v89; // x1
  __int64 v90; // x2
  WarBoardMovePerformance_o *v91; // x0
  WarBoardTaskBase_o *v92; // x28
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  System_Delegate_o *v101; // x27
  WarBoardTaskBase_TaskCallback_o *v102; // x28
  System_Delegate_o *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  WarBoardTaskBase_TaskCallback_c *v106; // x1
  System_Delegate_o *EndCallback; // x28
  System_Delegate_o *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  WarBoardTaskBase_TaskCallback_c *v111; // x1
  int32_t v112; // w2
  int32_t v113; // w3
  struct System_Object_array *items; // x8
  _QWORD *v115; // x9
  __int64 size; // x10
  Il2CppClass **v117; // x0
  struct WarBoardPieceData_o *v118; // x8
  int32_t v119; // w2
  int32_t v120; // w3
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  __int64 v131; // x1
  __int64 v132; // x2
  System_Collections_Generic_List_object__o *v133; // x22
  System_Int32_array *PieceEventVals; // x0
  int32_t v135; // w2
  int32_t v136; // w3
  System_Int32_array *v137; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v139; // x0
  WarBoardManager_o *v140; // x20
  WarBoardTaskBase_array *v141; // x21
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x22
  __int64 v145; // x1
  __int64 v146; // x2
  WarBoardTaskBase_TaskCallback_o *v147; // x23
  int32_t v148; // w2
  int32_t v149; // w3
  int32_t v150; // w2
  int32_t v151; // w3
  __int64 v152; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v157; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v158; // 0:s3.4,4:s4.4,8:s5.4

  LODWORD(v4) = squareIndex;
  if ( (byte_49F9F66 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__, v13);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__, v14);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__, v15);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__, v16);
    sub_1B640C8(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, v17);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v18);
    sub_1B640C8(&WarBoardMovePerformance_TypeInfo, v19);
    sub_1B640C8(&WarBoardParallelSchedule_TypeInfo, v20);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v21);
    byte_49F9F66 = 1;
  }
  v22 = sub_1B64314(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v22 )
    goto LABEL_83;
  *(_QWORD *)(v22 + 48) = Instance;
  v26 = (WarBoardPieceData_o **)(v22 + 48);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 48), (int32_t)Instance, v24, v25);
  if ( !*(_QWORD *)(v22 + 48) )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v22 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_83;
  Piece_35061152 = WarBoardData__GetPiece_35061152((WarBoardData_o *)Instance, (int32_t)v4, 0LL);
  *(_QWORD *)(v22 + 40) = Piece_35061152;
  v28 = (WarBoardPieceData_o **)(v22 + 40);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 40), (int32_t)Piece_35061152, v29, v30);
  v31 = *(_QWORD *)(v22 + 48);
  if ( !v31 )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(v31 + 440);
  if ( !Instance )
    goto LABEL_83;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0LL);
  *(_QWORD *)(v22 + 16) = Square;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)Square, v33, v34);
  v37 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v35, v36);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v37, 0LL, 0LL);
  if ( !v37 )
    goto LABEL_83;
  v40 = (System_Collections_Generic_List_object__o *)(v37 + 32);
  p_EndCallback = *(System_Delegate_o **)(v37 + 32);
  v42 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v38, v39);
  WarBoardTaskBase_TaskCallback___ctor(
    v42,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v43 = System_Delegate__Combine(p_EndCallback, (System_Delegate_o *)v42, 0LL);
  v46 = (System_Delegate_c *)v43;
  if ( v43 )
  {
    v47 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v40->klass = (System_Collections_Generic_List_object__c *)v43;
    if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass != v47 )
      goto LABEL_44;
  }
  else
  {
    v40->klass = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v43, v44, v45);
  Instance = (WarBoardPieceData_o *)sub_1B64170(int___TypeInfo, 2LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_83;
  v51 = Instance;
  if ( !Instance )
    goto LABEL_83;
  groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
  if ( !groupId_k__BackingField
    || (Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField,
        groupId_k__BackingField == 1) )
  {
LABEL_84:
    sub_1B6432C(Instance, v51);
  }
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  *(_QWORD *)(v22 + 24) = Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)Instance, v48, v49);
  v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v55 = *(_QWORD *)(v22 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v56 = this->fields.pieceData;
  if ( !v56 )
    goto LABEL_83;
  v57 = (UnityEngine_GameObject_o *)Instance;
  Instance = *(WarBoardPieceData_o **)(v22 + 48);
  if ( !Instance )
    goto LABEL_83;
  *(UnityEngine_Vector3_o *)&v58 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     v56->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v26;
  if ( !*v26 )
    goto LABEL_83;
  v61 = v58;
  v62 = v59;
  v63 = v60;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v70 = (WarBoardMovePerformance_o *)sub_1B64314(WarBoardMovePerformance_TypeInfo, v68, v69);
  v154.fields.x = v61;
  v154.fields.y = v62;
  v154.fields.z = v63;
  v157.fields.x = x;
  v157.fields.y = y;
  v157.fields.z = z;
  v71 = v70;
  WarBoardMovePerformance___ctor(v70, v57, v154, v157, pixelPerSecond, 0, 0LL);
  if ( v55 )
  {
    Instance = (WarBoardPieceData_o *)sub_1B64170(WarBoardTaskBase___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_83;
    v76 = (WarBoardTaskBase_array *)Instance;
    if ( v71 )
    {
      Instance = (WarBoardPieceData_o *)sub_1B64204(v71, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_85;
    }
    if ( !v76->max_length )
      goto LABEL_84;
    v76->m_Items[0] = (WarBoardTaskBase_o *)v71;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v76->m_Items, (int32_t)v71, v74, v75);
    Instance = *v28;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( *v28 )
    {
      Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0LL);
      if ( *v26 )
      {
        v77 = (UnityEngine_GameObject_o *)Instance;
        *(UnityEngine_Vector3_o *)&v78 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v26, (int32_t)v4, 0LL);
        v81 = this->fields.pieceData;
        if ( v81 )
        {
          Instance = *v26;
          if ( *v26 )
          {
            v82 = v78;
            v83 = v79;
            v84 = v80;
            v155 = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v81->fields._nowSquareIndex_k__BackingField,
                     0LL);
            v85 = this->fields.pixelPerSecond;
            v86 = v155.fields.x;
            v87 = v155.fields.y;
            v88 = v155.fields.z;
            v91 = (WarBoardMovePerformance_o *)sub_1B64314(WarBoardMovePerformance_TypeInfo, v89, v90);
            v156.fields.x = v82;
            v156.fields.y = v83;
            v156.fields.z = v84;
            v158.fields.x = v86;
            v158.fields.y = v87;
            v158.fields.z = v88;
            v92 = (WarBoardTaskBase_o *)v91;
            WarBoardMovePerformance___ctor(v91, v77, v156, v158, v85, 0, 0LL);
            if ( !v92 || (Instance = (WarBoardPieceData_o *)sub_1B64204(v92, v76->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v76->max_length <= 1 )
                goto LABEL_84;
              v76->m_Items[1] = v92;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v76->m_Items[1], (int32_t)v92, v93, v94);
              Instance = (WarBoardPieceData_o *)sub_1B64204(v37, v76->obj.klass->_1.element_class);
              if ( Instance )
              {
                if ( v76->max_length <= 2 )
                  goto LABEL_84;
                v76->m_Items[2] = (WarBoardTaskBase_o *)v37;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v76->m_Items[2], v37, v95, v96);
                v37 = sub_1B64314(WarBoardParallelSchedule_TypeInfo, v97, v98);
                WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v37, v76, 0LL);
                if ( !v37 )
                  goto LABEL_83;
                p_EndCallback = (System_Delegate_o *)(v37 + 40);
                v101 = *(System_Delegate_o **)(v37 + 40);
                v102 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v99, v100);
                WarBoardTaskBase_TaskCallback___ctor(
                  v102,
                  (Il2CppObject *)v22,
                  Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
                  0LL);
                v103 = System_Delegate__Combine(v101, (System_Delegate_o *)v102, 0LL);
                v46 = (System_Delegate_c *)v103;
                if ( !v103 )
                  goto LABEL_45;
                v106 = WarBoardTaskBase_TaskCallback_TypeInfo;
                if ( (WarBoardTaskBase_TaskCallback_c *)v103->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
                {
                  p_EndCallback->klass = (System_Delegate_c *)v103;
                  if ( (WarBoardTaskBase_TaskCallback_c *)v103->klass == v106 )
                  {
LABEL_46:
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_EndCallback, (int32_t)v46, v104, v105);
                    if ( !v40 )
                      goto LABEL_83;
                    items = v40->fields._items;
                    v115 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                    ++v40->fields._version;
                    if ( !items )
                      goto LABEL_83;
                    size = v40->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v40,
                        (Il2CppObject *)v37,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v117 = &items->obj.klass + size;
                      v40->fields._size = size + 1;
                      v117[4] = (Il2CppClass *)v37;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v117 + 4), v37, v112, v113);
                    }
                    v118 = this->fields.pieceData;
                    if ( !v118 )
                      goto LABEL_83;
                    Instance = *v28;
                    if ( !*v28 )
                      goto LABEL_83;
                    WarBoardPieceData__SetSquareIndex(Instance, v118->fields._nowSquareIndex_k__BackingField, 0LL);
                    goto LABEL_64;
                  }
                }
LABEL_44:
                sub_1B645E4(v46);
LABEL_45:
                p_EndCallback->klass = v46;
                goto LABEL_46;
              }
            }
LABEL_85:
            v152 = sub_1B64348(Instance);
            sub_1B641F0(v152, 0LL);
          }
        }
      }
    }
LABEL_83:
    sub_1B64324(Instance);
  }
  if ( !v71 )
    goto LABEL_83;
  v28 = (WarBoardPieceData_o **)(unsigned int)v4;
  p_EndCallback = (System_Delegate_o *)&v71->fields.EndCallback;
  EndCallback = (System_Delegate_o *)v71->fields.EndCallback;
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v72, v73);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0LL);
  v108 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v3, 0LL);
  v46 = (System_Delegate_c *)v108;
  if ( v108 )
  {
    v111 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v108->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    p_EndCallback->klass = (System_Delegate_c *)v108;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v28;
    if ( (WarBoardTaskBase_TaskCallback_c *)v108->klass != v111 )
      goto LABEL_44;
  }
  else
  {
    p_EndCallback->klass = 0LL;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v28;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v71->fields.EndCallback, (int32_t)v108, v109, v110);
  v28 = (WarBoardPieceData_o **)(v22 + 40);
  if ( !v40 )
    goto LABEL_83;
  v121 = v40->fields._items;
  v122 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v40->fields._version;
  if ( !v121 )
    goto LABEL_83;
  v123 = v40->fields._size;
  if ( (unsigned int)v123 >= v121->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v40,
      (Il2CppObject *)v71,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
  }
  else
  {
    v124 = &v121->obj.klass + v123;
    v40->fields._size = v123 + 1;
    v124[4] = (Il2CppClass *)v71;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v124 + 4), (int32_t)v71, v119, v120);
  }
  v127 = v40->fields._items;
  v128 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v40->fields._version;
  if ( !v127 )
    goto LABEL_83;
  v129 = v40->fields._size;
  if ( (unsigned int)v129 >= v127->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v40,
      (Il2CppObject *)v37,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
  }
  else
  {
    v130 = &v127->obj.klass + v129;
    v40->fields._size = v129 + 1;
    v130[4] = (Il2CppClass *)v37;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v130 + 4), v37, v125, v126);
  }
LABEL_64:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0LL);
  v133 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v131,
                                                        v132);
  System_Collections_Generic_List_object____ctor(
    v133,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0LL);
  *(_QWORD *)(v22 + 32) = PieceEventVals;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)PieceEventVals, v135, v136);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v22 + 32),
                                      0LL);
  if ( !v133 )
    goto LABEL_83;
  System_Collections_Generic_List_object___AddRange(
    v133,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v28 )
  {
    v137 = WarBoardPieceData__CreatePieceEventVals(*v28, 0LL);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v137, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v133,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v139 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v133,
    (System_Collections_Generic_IEnumerable_T__o *)v139,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v133,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v26;
    if ( !*v26 )
      goto LABEL_83;
    WarBoardManager__AddTask_35188000(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v133,
      0LL);
  }
  Instance = *v26;
  if ( !*v26 )
    goto LABEL_83;
  WarBoardManager__AddTask_35188000(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v40,
    0LL);
  v140 = *(WarBoardManager_o **)(v22 + 48);
  v141 = (WarBoardTaskBase_array *)sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
  v144 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v142, v143);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v144, 0LL, 0LL);
  v147 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(v3->klass, v145, v146);
  WarBoardTaskBase_TaskCallback___ctor(
    v147,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0LL);
  if ( !v144 )
    goto LABEL_83;
  *(_QWORD *)(v144 + 32) = v147;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v144 + 32), (int32_t)v147, v148, v149);
  if ( !v141 )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)sub_1B64204(v144, v141->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_85;
  if ( !v141->max_length )
    goto LABEL_84;
  v141->m_Items[0] = (WarBoardTaskBase_o *)v144;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v141->m_Items, v144, v150, v151);
  if ( !v140 )
    goto LABEL_83;
  WarBoardManager__AddTask(v140, 0, v141, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnRevive(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  int v4; // w8
  const MethodInfo *v5; // x2

  if ( (byte_49F9F64 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9F64 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1B64324(Instance);
  v4 = WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL) - this->fields.dispPriotiry;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v4, v5);
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

  if ( (byte_49F9F72 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18754/*"ef_dm_base"*/, popText);
    byte_49F9F72 = 1;
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x23
  WarBoardData_o *Instance; // x0
  WarBoardManager_o *v20; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v22; // x21
  float x; // s8
  float y; // s10
  float z; // s15
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s11
  float v30; // s9
  float v31; // s13
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_object__o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  System_Delegate_o **v42; // x25
  System_Delegate_o *v43; // x26
  WarBoardTaskBase_TaskCallback_o *v44; // x27
  System_Delegate_o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Delegate_o *v48; // x8
  WarBoardTaskBase_TaskCallback_c *v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  __int64 v56; // x1
  float v57; // s12
  float v58; // s14
  float v59; // s8
  float v60; // s9
  float v61; // s11
  float v62; // s13
  float v63; // s1
  float v64; // s2
  float v65; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v67; // s0
  float v68; // s8
  float v69; // s11
  float v70; // s12
  float v71; // s15
  float v72; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s14
  UnityEngine_GameObject_o *v75; // x24
  __int64 v76; // x1
  __int64 v77; // x2
  WarBoardMovePerformance_o *v78; // x0
  Il2CppObject *v79; // x23
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  float lengthMoveAttack; // s0
  float v87; // s1
  float v88; // s2
  float v89; // s0
  float v90; // s8
  float v91; // s9
  float v92; // s10
  UnityEngine_GameObject_o *v93; // x0
  float v94; // s14
  UnityEngine_GameObject_o *v95; // x22
  __int64 v96; // x1
  __int64 v97; // x2
  WarBoardMovePerformance_o *v98; // x0
  WarBoardTaskBase_o *v99; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v100; // x22
  __int64 v101; // x1
  __int64 v102; // x2
  System_Collections_Generic_List_object__o *v103; // x23
  __int64 v104; // x1
  int32_t v105; // w2
  int32_t v106; // w3
  WarBoardTaskBase_array *v107; // x23
  int32_t v108; // w2
  int32_t v109; // w3
  WarBoardData_o *v110; // x21
  int32_t v111; // w2
  int32_t v112; // w3
  WarBoardData_o *v113; // x21
  __int64 v114; // x1
  __int64 v115; // x2
  WarBoardOrthostichySchedule_o *v116; // x21
  int32_t v117; // w2
  int32_t v118; // w3
  __int64 v119; // x1
  __int64 v120; // x2
  WarBoardParallelSchedule_o *v121; // x21
  int32_t v122; // w2
  int32_t v123; // w3
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x0
  __int64 v128; // x0
  float v129; // [xsp+8h] [xbp-A8h]
  float v130; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v136; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49F9F6B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v7);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__, v11);
    sub_1B640C8(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, v12);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v13);
    sub_1B640C8(&WarBoardMovePerformance_TypeInfo, v14);
    sub_1B640C8(&WarBoardOrthostichySchedule_TypeInfo, v15);
    sub_1B640C8(&WarBoardParallelSchedule_TypeInfo, v16);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v17);
    byte_49F9F6B = 1;
  }
  v18 = sub_1B64314(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  v20 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_64;
  v22 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v20, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  *(UnityEngine_Vector3_o *)&v26 = WarBoardManager__GetSquarePosition(v20, squareIndex, 0LL);
  Instance = v20->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  v29 = v26;
  v30 = v27;
  v31 = v28;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !v18 )
    goto LABEL_64;
  *(_QWORD *)(v18 + 16) = Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)Instance, v32, v33);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v39 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v37, v38);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v39, 0LL, 0LL);
  if ( !v39 )
    goto LABEL_64;
  v42 = (System_Delegate_o **)(v39 + 32);
  v43 = *(System_Delegate_o **)(v39 + 32);
  v44 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v40, v41);
  WarBoardTaskBase_TaskCallback___ctor(
    v44,
    (Il2CppObject *)v18,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v45 = System_Delegate__Combine(v43, (System_Delegate_o *)v44, 0LL);
  v48 = v45;
  if ( v45 )
  {
    v49 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v45->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v42 = v45;
      if ( (WarBoardTaskBase_TaskCallback_c *)v45->klass == v49 )
        goto LABEL_14;
    }
    sub_1B645E4(v45);
  }
  *v42 = v48;
LABEL_14:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 32), (int32_t)v48, v46, v47);
  if ( !v36 )
    goto LABEL_64;
  items = v36->fields._items;
  v53 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v36->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v36->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)v39,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &items->obj.klass + size;
    v36->fields._size = size + 1;
    v55[4] = (Il2CppClass *)v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 4), v39, v50, v51);
  }
  if ( !byte_49F7113 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v56);
    byte_49F7113 = 1;
  }
  v57 = x;
  v58 = v29 - x;
  v59 = v30 - y;
  v60 = v31 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v56);
    byte_49F7114 = 1;
  }
  v61 = sqrtf((float)(v60 * v60) + (float)((float)(v58 * v58) + (float)(v59 * v59)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v62 = z;
  if ( v61 <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v56);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v63 = static_fields->zeroVector.fields.x;
    v64 = static_fields->zeroVector.fields.y;
    v65 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v63 = v58 / v61;
    v64 = v59 / v61;
    v65 = v60 / v61;
  }
  v67 = v61 - this->fields.lengthOnAttack;
  if ( v67 <= 0.0 )
  {
    v69 = v57;
    v70 = y;
  }
  else
  {
    v129 = v64;
    v130 = v63;
    v68 = v57;
    v69 = v57 + (float)(v63 * v67);
    v70 = y + (float)(v64 * v67);
    v71 = y;
    v72 = v62;
    v62 = v62 + (float)(v65 * v67);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v75 = gameObject;
    v78 = (WarBoardMovePerformance_o *)sub_1B64314(WarBoardMovePerformance_TypeInfo, v76, v77);
    v132.fields.x = v68;
    v132.fields.y = v71;
    v132.fields.z = v72;
    v135.fields.x = v69;
    v135.fields.y = v70;
    v135.fields.z = v62;
    v79 = (Il2CppObject *)v78;
    WarBoardMovePerformance___ctor(v78, v75, v132, v135, pixelPerSecond, 5, 0LL);
    v82 = v36->fields._items;
    v83 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v36->fields._version;
    if ( !v82 )
      goto LABEL_64;
    v84 = v36->fields._size;
    if ( (unsigned int)v84 >= v82->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        v79,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = &v82->obj.klass + v84;
      v36->fields._size = v84 + 1;
      v85[4] = (Il2CppClass *)v79;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v79, v80, v81);
    }
    v64 = v129;
    v63 = v130;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v87 = v63 * lengthMoveAttack;
  v88 = v64 * lengthMoveAttack;
  v89 = v65 * lengthMoveAttack;
  v90 = v69 + v87;
  v91 = v70 + v88;
  v92 = v62 + v89;
  v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v94 = this->fields.pixelPerSecond;
  v95 = v93;
  v98 = (WarBoardMovePerformance_o *)sub_1B64314(WarBoardMovePerformance_TypeInfo, v96, v97);
  v133.fields.x = v90;
  v133.fields.y = v91;
  v133.fields.z = v92;
  v136.fields.x = v69;
  v136.fields.y = v70;
  v136.fields.z = v62;
  v99 = (WarBoardTaskBase_o *)v98;
  WarBoardMovePerformance___ctor(v98, v95, v133, v136, v94, 4, 0LL);
  if ( !v22 )
    goto LABEL_64;
  v100 = WarBoardWallData__DecrementBreakPointPerformance(v22, 1, 0LL);
  v103 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v101,
                                                        v102);
  System_Collections_Generic_List_object____ctor(
    v103,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0LL, 0LL), !v103)
    || (System_Collections_Generic_List_object___AddRange(
          v103,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v36,
          (System_Collections_Generic_IEnumerable_T__o *)v103,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_1B64170(WarBoardTaskBase___TypeInfo, 4LL)) == 0LL) )
  {
LABEL_64:
    sub_1B64324(Instance);
  }
  v107 = (WarBoardTaskBase_array *)Instance;
  if ( v99 )
  {
    Instance = (WarBoardData_o *)sub_1B64204(v99, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !v107->max_length )
    goto LABEL_65;
  v107->m_Items[0] = v99;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v107->m_Items, (int32_t)v99, v105, v106);
  Instance = (WarBoardData_o *)v22->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0LL);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v20, IconPosition, 0, 0LL);
  v110 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1B64204(Instance, v107->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v107->max_length <= 1 )
    goto LABEL_65;
  v107->m_Items[1] = (WarBoardTaskBase_o *)v110;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v107->m_Items[1], (int32_t)v110, v108, v109);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v113 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1B64204(Instance, v107->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v107->max_length <= 2 )
    goto LABEL_65;
  v107->m_Items[2] = (WarBoardTaskBase_o *)v113;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v107->m_Items[2], (int32_t)v113, v111, v112);
  v116 = (WarBoardOrthostichySchedule_o *)sub_1B64314(WarBoardOrthostichySchedule_TypeInfo, v114, v115);
  WarBoardOrthostichySchedule___ctor_35388616(v116, v100, 0LL);
  if ( v116 )
  {
    Instance = (WarBoardData_o *)sub_1B64204(v116, v107->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v128 = sub_1B64348(Instance);
      sub_1B641F0(v128, 0LL);
    }
  }
  if ( v107->max_length <= 3 )
LABEL_65:
    sub_1B6432C(Instance, v104);
  v107->m_Items[3] = (WarBoardTaskBase_o *)v116;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v107->m_Items[3], (int32_t)v116, v117, v118);
  v121 = (WarBoardParallelSchedule_o *)sub_1B64314(WarBoardParallelSchedule_TypeInfo, v119, v120);
  WarBoardParallelSchedule___ctor(v121, v107, 0LL);
  v124 = v36->fields._items;
  v125 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v36->fields._version;
  if ( !v124 )
    goto LABEL_64;
  v126 = v36->fields._size;
  if ( (unsigned int)v126 >= v124->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)v121,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
  }
  else
  {
    v127 = &v124->obj.klass + v126;
    v36->fields._size = v126 + 1;
    v127[4] = (Il2CppClass *)v121;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v127 + 4), (int32_t)v121, v122, v123);
  }
  if ( v36->fields._size >= 1 )
    WarBoardManager__AddTask_35188000(v20, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v36, 0LL);
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

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_5;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0LL) )
    return;
  WarBoardPieceBaseComponent__StopSimpleAnimation(this, animationName, v6);
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
LABEL_5:
    sub_1B64324(simpleAnimation);
  SimpleAnimation__Play_63513060(simpleAnimation, animationName, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__RepareBreakPointByPiece(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
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
    sub_1B64324(this);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0LL;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= breakPoints->max_length )
        sub_1B6432C(this, method);
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


void __fastcall WarBoardPieceBaseComponent__Selectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 1;
}


void __fastcall WarBoardPieceBaseComponent__SetButtonTweenTarget(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v24; // x1
  Il2CppClass **v25; // x0
  struct UICommonButton_o *button; // x19
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49F9F5B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, parents);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49F9F5B = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       parents,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v16 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)klass )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v18,
                                                                     0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v10,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v18,
                                                                       0LL);
            items = v10->fields._items;
            v22 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v24 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v24;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B6432C(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v10,
                                                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B64324(ComponentsInChildren_object);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v27,
    v28);
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

  if ( (byte_49F9F5D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9F5D = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1B64324(0LL);
    if ( enable )
    {
      v7 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0LL);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_11;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *listEffectData; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Predicate_object__o *v18; // x21
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  _QWORD *monitor; // x22
  __int64 v22; // x8
  unsigned __int64 v23; // x23
  bool v24; // w19
  UnityEngine_Object_o *v25; // x21

  if ( (byte_49F9F71 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__, effectKey);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__, v9);
    sub_1B640C8(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, v10);
    byte_49F9F71 = 1;
  }
  v11 = sub_1B64314(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, effectKey, isDisp);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_18;
  *(_QWORD *)(v11 + 16) = effectKey;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)effectKey, v13, v14);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v18 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo,
                                        v16,
                                        v17);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    0LL);
  if ( !listEffectData )
    goto LABEL_18;
  v12 = System_Collections_Generic_List_object___Find(
          listEffectData,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v20 = v12;
  if ( !v12 )
    return v20 != 0LL;
  monitor = v12[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_1B64324(v12);
  v22 = monitor[3];
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    v24 = isDisp;
    do
    {
      if ( v23 >= (unsigned int)v22 )
        sub_1B6432C(v12, v19);
      v25 = (UnityEngine_Object_o *)monitor[v23 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = (Il2CppObject *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)v12 & 1) == 0 )
      {
        if ( !v25 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v25, v24, 0LL);
      }
      LODWORD(v22) = *((_DWORD *)monitor + 6);
      ++v23;
    }
    while ( (__int64)v23 < (int)v22 );
  }
  return v20 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_49F9F5C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9F5C = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1B64324(0LL);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__ShowActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_49F9F5F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9F5F = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_25;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0LL);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
    if ( !pieceData )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0LL);
  }
  v4 = this->fields.pieceData;
  if ( !v4 || (pieceData = (WarBoardPieceData_o *)v4->fields._Cost_k__BackingField) == 0LL )
LABEL_25:
    sub_1B64324(pieceData);
  if ( WarBoardCost__get_HasCost((WarBoardCost_o *)pieceData, 0LL) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
    {
      pieceData = (WarBoardPieceData_o *)this->fields.currentPieceActionPointRoot;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0LL);
        pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
        if ( pieceData )
        {
          v6 = this->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pieceData, 0LL);
          v8 = 112LL;
          if ( activeSelf )
            v8 = 124LL;
          if ( activeSelf )
            v9 = 120LL;
          else
            v9 = 108LL;
          if ( activeSelf )
            v10 = 116LL;
          else
            v10 = 104LL;
          v11.fields.x = *(float *)((char *)&this->klass + v10);
          v11.fields.y = *(float *)((char *)&this->klass + v9);
          v11.fields.z = *(float *)((char *)&this->klass + v8);
          GameObjectExtensions__SetLocalPosition(v6, v11, 0LL);
          goto LABEL_24;
        }
      }
      goto LABEL_25;
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
    sub_1B64324(0LL);
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

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_7;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0LL) )
  {
    simpleAnimation = this->fields.simpleAnimation;
    if ( simpleAnimation )
    {
      SimpleAnimation__Stop_63510576(simpleAnimation, animationName, 0LL);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0LL);
        return;
      }
    }
LABEL_7:
    sub_1B64324(simpleAnimation);
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
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0LL);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    v4 = this->fields.pieceData;
    if ( !v4 )
      goto LABEL_13;
    currentActionPointLabel = this->fields.currentActionPointLabel;
    currentActionCount_k__BackingField = v4->fields._currentActionCount_k__BackingField;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0LL);
    if ( !currentActionPointLabel )
      goto LABEL_13;
    UILabel__set_text(currentActionPointLabel, (System_String_o *)pieceData, 0LL);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_HasCost(pieceData, 0LL);
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
        pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0LL);
        if ( currentPieceActionPointLabel )
        {
          UILabel__set_text(currentPieceActionPointLabel, (System_String_o *)pieceData, 0LL);
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1B64324(pieceData);
  }
LABEL_12:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiBrightnessByPieceStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  __int64 v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_HashSet_T__o *v28; // x22
  WarBoardPieceData_o *pieceData; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_HashSet_T__o **v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_HashSet_T__o *v35; // x23
  __int64 v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v42; // w23
  System_Action_object__o *v43; // x25
  System_Collections_Generic_IEnumerable_T__o *v44; // x24
  System_Action_object__o *v45; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_object__o *v47; // x25
  System_Collections_Generic_IEnumerable_T__o *v48; // x23
  System_Action_object__o *v49; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_object__o *v52; // x20
  _BOOL8 v53; // x0
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *removeTweenTargetObjects; // x23
  Il2CppObject *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x0
  Il2CppObject *v58; // x1
  UnityEngine_GameObject_o *v59; // x0
  Il2CppObject *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x1
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  struct UICommonButton_o *v68; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_Collections_Generic_HashSet_Enumerator_T__o v72; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v73; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9F62 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_UIWidget__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_UIWidget___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_GameObject___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_GameObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__, v13);
    sub_1B640C8(&System_Collections_Generic_HashSet_UIWidget__TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Contains__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Remove__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor___75655488, v18);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v19);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__, v20);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__, v21);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__, v22);
    sub_1B640C8(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__, v23);
    sub_1B640C8(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, v24);
    byte_49F9F62 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v25 = sub_1B64314(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  v28 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_UIWidget__TypeInfo,
                                                     v26,
                                                     v27);
  System_Collections_Generic_HashSet_object____ctor(
    v28,
    (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v25 )
    goto LABEL_39;
  *(_QWORD *)(v25 + 24) = v28;
  v32 = (System_Collections_Generic_HashSet_T__o **)(v25 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)v28, v30, v31);
  v35 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_UIWidget__TypeInfo,
                                                     v33,
                                                     v34);
  System_Collections_Generic_HashSet_object____ctor(
    v35,
    (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v25 + 16) = v35;
  v36 = v25 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)v35, v37, v38);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_39;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0LL);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v42 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v43 = (System_Action_object__o *)sub_1B64314(System_Action_UIWidget__TypeInfo, v39, v40);
    System_Action_object____ctor(
      v43,
      (Il2CppObject *)v25,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v43,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_39;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, 0LL);
    if ( v42 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v44 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v45 = (System_Action_object__o *)sub_1B64314(System_Action_UIWidget__TypeInfo, v39, v40);
      System_Action_object____ctor(
        v45,
        (Il2CppObject *)v25,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0LL);
      BasicHelper__ForEach_object_(
        v44,
        (System_Action_T__o *)v45,
        (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v47 = (System_Action_object__o *)sub_1B64314(System_Action_UIWidget__TypeInfo, v39, v40);
    System_Action_object____ctor(
      v47,
      (Il2CppObject *)v25,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v47,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v42 & 1) != 0 )
    {
      v48 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v49 = (System_Action_object__o *)sub_1B64314(System_Action_UIWidget__TypeInfo, v39, v40);
      System_Action_object____ctor(
        v49,
        (Il2CppObject *)v25,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0LL);
      BasicHelper__ForEach_object_(
        v48,
        (System_Action_T__o *)v49,
        (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v36 )
    goto LABEL_39;
  if ( *(int *)(*(_QWORD *)v36 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_39;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v52 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor_55234504(
    v52,
    tweenTargets,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_GameObject___ctor___75655488);
  pieceData = *(WarBoardPieceData_o **)v36;
  if ( !*(_QWORD *)v36 )
    goto LABEL_39;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v72,
    (System_Collections_Generic_HashSet_T__o *)pieceData,
    (const MethodInfo_336A938 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v73 = v72;
  while ( 1 )
  {
    v53 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_3229B40 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v53 )
      break;
    current = v73.fields._current;
    if ( !v73.fields._current )
      sub_1B64324(v53);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v73.fields._current,
                                   0LL);
    if ( !removeTweenTargetObjects )
      sub_1B64324(gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v58 = (Il2CppObject *)v57;
      if ( !v52 )
        sub_1B64324(v57);
      goto LABEL_22;
    }
    if ( !*v32 )
      sub_1B64324(0LL);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v32,
           current,
           (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v74.fields.r = 0.5;
      v74.fields.g = 0.5;
      v74.fields.b = 0.5;
      v74.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v74, 0LL);
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v58 = (Il2CppObject *)v59;
      if ( !v52 )
        sub_1B64324(v59);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v52,
        v58,
        (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      v75.fields.r = 1.0;
      v75.fields.g = 1.0;
      v75.fields.b = 1.0;
      v75.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v75, 0LL);
      v60 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v63 = v60;
      if ( !v52 )
        sub_1B64324(v60);
      items = v52->fields._items;
      v65 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v52->fields._version;
      if ( !items )
        sub_1B64324(v60);
      size = v52->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          v60,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        v52->fields._size = size + 1;
        v67[4] = (Il2CppClass *)v63;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)v63, v61, v62);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_3229B3C *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v68 = this->fields.button;
  v69 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v52,
          (const MethodInfo_2E57E58 *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_object_(
                                       v69,
                                       (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v68 )
LABEL_39:
    sub_1B64324(pieceData);
  v68->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v68->fields.tweenTargets, (int32_t)pieceData, v70, v71);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  const MethodInfo *v4; // x2
  WarBoardPieceStatusLabel_o *v5; // x0

  if ( (byte_49F9F61 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9F61 = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    v5 = this->fields.pieceStatusLabelComponent;
    if ( !v5 )
      sub_1B64324(0LL);
    WarBoardPieceStatusLabel__SetupLabel(v5, this->fields.pieceData, v4);
  }
}


void __fastcall WarBoardPieceBaseComponent__UpdateWidgetDepth(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardData_o *Instance; // x0
  int32_t PieceDispPriority; // w0
  const MethodInfo *v6; // x2

  if ( (byte_49F9F75 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9F75 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1B64324(Instance);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v6);
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
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int max_length; // w21
  il2cpp_array_size_t i; // w22
  Il2CppClass **v15; // x0
  Il2CppClass *v16; // x8
  Il2CppClass *v17; // t1
  unsigned __int64 v18; // x22
  __int64 v19; // x24
  UnityEngine_Object_o *v20; // x21
  struct UIWidget_array *v21; // x8

  v4 = this;
  if ( (byte_49F9F6E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, *(_QWORD *)&value);
    this = (WarBoardPieceBaseComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F9F6E = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v4->fields.uiWidgets,
      (int32_t)ComponentsInChildren_object,
      v9,
      v10);
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
        if ( i >= uiWidgets->max_length )
          goto LABEL_28;
        v15 = &uiWidgets->obj.klass + (int)i;
        v17 = v15[4];
        this = (WarBoardPieceBaseComponent_o *)(v15 + 4);
        v16 = v17;
        if ( !v17 )
          goto LABEL_26;
        if ( SLODWORD(v16->_1.interfaceOffsets) >= 1001 )
        {
          this->klass = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)this, 0, v11, v12);
        }
        uiWidgets = *p_uiWidgets;
      }
      if ( !uiWidgets )
LABEL_26:
        sub_1B64324(this);
    }
  }
  if ( (int)*(_QWORD *)&uiWidgets->max_length >= 1 )
  {
    v18 = 0LL;
    v19 = (unsigned int)*(_QWORD *)&uiWidgets->max_length - 1LL;
    while ( v18 < uiWidgets->max_length )
    {
      v20 = (UnityEngine_Object_o *)uiWidgets->m_Items[v18];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v21 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_26;
        if ( v18 >= v21->max_length )
          break;
        this = (WarBoardPieceBaseComponent_o *)v21->m_Items[v18];
        if ( !this )
          goto LABEL_26;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0LL);
      }
      if ( v19 == v18 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v18;
      if ( !*p_uiWidgets )
        goto LABEL_26;
    }
LABEL_28:
    sub_1B6432C(this, *(_QWORD *)&value);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9F77 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardPieceBaseComponent___c_TypeInfo, v1);
    byte_49F9F77 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardPieceBaseComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_c *v2; // x0

  if ( (byte_49F9F7A & 1) == 0 )
  {
    sub_1B640C8(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_49F9F7A = 1;
  }
  v2 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__ResumeUiDataAll((const MethodInfo *)v2);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F9F78 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F9F78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_c *v2; // x0

  if ( (byte_49F9F79 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_49F9F79 = 1;
  }
  v2 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v2);
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
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_49F9F7B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_49F9F7B = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1B64324(0LL);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_49F9F7C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_49F9F7C = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1B64324(0LL);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_49F9F7D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_49F9F7D = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1B64324(0LL);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_49F9F7E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_49F9F7E = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1B64324(0LL);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_1B64324(0LL);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_49F9F7F & 1) == 0 )
  {
    sub_1B640C8(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_49F9F7F = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, v2);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_49F9F80 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_49F9F80 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, v2);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_g__AddAfterTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  WarBoardManager_o *Instance; // x0
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v14; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_49F9F81 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    byte_49F9F81 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0LL);
  if ( !v9 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_1B64324(Instance);
  v14 = WarBoardManager__GetEventTasks(Instance, 37, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)v14,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
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
    sub_1B64324(0LL);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_1B64324(0LL);
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
  WarBoardManager__ClearPartyBuff((WarBoardManager_o *)this, 0LL);
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
  MapZoom__SetZoomSize((MapZoom_o *)this, v3->fields.prevCameraSize, 1, 0, 0LL);
  v7 = v3->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7->fields.warBoardManager;
  if ( !v8
    || (v9 = v8->fields.mapCamera) == 0LL
    || (this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v9->fields.mScrl) == 0LL
    || (MapScroll__SetScrlPos((MapScroll_o *)this, v3->fields.prevCameraPos, 0LL),
        (v10 = v3->fields.CS___8__locals1) == 0LL)
    || (v11 = v10->fields.warBoardManager) == 0LL
    || (v12 = v11->fields.mapCamera) == 0LL
    || (mScrl = (struct UnityEngine_Vector2_o *)v12->fields.mScrl) == 0LL )
  {
LABEL_16:
    sub_1B64324(this);
  }
  mScrl[3] = v3->fields.prevCameraPos;
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
  const MethodInfo *v2; // x2
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_49F9F83 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9F83 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, v2),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(_4__this);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_1B64324(this);
  return this->fields.moveAfterActionCheck && targetPiece->fields._isDead_k__BackingField;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  WarBoardPieceData_o *targetPiece; // x0
  const MethodInfo *v12; // x2
  struct WarBoardManager_o *warBoardManager; // x8
  int32_t id; // w21
  struct WarBoardPieceData_o *v15; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v17; // x22
  int32_t v18; // w2
  bool v19; // w4
  WarBoardMessageMaster_o *v20; // x0
  int32_t v21; // w1
  int32_t v22; // w3
  System_Int32_array *v23; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v25; // x0
  WarBoardManager_o *v26; // x19

  if ( (byte_49F9F82 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    byte_49F9F82 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(targetPiece, 0LL);
  if ( ((unsigned __int8)targetPiece & 1) != 0 )
  {
    warBoardManager = this->fields.warBoardManager;
    if ( !warBoardManager )
      goto LABEL_25;
    targetPiece = (WarBoardPieceData_o *)warBoardManager->fields._warBoardData_k__BackingField;
    if ( !targetPiece )
      goto LABEL_25;
    id = WarBoardData__get_id((WarBoardData_o *)targetPiece, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v15 = this->fields.targetPiece;
    if ( !v15 )
      goto LABEL_25;
    breakPoint_k__BackingField = v15->fields._breakPoint_k__BackingField;
    v17 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0LL);
    if ( !v17 )
      goto LABEL_25;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v18 = 12;
      v19 = 1;
      v20 = v17;
      v21 = id;
      v22 = breakPoint_k__BackingField;
    }
    else
    {
      v18 = 10;
      v20 = v17;
      v21 = id;
      v22 = breakPoint_k__BackingField;
      v19 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v20, v21, v18, v22, v19, 0LL);
    if ( !v10 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  targetPiece = (WarBoardPieceData_o *)this->fields.__4__this;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceBaseComponent__GetParticipantVals(
                                         (WarBoardPieceBaseComponent_o *)targetPiece,
                                         this->fields.targetPiece,
                                         v12);
  if ( !this->fields.warBoardManager )
    goto LABEL_25;
  v23 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0LL);
  if ( !v10 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v23, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  v25 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v23, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)v25,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v10,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v26 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v10,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v26 )
    {
      WarBoardManager__InsertRunningTask(v26, (WarBoardTaskBase_array *)targetPiece, 0LL);
      return;
    }
LABEL_25:
    sub_1B64324(targetPiece);
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
    sub_1B64324(0LL);
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
  const MethodInfo *v2; // x2
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_49F9F85 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9F85 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, v2),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(_4__this);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  WarBoardManager_o *Instance; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_49F9F84 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    byte_49F9F84 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0LL, 0LL);
  if ( !v9 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
LABEL_9:
    sub_1B64324(Instance);
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
    sub_1B64324(this);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}