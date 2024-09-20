void __fastcall ClassBoardForwardIconAnimComponent___ctor(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E591 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20274/*"img_class_{0}"*/);
    sub_1B885B0(&StringLiteral_17502/*"btn_class"*/);
    byte_4A5E591 = 1;
  }
  v5 = StringLiteral_20274/*"img_class_{0}"*/;
  this->fields.spriteNameFormatIcon = (struct System_String_o *)StringLiteral_20274/*"img_class_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spriteNameFormatIcon, v5, v2, v3);
  v6 = StringLiteral_17502/*"btn_class"*/;
  this->fields.spriteNameButton = (struct System_String_o *)StringLiteral_17502/*"btn_class"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spriteNameButton, v6, v7, v8);
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
    sub_1B8880C(anim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)anim, 0LL);
  UnityEngine_Animation__Play_69204472(v4, name, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Setup(
        ClassBoardForwardIconAnimComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        int32_t baseId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  IClassBoardResourceCatalog_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  AtlasManagerUnit_o *sb; // x22
  UISprite_o *classIconUi; // x23
  System_String_o *spriteNameFormatIcon; // x24
  Il2CppObject *v20; // x0
  IClassBoardResourceCatalog_c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  int list; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5E590 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E590 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  baseId,
                                                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Master_object )
    return;
  if ( !resourceCatalog )
    goto LABEL_26;
  klass = resourceCatalog->klass;
  v10 = Master_object;
  v11 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(p_method + 8));
  if ( !Master_object )
    goto LABEL_26;
  sb = (AtlasManagerUnit_o *)Master_object[1].fields.sb;
  classIconUi = this->fields.classIconUi;
  spriteNameFormatIcon = this->fields.spriteNameFormatIcon;
  list = (int)v10->fields.list;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &list, v14, v15, v16);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(spriteNameFormatIcon, v20, 0LL);
  if ( !sb )
    goto LABEL_26;
  AtlasManagerUnit__SetUI(sb, classIconUi, (System_String_o *)Master_object, 0LL);
  v21 = resourceCatalog->klass;
  v22 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v23 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_20;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_20:
    v24 = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v24)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v24 + 8));
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[1].fields.seriazlier) == 0LL )
  {
LABEL_26:
    sub_1B8880C(Master_object, v8);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_object,
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