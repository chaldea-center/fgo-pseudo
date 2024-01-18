void __fastcall BattleActionLogManager___ctor(BattleActionLogManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_IO_MemoryStream_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_IO_MemoryStream_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_IO_Stream_o *header; // x20
  System_IO_BinaryWriter_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_IO_Stream_o *data; // x20
  System_IO_BinaryWriter_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_418B858 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B2C35C(&System_IO_MemoryStream_TypeInfo, v3);
    byte_418B858 = 1;
  }
  v4 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v4, 0LL);
  this->fields.header = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v11, 0LL);
  this->fields.data = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  header = (System_IO_Stream_o *)this->fields.header;
  v19 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v19, header, 0LL);
  this->fields.headerWriter = v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.headerWriter,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  data = (System_IO_Stream_o *)this->fields.data;
  v27 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v27, data, 0LL);
  this->fields.dataWriter = v27;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dataWriter,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall BattleActionLogManager__Finalize(BattleActionLogManager_o *this, const MethodInfo *method)
{
  BattleActionLogManager__close(this, method);
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionLogManager__addHeader(
        BattleActionLogManager_o *this,
        int32_t logType,
        const MethodInfo *method)
{
  void *headerWriter; // x0
  struct System_IO_BinaryWriter_o *v5; // x19

  headerWriter = this->fields.headerWriter;
  if ( !headerWriter
    || ((*(void (__fastcall **)(void *, int32_t, _QWORD))(*(_QWORD *)headerWriter + 584LL))(
          headerWriter,
          logType,
          *(_QWORD *)(*(_QWORD *)headerWriter + 592LL)),
        (headerWriter = this->fields.data) == 0LL)
    || (v5 = this->fields.headerWriter,
        headerWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)headerWriter + 504LL))(
                                 headerWriter,
                                 *(_QWORD *)(*(_QWORD *)headerWriter + 512LL)),
        !v5) )
  {
    sub_B2C434(headerWriter, *(_QWORD *)&logType);
  }
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v5->klass->vtable._19_Write.method)(
    v5,
    headerWriter,
    v5->klass->vtable._20_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogContinue(BattleActionLogManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 5, v2);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_B2C434(0LL, v4);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    0LL,
    dataWriter->klass->vtable._18_Write.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionLogManager__addLogSelectCommand(
        BattleActionLogManager_o *this,
        int32_t selectIndex1,
        int32_t selectIndex2,
        int32_t selectIndex3,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 4, *(const MethodInfo **)&selectIndex2);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter
    || (((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
          dataWriter,
          (unsigned int)selectIndex1,
          dataWriter->klass->vtable._18_Write.methodPtr),
        (dataWriter = this->fields.dataWriter) == 0LL)
    || (((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
          dataWriter,
          (unsigned int)selectIndex2,
          dataWriter->klass->vtable._18_Write.methodPtr),
        (dataWriter = this->fields.dataWriter) == 0LL) )
  {
    sub_B2C434(dataWriter, v9);
  }
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    (unsigned int)selectIndex3,
    dataWriter->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogSelectTarget(
        BattleActionLogManager_o *this,
        int32_t selectIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 1, method);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_B2C434(0LL, v5);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    (unsigned int)selectIndex,
    dataWriter->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogUseCommandSpell(
        BattleActionLogManager_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  void *dataWriter; // x0
  __int64 v6; // x1
  struct System_Int32_array *ptTarget; // x8
  struct System_Int32_array *v8; // x21
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  struct System_IO_BinaryWriter_o *v11; // x19
  __int64 v12; // x0

  BattleActionLogManager__addHeader(this, 3, method);
  if ( !task )
    goto LABEL_13;
  ptTarget = task->fields.ptTarget;
  if ( !ptTarget )
    goto LABEL_13;
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    goto LABEL_13;
  dataWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)dataWriter + 584LL))(
                         dataWriter,
                         ptTarget->max_length,
                         *(_QWORD *)(*(_QWORD *)dataWriter + 592LL));
  v8 = task->fields.ptTarget;
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_QWORD *)&v8->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
        v12 = sub_B2C460(dataWriter);
        sub_B2C400(v12, 0LL);
      }
      dataWriter = this->fields.dataWriter;
      if ( !dataWriter )
        break;
      dataWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)dataWriter + 584LL))(
                             dataWriter,
                             (unsigned int)v8->m_Items[v10 + 1],
                             *(_QWORD *)(*(_QWORD *)dataWriter + 592LL));
      LODWORD(v9) = v8->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_10;
    }
LABEL_13:
    sub_B2C434(dataWriter, v6);
  }
