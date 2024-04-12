void __fastcall ClassBoardForwardIconAnimComponent___ctor(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B3857 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19600/*"img_class_{0}"*/);
    sub_B52984(&StringLiteral_17102/*"btn_class"*/);
    byte_42B3857 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_19600/*"img_class_{0}"*/;
  this->fields.spriteNameFormatIcon = (struct System_String_o *)StringLiteral_19600/*"img_class_{0}"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.spriteNameFormatIcon, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_17102/*"btn_class"*/;
  this->fields.spriteNameButton = (struct System_String_o *)StringLiteral_17102/*"btn_class"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.spriteNameButton, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__PlayAnim(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Animation_o *v4; // x19
  System_String_o *name; // x1

  anim = this->fields.anim;
  if ( !anim
    || (UnityEngine_Animation__Rewind(anim, 0LL), (v4 = this->fields.anim) == 0LL)
    || (anim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(v4, 0LL)) == 0LL )
  {
    sub_B52A5C(anim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)anim, 0LL);
  UnityEngine_Animation__Play_51067744(v4, name, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Setup(
        ClassBoardForwardIconAnimComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        int32_t baseId,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x21
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  AtlasManagerUnit_o *sb; // x22
  UISprite_o *classIconUi; // x23
  System_String_o *spriteNameFormatIcon; // x24
  Il2CppObject *v18; // x0
  __int64 v19; // x3
  IClassBoardResourceCatalog_c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  int list; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B3856 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&int_TypeInfo);
    byte_42B3856 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    baseId,
                                                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    return;
  if ( !resourceCatalog )
    goto LABEL_27;
  klass = resourceCatalog->klass;
  v11 = Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AEB880(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v9);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(p_method + 8));
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  sb = (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster[1].fields.sb;
  classIconUi = this->fields.classIconUi;
  spriteNameFormatIcon = this->fields.spriteNameFormatIcon;
  list = (int)v11->fields.list;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &list);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    spriteNameFormatIcon,
                                                                                    v18,
                                                                                    0LL);
  if ( !sb )
    goto LABEL_27;
  AtlasManagerUnit__SetUI(sb, classIconUi, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v20 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v22 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_21:
    v23 = sub_AEB880(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v19);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v23)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v23 + 8));
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster[1].fields.seriazlier) == 0LL )
  {
LABEL_27:
    sub_B52A5C(Master_WarQuestSelectionMaster, v8);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster,
    this->fields.classButtonUi,
    this->fields.spriteNameButton,
    0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Validation(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  ;
}