LABEL_10:
  dataWriter = task->fields.skillInfo;
  if ( !dataWriter )
    goto LABEL_13;
  v11 = this->fields.dataWriter;
  dataWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)dataWriter + 392LL))(
                         dataWriter,
                         *(_QWORD *)(*(_QWORD *)dataWriter + 400LL));
  if ( !v11 )
    goto LABEL_13;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
    v11,
    (unsigned int)dataWriter,
    v11->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogUseSkill(
        BattleActionLogManager_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 ActorId; // x0
  __int64 v6; // x1
  struct System_IO_BinaryWriter_o *dataWriter; // x21
  struct System_IO_BinaryWriter_o *v8; // x21
  struct System_Int32_array *ptTarget; // x8
  struct System_Int32_array *v10; // x21
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  struct System_IO_BinaryWriter_o *v13; // x21
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 v15; // x0

  BattleActionLogManager__addHeader(this, 2, method);
  if ( !task )
    goto LABEL_17;
  dataWriter = this->fields.dataWriter;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !dataWriter )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    (unsigned int)ActorId,
    dataWriter->klass->vtable._18_Write.methodPtr);
  v8 = this->fields.dataWriter;
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  if ( !v8 )
    goto LABEL_17;
  ActorId = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
              v8,
              (unsigned int)ActorId,
              v8->klass->vtable._18_Write.methodPtr);
  ptTarget = task->fields.ptTarget;
  if ( !ptTarget )
    goto LABEL_17;
  ActorId = (__int64)this->fields.dataWriter;
  if ( !ActorId )
    goto LABEL_17;
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)ActorId + 584LL))(
              ActorId,
              ptTarget->max_length,
              *(_QWORD *)(*(_QWORD *)ActorId + 592LL));
  v10 = task->fields.ptTarget;
  if ( !v10 )
    goto LABEL_17;
  v11 = *(_QWORD *)&v10->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B2C460(ActorId);
        sub_B2C400(v15, 0LL);
      }
      ActorId = (__int64)this->fields.dataWriter;
      if ( !ActorId )
        break;
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)ActorId + 584LL))(
                  ActorId,
                  (unsigned int)v10->m_Items[v12 + 1],
                  *(_QWORD *)(*(_QWORD *)ActorId + 592LL));
      LODWORD(v11) = v10->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_12;
    }
LABEL_17:
    sub_B2C434(ActorId, v6);
  }
LABEL_12:
  ActorId = (__int64)task->fields.skillInfo;
  if ( !ActorId )
    goto LABEL_17;
  v13 = this->fields.dataWriter;
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ActorId + 392LL))(
              ActorId,
              *(_QWORD *)(*(_QWORD *)ActorId + 400LL));
  if ( !v13 )
    goto LABEL_17;
  ActorId = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
              v13,
              (unsigned int)ActorId,
              v13->klass->vtable._18_Write.methodPtr);
  skillInfo = task->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_17;
  ActorId = (__int64)this->fields.dataWriter;
  if ( !ActorId )
    goto LABEL_17;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)ActorId + 584LL))(
    ActorId,
    (unsigned int)skillInfo->fields.skilllv,
    *(_QWORD *)(*(_QWORD *)ActorId + 592LL));
}


void __fastcall BattleActionLogManager__close(BattleActionLogManager_o *this, const MethodInfo *method)
{
  System_IO_Stream_o *header; // x0
  struct System_IO_BinaryWriter_o *headerWriter; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_IO_BinaryWriter_o *v11; // x0
  BattleServantConfConponent_o *p_dataWriter; // x19
  struct System_IO_BinaryWriter_o *dataWriter; // t1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  header = (System_IO_Stream_o *)this->fields.header;
  if ( !header || (System_IO_Stream__Dispose(header, 0LL), (header = (System_IO_Stream_o *)this->fields.data) == 0LL) )
    sub_B2C434(header, method);
  System_IO_Stream__Dispose(header, 0LL);
  headerWriter = this->fields.headerWriter;
  if ( headerWriter )
  {
    ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, Il2CppMethodPointer))headerWriter->klass->vtable._5_Close.method)(
      headerWriter,
      headerWriter->klass->vtable._6_Dispose.methodPtr);
    this->fields.headerWriter = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.headerWriter, 0LL, v5, v6, v7, v8, v9, v10);
  }
  dataWriter = this->fields.dataWriter;
  p_dataWriter = (BattleServantConfConponent_o *)&this->fields.dataWriter;
  v11 = dataWriter;
  if ( dataWriter )
  {
    ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, Il2CppMethodPointer))v11->klass->vtable._5_Close.method)(
      v11,
      v11->klass->vtable._6_Dispose.methodPtr);
    p_dataWriter->klass = 0LL;
    sub_B2C2F8(p_dataWriter, 0LL, v14, v15, v16, v17, v18, v19);
  }
}


System_Byte_array *__fastcall BattleActionLogManager__getDataRaw(
        BattleActionLogManager_o *this,
        const MethodInfo *method)
{
  struct System_IO_MemoryStream_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B2C434(0LL, method);
  return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, void *))data->klass->vtable._37_ToArray.method)(
                                data,
                                data->klass[1]._1.image);
}


System_Byte_array *__fastcall BattleActionLogManager__getHeaderRaw(
        BattleActionLogManager_o *this,
        const MethodInfo *method)
{
  struct System_IO_MemoryStream_o *header; // x0

  header = this->fields.header;
  if ( !header )
    sub_B2C434(0LL, method);
  return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, void *))header->klass->vtable._37_ToArray.method)(
                                header,
                                header->klass[1]._1.image);
}


void __fastcall BattleActionLogManager__setData(
        BattleActionLogManager_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_B2C434(0LL, buffer);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, System_Byte_array *, Il2CppMethodPointer))dataWriter->klass->vtable._10_Write.method)(
    dataWriter,
    buffer,
    dataWriter->klass->vtable._11_Write.methodPtr);
}


void __fastcall BattleActionLogManager__setHeader(
        BattleActionLogManager_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *headerWriter; // x0

  headerWriter = this->fields.headerWriter;
  if ( !headerWriter )
    sub_B2C434(0LL, buffer);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, System_Byte_array *, Il2CppMethodPointer))headerWriter->klass->vtable._10_Write.method)(
    headerWriter,
    buffer,
    headerWriter->klass->vtable._11_Write.methodPtr);
}